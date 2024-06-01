#include <iostream>

int main()
{

    std::string name;

    while (name.empty())
    {
        std::cout << "Enter your name\n";
        std::getline(std::cin >> std::ws, name);
    }

    std::cout << "Heloow " << name;
    return 0;
}