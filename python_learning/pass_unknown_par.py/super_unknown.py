class Person:
    def __init__(self, name='', house=None, gender=None, **kwargs):
        self.name = name
        self.house = house
        self.gender = gender
        print(kwargs)
        super().__init__(**kwargs)


class WizardingPower:
    def __init__(self, magical_strength=0, **kwargs):
        self.magical_strength = magical_strength
        print(kwargs)
        super().__init__(**kwargs)


class Wizard(Person, WizardingPower):
    def __init__(self, **kwargs):
        kwargs['gender'] = 'male'  # add a keyword argument
        print(kwargs)
        super().__init__(**kwargs)


harry = Wizard(name='Harry Potter', house='Gryffindor', magical_strength=10)

print(Wizard.__mro__)
# print(harry)

