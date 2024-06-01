#include <iostream>

int main()
{

    int row;
    int column;
    char symbol;

    std::cout << "How many rows?: ";
    std::cin >> row;

    std::cout << "How many column?: ";
    std::cin >> column;

    std::cout << "Enter a symbol to use: ";
    std::cin >> symbol;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            std::cout << symbol;
        }
        std::cout << '\n';
    }

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            for (int k = 1; k <= 3; k++)
            {
                std::cout << i << j << k << ' ';
            }
            std::cout << '\n';
        }
    }

    return 0;
}
