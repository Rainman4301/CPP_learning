#include <iostream>

int main()
{

    // const (read-only)
    const double pi = 3.14159;
    const int light_speed = 55455454;
    double radius = 10;
    double circumference = 2 * pi * radius;

    std::cout << circumference << " cm";

    return 0;
}