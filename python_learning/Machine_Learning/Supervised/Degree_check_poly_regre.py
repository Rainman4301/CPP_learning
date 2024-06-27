import numpy as np
import matplotlib.pyplot as plt
from sklearn.preprocessing import PolynomialFeatures
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_squared_error, r2_score
from sklearn.model_selection import train_test_split, cross_val_score



# Step 1: Generate sample data
np.random.seed(0)
x = np.random.normal(0, 1, 100)
y = 3 * x - 2 * (x ** 2) + 0.5 * (x ** 3) + np.random.normal(0, 1, 100)
x = x[:, np.newaxis]


print("x: \n", len(x))
print("y: \n", len(y))

plt.figure()
plt.title('Sample Data')
plt.scatter(x, y, s=10)
plt.show()

print ("=====================================")


# Step 2: Split the data into training and testing sets
x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.2, random_state=0)




# Step 3: Fit Polynomial Models and Evaluate
degrees = [1, 2, 3, 4, 5]
cv_scores = []

for degree in degrees:
    polynomial_features = PolynomialFeatures(degree=degree)
    x_poly_train = polynomial_features.fit_transform(x_train)
    x_poly_test = polynomial_features.transform(x_test)
    
    # Fit the model
    model = LinearRegression()
    model.fit(x_poly_train, y_train)
    y_poly_pred = model.predict(x_poly_test)
    
    # Evaluate the model
    mse = mean_squared_error(y_test, y_poly_pred)
    rmse = np.sqrt(mse)
    r2 = r2_score(y_test, y_poly_pred)
    
    # Cross-validation
    scores = cross_val_score(LinearRegression(), polynomial_features.fit_transform(x), y, scoring='neg_mean_squared_error', cv=10)
    cv_score = -scores.mean()
    
    cv_scores.append(cv_score)
    print(f"Degree: {degree}, RMSE: {rmse:.4f}, R^2: {r2:.4f}, CV-MSE: {cv_score:.4f}")

   # use subplot 
    
    plt.subplot(2, 3, degree)
    plt.scatter(x_test,y_poly_pred, color='blue', label='Predicted Values')
    plt.title(f'Degree: {degree}')
    plt.tight_layout()
    
    


    




plt.show()

# Step 4: Plot cross-validation scores
plt.figure(figsize=(8, 5))
plt.plot(degrees, cv_scores, marker='o')
plt.xlabel('Polynomial Degree')
plt.ylabel('Cross-Validated MSE')
plt.title('Model Selection based on Cross-Validation')
plt.show()