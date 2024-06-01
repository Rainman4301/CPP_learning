#include <iostream>

int main()
{

    std::string name[] = {"aaaa", "bbbbb", "cccccc"};
    for (std::string ssss : name)
    {
        std::cout << ssss << '\n';
    }

    for (int i; i < sizeof(name) / sizeof(std::string); i++)
    {
        std::cout << name[i] << '\n';
    }

    int grade[] = {88, 99, 87, 98, 100};
    for (int num : grade)
    {
        std::cout << num << '\n';
    }

    return 0;
}