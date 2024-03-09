#include <iostream>

int main()
{
    std::string cars[] = {"Corvette", "Mustang", "Camry"};
    std::cout << cars[0] << '\n';
    for (std::string i : cars)
    {
        std::cout << i << '\n';
    }
    cars[0] = "BMW";

    // 也可以先declaration then assign value BUT 要先定義Array大小
    std::string Coach[3];
    Coach[0] = "AAA";
    Coach[1] = "BBB";
    Coach[2] = "CCC";

    double prices[] = {5.00, 7.50, 9.99, 15.00};
    std::cout << prices[0] << '\n';
    std::cout << prices[1] << '\n';
    std::cout << prices[2] << '\n';
    std::cout << prices[3] << '\n';

    return 0;
}