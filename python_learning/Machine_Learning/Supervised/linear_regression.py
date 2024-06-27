import numpy as np
X1 = np.array([
            [1,2],
            [1,0],
            [1,3] ])
y1 = np.array([-1,5,-10])

print(X1)
print(y1)

Beta1 = np.matmul(np.matmul(np.linalg.inv(np.matmul(X1.T,X1)),X1.T),y1)
print(Beta1)


print("=====================================")

X2 = np.array([
            [1,2,4],
            [1,0,0],
            [1,3,9] ])
y2 = np.array([-1,5,-10])

print(X2)
print(y2)


Beta2 = np.matmul(np.matmul(np.linalg.inv(np.matmul(X2.T,X2)),X2.T),y2)
print(Beta2)


print("=====================================")

import matplotlib.pyplot as plt

y1fun = Beta1[0] + Beta1[1]*X1[:,1]
y2fun = Beta2[0] + Beta2[1]*X2[:,1] + Beta2[2]*X2[:,2]

#draw y1fun and y2fun

xvals = np.linspace(-10,10,100)
y1vals = Beta1[0] + Beta1[1]*xvals
y2vals = Beta2[0] + Beta2[1]*xvals + Beta2[2]*xvals**2

plt.plot(xvals,y1vals,'r',label='y1_linear',linewidth=2)
plt.plot(xvals,y2vals,'b',label='y2_quadratic',linewidth=2)
plt.legend()
plt.show()


