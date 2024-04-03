import numpy as np

def pca(X, num_components):
    # Center the data
    mean = np.mean(X, axis=0)
    X_centered = X - mean
    
    # Compute the covariance matrix
    covariance_matrix = np.cov(X_centered, rowvar=False)
    
    # Perform eigendecomposition on the covariance matrix
    eigenvalues, eigenvectors = np.linalg.eig(covariance_matrix)
    
    # Sort eigenvalues and corresponding eigenvectors in descending order
    sorted_indices = np.argsort(eigenvalues)[::-1]
    sorted_eigenvalues = eigenvalues[sorted_indices]
    sorted_eigenvectors = eigenvectors[:, sorted_indices]
    
    # Select the top k eigenvectors (principal components)
    principal_components = sorted_eigenvectors[:, :num_components]
    
    # Project the data onto the principal components
    projected_data = np.dot(X_centered, principal_components)
    
    return projected_data, principal_components

# Generate sample data (20x10 matrix)
np.random.seed(42)
data = np.random.rand(20, 10)

# Specify number of principal components
num_components = 3

# Perform PCA
result, principal_components = pca(data, num_components)

print("Original data:")
print(data)
print("\nShape of original data:", data.shape)

print("\nProjected data (new matrix):")
print(result)
print("\nShape of projected data:", result.shape)
