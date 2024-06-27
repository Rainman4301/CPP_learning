import numpy as np
import matplotlib.pyplot as plt
from sklearn.svm import SVC

# Generate a small dataset
np.random.seed(41)  # For reproducibility


# print(np.random.randn(10, 2))

# 10 positive points around (2, 2)
class_a = np.random.randn(10, 2) + [1, 1.5]
# print("class_a:\n", class_a)

# 10 negative points around (-2, -2)
class_b = np.random.randn(10, 2) + [-1, -1.5]
# print("class_b:\n", class_b)

# Combine the data
X = np.vstack((class_a, class_b))
print("X:\n", X)
y = np.array([1] * 10 + [-1] * 10)
print("y:\n", y)

# Create an SVM classifier with a linear kernel and fit the model


svm_classifier = SVC(kernel='linear', C=1e10)
#calculate the margin and support vectors
svm_classifier.fit(X, y)
support_vectors = svm_classifier.support_vectors_
margin = 2 / np.linalg.norm(svm_classifier.coef_[0])
weights = svm_classifier.coef_[0]
bias = svm_classifier.intercept_






# for C in np.arange(0.01,10,0.01):
#     # print("C:",C)
#     svm_classifier = SVC(kernel='linear', C=C)
#     #calculate the margin and support vectors



# Obtain the support vectors, weights, bias, and calculate the margin


# Print the support vectors and margin
print("Support Vectors:")
print(support_vectors)

print("Margin:")
print(margin)

print("weights:")
print(weights)

print("bias:")
print(bias)


# Plot the decision boundary, margin boundaries, and support vectors
plt.scatter(X[:, 0], X[:, 1], c=y, cmap='coolwarm')
ax = plt.gca()
xlim = ax.get_xlim()
ylim = ax.get_ylim()

# Create grid to evaluate model
xx, yy = np.meshgrid(np.linspace(xlim[0], xlim[1], 100),
                     np.linspace(ylim[0], ylim[1], 100))
Z = svm_classifier.decision_function(np.c_[xx.ravel(), yy.ravel()])
Z = Z.reshape(xx.shape)

# Plot decision boundary and margins
plt.contour(xx, yy, Z, colors='k', levels=[-1, 0, 1], alpha=0.5,
            linestyles=['--', '-', '--'])

# Highlight support vectors
plt.scatter(support_vectors[:, 0], support_vectors[:, 1], s=100,
            linewidth=1, facecolors='none', edgecolors='k')

plt.xlabel("Feature 1")
plt.ylabel("Feature 2")
plt.title("SVM Decision Boundary, Margin Boundaries, and Support Vectors")
plt.show()





margin_list = []
support_vectors_list = []
weights_list = []
bias_list = []



for C in np.arange(0.01,10,0.01):
    # print("C:",C)
    svm_classifier = SVC(kernel='linear', C=C)
    #calculate the margin and support vectors
    svm_classifier.fit(X, y)
    support_vectors = svm_classifier.support_vectors_
    margin = 2 / np.linalg.norm(svm_classifier.coef_[0])
    weights = svm_classifier.coef_[0]
    bias = svm_classifier.intercept_
    margin_list.append(margin)
    support_vectors_list.append(support_vectors)
    weights_list.append(weights)
    bias_list.append(bias)


plt.plot(np.arange(0.01,10,0.01),margin_list)
plt.xlabel("C")
plt.ylabel("Margin")
plt.title("Margin vs C")
plt.show()

plt.plot(np.arange(0.01,10,0.01),bias_list)
plt.xlabel("C")
plt.ylabel("Bias")
plt.title("Bias vs C")
plt.show()

plt.plot(np.arange(0.01,10,0.01),weights_list)
plt.xlabel("C")
plt.ylabel("Weights")
plt.title("Weights vs C")
plt.show()

plt.plot(np.arange(0.01,10,0.01),support_vectors_list)
plt.xlabel("C")
plt.ylabel("Support Vectors")
plt.title("Support Vectors vs C")
plt.show()





