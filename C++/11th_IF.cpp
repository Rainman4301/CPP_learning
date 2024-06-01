#include <iostream>

// > , < , == , >= , <=

int main()
{

    int age;
    std::cout << "input your age:";
    std::cin >> age;

    if ((age>=18) && (age < 40))
    {
        std::cout << "horny boy";
    }
    else if (age >= 40)
    {
        std::cout << "horny adult";
    }
    else
    {
        std::cout << "too young to be horny ";
    }

    return 0;
}