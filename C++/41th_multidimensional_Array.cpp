#include <iostream>

int main()
{

    std::string car[][3] = {{"Mustang", "Escape", "F-150"},
                            {"Corvette", "Equinox", "Silverado"},
                            {"Challenger", "Durango", "Ram 1500"}};

    // std::cout << car[0][0] << " ";
    // std::cout << car[0][1] << " ";
    // std::cout << car[0][2] << "\n";
    // std::cout << car[1][0] << " ";
    // std::cout << car[1][1] << " ";
    // std::cout << car[1][2] << "\n";
    // std::cout << car[2][0] << " ";
    // std::cout << car[2][1] << " ";
    // std::cout << car[2][2] << " ";

    int rows = sizeof(car) / sizeof(car[0]);
    int colum = sizeof(car[0]) / sizeof(car[0][0]);

    for (int i = 0; i < rows; i++)
    {
        // std::cout << car[i] << '\n';
        for (int j = 0; j < colum; j++)
        {
            std::cout << car[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}