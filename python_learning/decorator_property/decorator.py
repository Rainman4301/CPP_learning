# Decorator function
def print_args(func):

    print(type(func))

    def wrapper(*args, **kwargs):
        print("Arguments:", args)
        print("Keyword arguments:", kwargs)

        # print(type(func(*args, **kwargs)))
        
        return func(*args, **kwargs)
    return wrapper

# Function decorated with @print_args
@print_args
def greet(name, age):
    print(f"Hello {name}, you are {age} years old!")

# Call the decorated function
greet("Alice", age=30)