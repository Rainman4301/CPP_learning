import stat


class Person:
    id_person = 0

    def __init__(self, name, age):
        self.name = name
        self.age = age
        Person.id_person += 1
        self.id = self.id_person


    @classmethod
    def print_num_person(cls):
        return cls.id_person
    
    @staticmethod
    def isAdult(age):
        return age >= 18
    

p1 = Person('john',26)
p2 = Person('nathan', 25)



print(p1.id)
print(p2.print_num_person())
print(Person.print_num_person())




print(p1.isAdult(30))
print(Person.isAdult(10))

