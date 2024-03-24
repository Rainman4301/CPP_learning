from datetime import date
  
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age
      
    # class method (create a Person object by birth year)
    @classmethod
    def fromBirthYear(cls, name, year):
        return cls(name, date.today().year - year)
      
    # static method (check if a Person is adult or not)
    @staticmethod
    def isAdult(age):
        return age > 18

p1 = Person('john', 26)
p2 = Person.fromBirthYear('john', 1996)
  
print(p1.age)
print(type(p1))
print(p2.age)
print(type(p2))

print(Person.isAdult(19))