
# __add__ overrides the addition (+) operator.
# __sub__ overrides the subtraction (-) operator.
# __mul__ overrides the multiplication (*) operator.
# __truediv__ or __div__ (in Python 2) overrides the division (/) operator.
# __floordiv__ overrides the floor division (//) operator.
# __mod__ overrides the modulo (%) operator.
# __pow__ overrides the exponentiation (**) operator.
# __lt__ overrides the less than (<) operator.
# __gt__ overrides the greater than (>) operator.
# __le__ overrides the less than or equal to (<=) operator.
# __ge__ overrides the greater than or equal to (>=) operator.
# __eq__ overrides the equality (==) operator.
# __ne__ overrides the inequality (!=) operator.




class Adder:
    def __init__(self, value):
        self.value = value

    def __add__(self, other):
        return Adder(self.value + other.value)


class Vector:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __sub__(self, other):
        return Vector(self.x - other.x, self.y - other.y)

# Usage:
v1 = Vector(5, 3)
v2 = Vector(2, 4)

result = v1 - v2
print(f"Result: ({result.x}, {result.y})")  # Output: Result: (3, -1)









class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __mul__(self, scalar):
        return Point(self.x * scalar, self.y * scalar)

# Usage:
p1 = Point(2, 3)

result = p1 * 2
print(f"Result: ({result.x}, {result.y})")  # Output: Result: (4, 6)




class Fraction:
    def __init__(self, numerator, denominator):
        self.numerator = numerator
        self.denominator = denominator

    def __truediv__(self, other):
        if isinstance(other, Fraction):
            return self.numerator * other.denominator, self.denominator * other.numerator
        else:
            return self.numerator / other, self.denominator

# Usage:
frac1 = Fraction(1, 2)
frac2 = Fraction(2, 3)

result = frac1 / frac2
print(f"Result: {result[0]}/{result[1]}")  # Output: Result: 3/4







class MyNumber:
    def __init__(self, value):
        self.value = value

    def __floordiv__(self, other):
        return self.value // other

# Usage:
num = MyNumber(10)

result = num // 3
print(f"Result: {result}")  # Output: Result: 3







class MyNumber:
    def __init__(self, value):
        self.value = value

    def __mod__(self, other):
        return self.value % other

# Usage:
num = MyNumber(10)

result = num % 3
print(f"Result: {result}")  # Output: Result: 1






class MyNumber:
    def __init__(self, value):
        self.value = value

    def __pow__(self, exponent):
        return self.value ** exponent

# Usage:
num = MyNumber(2)

result = num ** 3
print(f"Result: {result}")  # Output: Result: 8





class Rectangle:
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def __lt__(self, other):
        return self.area() < other.area()

    def area(self):
        return self.width * self.height

# Usage:
rect1 = Rectangle(3, 4)
rect2 = Rectangle(5, 2)

if rect1 < rect2:
    print("Rectangle 1 has a smaller area than Rectangle 2")
else:
    print("Rectangle 1 has a larger area than Rectangle 2")












class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __eq__(self, other):
        return self.x == other.x and self.y == other.y

# Usage:
point1 = Point(3, 4)
point2 = Point(3, 4)
point3 = Point(5, 6)

print(point1 == point2)  # Output: True
print(point1 == point3)  # Output: False








class MyClass:
    def __init__(self, value):
        self.value = value

    def __str__(self):
        return f'MyClass object with value: {self.value}'

    def __repr__(self):
        return f'MyClass({self.value})'

# Usage:
obj = MyClass(42)

# print() calls __str__
print(obj)  # Output: MyClass object with value: 42

# repr() calls __repr__
print(repr(obj))  # Output: MyClass(42)











# __str__: Overrides the str() function and defines the string representation of an object.
# __repr__: Overrides the repr() function and defines a printable representation of an object.
# __len__: Overrides the len() function and defines the length of an object.
# __getitem__: Overrides the indexing ([]) operation for accessing items by index.
# __setitem__: Overrides the indexing ([]) operation for setting items by index.
# __delitem__: Overrides the indexing ([]) operation for deleting items by index.
# __iter__: Overrides iteration behavior, enabling the object to be iterable.
# __next__: Overrides the behavior of obtaining the next item in an iteration.
# __contains__: Overrides the in operator and defines membership test operations.
# __call__: Overrides the function call syntax and makes an object callable.
# __enter__ and __exit__: Overrides behavior when entering and exiting a context manager using with statement.
# __hash__: Overrides the hashing behavior for objects, used for creating hashable objects.
# __getattr__: Overrides behavior for attribute access when an attribute is not found.
# __setattr__: Overrides behavior for attribute assignment.
# __delattr__: Overrides behavior for attribute deletion.
# __format__: Overrides the format() function and defines custom string formatting.






class MyClass:
    def __init__(self, value):
        self.value = value

    def __str__(self):
        return f'MyClass object with value: {self.value}'

# Usage:
obj = MyClass(42)
print(str(obj))  # Output: MyClass object with value: 42






class MyClass:
    def __init__(self, value):
        self.value = value

    def __repr__(self):
        return f'MyClass({self.value})'

# Usage:
obj = MyClass(42)
print(repr(obj))  # Output: MyClass(42)






class MyList:
    def __init__(self, items):
        self.items = items

    def __len__(self):
        return len(self.items)

# Usage:
lst = MyList([1, 2, 3, 4, 5])
print(len(lst))  # Output: 5







class MyList:
    def __init__(self, items):
        self.items = items

    def __getitem__(self, index):
        return self.items[index]

# Usage:
lst = MyList([1, 2, 3, 4, 5])
print(lst[2])  # Output: 3





class MyList:
    def __init__(self, items):
        self.items = items

    def __setitem__(self, index, value):
        self.items[index] = value

# Usage:
lst = MyList([1, 2, 3, 4, 5])
lst[2] = 10
print(lst.items)  # Output: [1, 2, 10, 4, 5]






class MyList:
    def __init__(self, items):
        self.items = items

    def __delitem__(self, index):
        del self.items[index]

# Usage:
lst = MyList([1, 2, 3, 4, 5])
del lst[2]
print(lst.items)  # Output: [1, 2, 4, 5]






class MyIterator:
    def __init__(self, data):
        self.data = data
        self.index = 0

    def __iter__(self):
        return self

    def __next__(self):
        if self.index < len(self.data):
            value = self.data[self.index]
            self.index += 1
            return value
        else:
            raise StopIteration

# Usage:
iterator = MyIterator([1, 2, 3, 4, 5])
for item in iterator:
    print(item)  # Output: 1, 2, 3, 4, 5






class MyContainer:
    def __init__(self, data):
        self.data = data

    def __contains__(self, item):
        return item in self.data

# Usage:
container = MyContainer([1, 2, 3, 4, 5])
print(3 in container)  # Output: True
print(6 in container)  # Output: False





class MyCallable:
    def __call__(self, x, y):
        return x + y

# Usage:
callable_obj = MyCallable()
print(callable_obj(3, 4))  # Output: 7







class MyContextManager:
    def __enter__(self):
        print("Entering the context")

    def __exit__(self, exc_type, exc_value, traceback):
        print("Exiting the context")

# Usage:
with MyContextManager():
    print("Inside the context")





class MyClass:
    def __init__(self, value):
        self.value = value

    def __hash__(self):
        return hash(self.value)

# Usage:
obj = MyClass(42)
print(hash(obj))





class MyDynamicObject:
    def __init__(self, data):
        self.data = data

    def __getattr__(self, name):
        return f"Attribute {name} not found"

# Usage:
obj = MyDynamicObject({"key": "value"})
print(obj.data)  # Output: {'key': 'value'}
print(obj.unknown_attribute)  # Output: Attribute unknown_attribute not found








class MyProtectedObject:
    def __setattr__(self, name, value):
        if name.startswith("_"):
            super().__setattr__(name, value)
        else:
            raise AttributeError("Cannot set non-protected attributes")

# Usage:
obj = MyProtectedObject()
obj._protected_attribute = "value"  # This is allowed
print(obj._protected_attribute)  # Output: value
obj.non_protected_attribute = "value"  # This will raise an AttributeError






class MyImmutableObject:
    def __delattr__(self, name):
        raise AttributeError("Cannot delete attributes")

# Usage:
obj = MyImmutableObject()
obj.attribute = "value"  # This is allowed
print(obj.attribute)  # Output: value
del obj.attribute  # This will raise an AttributeError






class MyCustomFormat:
    def __format__(self, format_spec):
        return f"Custom formatted output with format specifier: {format_spec}"

# Usage:
obj = MyCustomFormat()
print(format(obj, "<10"))  # Output: Custom formatted output with format specifier: <10





