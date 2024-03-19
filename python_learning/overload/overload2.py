class Calculator:

    def add(self, x, y=0):
        return x + y
    
    def add(self, *args):
        return sum(args)

# Example usage:
calc = Calculator()
print(calc.add(2, 3))  # Output: 5
print(calc.add(2))     # Output: 2

