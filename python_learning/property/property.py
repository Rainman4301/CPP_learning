












class Q11Employee:
    def __init__(self):
        self.name = None
        self.age = None
        self.account = None
        self.salary = None

    def set_name(self, name):
        self.name = name

    def set_age(self, age):
        self.age = age

    def set_account(self, account):
        self.account = account

    def set_salary(self, salary):
        self.salary = salary

    def get_name(self):
        return self.name

    def get_age(self):
        return self.age

    def get_account(self):
        return self.account

    def get_salary(self):
        return self.salary

    def wages(self, months):
        return self.salary * months


# Create an object q11_o of the class
q11_o = Q11Employee()

# Set the attributes
q11_o.set_name('John')
q11_o.set_age(19)
q11_o.set_account(1234)
q11_o.set_salary(1000)

# Printing the attributes
print("Name:", q11_o.get_name())
print("Age:", q11_o.get_age())
print("Account:", q11_o.get_account())
print("Salary:", q11_o.get_salary())

# Calculate wages for 12 months
print("Wages for 12 months:", q11_o.wages(12))







print("===============================================")






class Q11Employee:
    def __init__(self):
        self._name = None
        self._age = None
        self._account = None
        self._salary = None

    @property
    def name(self):
        return self._name

    @name.setter
    def name(self, value):
        self._name = value

    @property
    def age(self):
        return self._age

    @age.setter
    def age(self, value):
        self._age = value

    @property
    def account(self):
        return self._account

    @account.setter
    def account(self, value):
        self._account = value

    @property
    def salary(self):
        return self._salary

    @salary.setter
    def salary(self, value):
        self._salary = value

    def wages(self, months):
        return self.salary * months


# Create an object q11_o of the class
q11_o = Q11Employee()

# Set the attributes
q11_o.name = 'John'
q11_o.age = 19
q11_o.account = 1234
q11_o.salary = 1000

# Printing the attributes
print("Name:", q11_o.name)
print("Age:", q11_o.age)
print("Account:", q11_o.account)
print("Salary:", q11_o.salary)

# Calculate wages for 12 months
print("Wages for 12 months:", q11_o.wages(12))






