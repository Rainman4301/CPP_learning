class Parent:
    def greet(self, name):
        print("Hello,", name)


class Child(Parent):
    def greet(self, name, age):
        print(f"Hi, {name}! You are {age} years old.")
    
    def greet(self, name):
        print("Hello,", name)


# Example usage:
parent = Parent()
parent.greet("Alice")  # Output: Hello, Alice

child = Child()
child.greet("Bob", 25)  # Output: Hi, Bob! You are 25 years old. ==> Error
child.greet("Bob")  # Output: Hello, Bob
