# 這是透過dir找class所有attributes & function 再透過 name mangling access private attribute from OBJ








class MyClass:
    def __init__(self, value,protect_value):
        self.__private_attribute = value
        self._protected_attribute = protect_value

    def get_private_attribute(self):
        return self.__private_attribute

    def set_private_attribute(self, value):
        self.__private_attribute = value

# Usage:
obj = MyClass(42,696996966)

# Attempt to access the private attribute directly (will raise an AttributeError)
# print(obj.__private_attribute)

# Access the private attribute using a getter method
print(obj.get_private_attribute())  # Output: 42

# Set the private attribute using a setter method
obj.set_private_attribute(100)
print(obj.get_private_attribute())  # Output: 100



#name mangling to access private attribute from the object 
print(obj._MyClass__private_attribute)


print("\n\n")
attributes = dir(obj)
print(attributes)







