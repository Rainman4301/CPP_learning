#include <iostream>

class Human
{
public:
    std::string name;
    std::string occupation;
    int age;
    std::string personallity = "neat freak";

    void eat()
    {
        std::cout << "The person is eating \n";
    }
    void drink()
    {
        std::cout << "The person is drinking\n";
    }
    void sleeping()
    {
        std::cout << "The person is sleeping\n";
    }
};

class Car
{
public:
    std::string make;
    std::string model;
    int year;
    std::string colour;

    void accelerate()
    {
        std::cout << "You step on the gas! \n";
    }
    void brake()
    {
        std::cout << "You step on the brakes! \n";
    }
};

int main()
{

    Human human1;
    human1.name = "Rick";
    human1.occupation = "Scientist";
    human1.age = 70;

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';
    std::cout << human1.personallity << '\n';
    human1.eat();
    human1.drink();
    human1.sleeping();

    Human human2;
    human2.name = "Morty";
    human2.occupation = "Student";
    human2.age = 15;

    std::cout << human2.name << '\n';
    std::cout << human2.occupation << '\n';
    std::cout << human2.age << '\n';
    human1.eat();
    human1.drink();
    human1.sleeping();

    Car car1;
    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 2023;
    car1.colour = "Silver";
    car1.accelerate();
    car1.brake();
    return 0;
}