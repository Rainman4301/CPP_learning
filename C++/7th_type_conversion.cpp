#include <iostream>

int main()
{
    // conversion : converse a value of one data type to another
    // Implicit = automatic
    // Explicit = precede value with new data type (int)

    double x = (int)3.14;
    std::cout << x << '\n';

    char y = 100;
    std::cout << y << '\n';
    std::cout << 100 << '\n';
    std::cout << (char)100;

    return 0;
}