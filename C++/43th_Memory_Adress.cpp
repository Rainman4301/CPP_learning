#include <iostream>

int main()
{
    // memory address = a location in memory where data is stored
    // a memory address can accessed with & (address-of operator)

    int *g;
    int h = 100;
    g = &h;
    std::cout << *g << '\n';

    std::string name = "Bro";
    int age = 123;
    bool student = true;
    std::cout << &name << '\n';    // 0x6d7edff850:470280042576
    std::cout << &age << '\n';     // 0x6d7edff84c:470280042572
    std::cout << &student << '\n'; // 0x6d7edff84b:470280042571

    return 0;
}