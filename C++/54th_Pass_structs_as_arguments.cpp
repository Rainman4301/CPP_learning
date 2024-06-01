#include <iostream>

struct Cars
{
    std::string model;
    int year;
    std::string colour;
};

void paintcar(Cars &car, std::string colour);
void printcar(Cars &car);
int main()
{

    Cars car1;
    Cars car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.colour = "Red";

    car2.model = "Corvette";
    car2.year = 2024;
    car2.colour = "Black";

    paintcar(car1, "Silver");
    paintcar(car2, "Gold");

    std::cout << &car1 << '\n';
    printcar(car1);
    std::cout << &car2 << '\n';
    printcar(car2);

    return 0;
}
// This is the method of reference for & ==> the memory address is the same
void printcar(Cars &car)
{
    std::cout << &car << '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.colour << '\n';
}

void paintcar(Cars &car, std::string colour)
{
    car.colour = colour;
}