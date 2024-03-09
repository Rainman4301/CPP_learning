#include <iostream>

void happy()
{

    std::cout << "Happ big boy\n";
}

int givemoney(int ggg, std::string baby);
int main()
{
    // function = a block of reusable code
    happy();

    std::cout << "I have " << givemoney(100, "Amiable") << " $$$$$";

    givemoney(10, "Ruth");

    return 0;
}

int givemoney(int ggg, std::string baby)
{
    int i = 0;
    for (int g = 0; g <= 10; g++)
    {
        i += g;
    }
    std::cout << ggg << '\n';
    std::cout << baby << '\n';

    return i;
}