#include <iostream>

void printinfo(const std::string name, const int age);
int main()
{

    std::string name = "Bro";
    int age = 21;

    printinfo(name, age);
    return 0;
}

void printinfo(const std::string name, const int age)
{

    std::cout << name << '\n';
    std::cout << age << '\n';
}