#include <iostream>

int main()
{

    int month;
    std::cout << "input your month:";
    std::cin >> month;

    switch (month)
    {
    case (1):
    case (6):
    {
        std::cout << "it is 1";
        break;
    }
    case (2):
    {
        std::cout << "it is 2";
        break;
    }
    case (3):
    {
        std::cout << "it is 3";
        break;
    }
    case (4):
    {
        std::cout << "it is 4";
        break;
    }
    default:
        std::cout << "out of bound";
    }

    return 0;
}
