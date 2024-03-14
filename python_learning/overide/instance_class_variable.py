class Person:
    age = 36
    def myfunc(self):
        Person.age += 10 
        print("Hello my age is " , self.age)

p1 = Person()
# the instance variable will override the class variable
p1.age = 10
p1.myfunc()
print(p1.age)
p1.myfunc()
print(p1.age)

print("=====================================")
print(Person.age)
print("=====================================")


p2 = Person()
p2.age = 10
p2.myfunc()
print(p2.age)
p2.myfunc()
print(p2.age)
