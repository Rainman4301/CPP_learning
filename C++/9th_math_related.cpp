#include <iostream>
#include <cmath>

int main()
{

    double x = 3.14;
    double y = 4;
    double z;

    z = std::max(x, y);
    std::cout << z << '\n';
    z = std::min(x, y);
    std::cout << z << '\n';
    z = pow(2, 4);
    std::cout << z << '\n';
    z = sqrt(9);
    std::cout << z << '\n';
    z = abs(-18);
    std::cout << z << '\n';
    z = round(x);
    std::cout << z << '\n';
    z = ceil(x);
    std::cout << z << '\n';
    z = floor(x);
    std::cout << z << '\n';

    return 0;
}