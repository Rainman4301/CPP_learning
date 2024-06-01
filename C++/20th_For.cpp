#include <iostream>

int main()
{

    for (int i = 0; i <= 10; i += 2)
    {
        std::cout << "Hi bro " << i << '\n';
    }

    int i[] = {1, 8, 3, 4, 6, 9, 7};

    for (auto h : i)
    {
        std::cout << h << '\n';
    }

    for (int h : i)
    {
        std::cout << h << '\n';
    }

    return 0;
}