class Circle:
    def __init__(self, radius):
        self._radius = radius

    @property
    def radius(self):
        return self._radius

    @radius.setter
    def radius(self, value):
        if value <= 0:
            raise ValueError("Radius must be positive")
        self._radius = value

    @radius.deleter
    def radius(self):
        del self._radius


# Example usage:
circle = Circle(5)
print(circle.radius)  # Output: 5

circle.radius = 7
print(circle.radius)  # Output: 7

del circle.radius
# Accessing circle.radius here would raise an AttributeError
