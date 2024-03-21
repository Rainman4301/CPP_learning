import matplotlib.pyplot as plt
import numpy as np
from sklearn.linear_model import LinearRegression

# Define the data
hours_studied = np.array([2, 3, 4, 5, 6]).reshape(-1, 1)  # Reshape to create a column vector
exam_scores = np.array([60, 70, 80, 85, 90])

# Plot the data
plt.scatter(hours_studied, exam_scores)
plt.title('Exam Score vs Hours Studied')
plt.xlabel('Hours Studied')
plt.ylabel('Exam Score')
plt.grid(True)
plt.show()

# Fit the linear regression model
model = LinearRegression()
model.fit(hours_studied, exam_scores)

# Get the slope (coefficient) and intercept of the line
slope = model.coef_[0]
intercept = model.intercept_

print("Slope:", slope)
print("Intercept:", intercept)



hours_studied_new = 7
predicted_score = model.predict([[hours_studied_new]])
print("Predicted Exam Score for 7 hours of study:", predicted_score[0])
