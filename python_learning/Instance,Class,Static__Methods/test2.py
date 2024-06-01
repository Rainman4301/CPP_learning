class MyClass:
    class_variable = 0

    def __init__(self, x):
        self.x = x

    # Instance method
    def instance_method(self):
        print("Instance method called")
        return self.x

    # Class method
    @classmethod
    def class_method(cls):
        print("Class method called")
        return cls.class_variable

    # Static method
    @staticmethod
    def static_method():
        print("Static method called")

    # Static method to perform addition
    @staticmethod
    def add(a, b):
        return a + b


# Creating an instance of MyClass
obj = MyClass(5)

# Calling instance method
print(obj.instance_method())  # Output: Instance method called \n 5

# Calling class method
print(MyClass.class_method())  # Output: Class method called \n 0

# Calling static method
MyClass.static_method()  # Output: Static method called

# Calling static method for addition
result = MyClass.add(3, 4)
print("Result of addition:", result)  # Output: Result of addition: 7






'''

In this example, instance_method operates on instance-specific data (self.x),
class_method operates on class-specific data (cls.class_variable),
and static_method is independent of both instance and class data.

'''



