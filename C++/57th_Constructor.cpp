#include <iostream>

// constructor =  special method that is automatically called when an object is instantiated
//                useful for assigning values to attributes as arguments

class student
{
public:
    std::string name;
    int age;
    double gpa;

    student(std::string name, int age, double gpa)
    {

        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

class Car
{
public:
    std::string make;
    std::string model;
    int year;
    std::string colour;
    Car(std::string make, std::string model, int year, std::string colour)
    {
        this->make = make;
        this->model = model;
        this->year = year;
        this->colour = colour;
    }
};

int main()
{

    student student1("Spongebob", 25, 3.2);
    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';

    student student2("patrick", 40, 3.1);
    std::cout << student2.name << '\n';
    std::cout << student2.age << '\n';
    std::cout << student2.gpa << '\n';

    student student3("Sandy", 21, 4);
    std::cout << student3.name << '\n';
    std::cout << student3.age << '\n';
    std::cout << student3.gpa << '\n';

    Car car1("Chevy", "Corvette", 2022, "blue");
    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.colour << '\n';

    Car car2("Ford", "Mustang", 2023, "Red");
    return 0;
}