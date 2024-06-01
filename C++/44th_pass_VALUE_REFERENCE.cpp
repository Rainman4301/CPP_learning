#include <iostream>

//  Passing by Pointer

void swap(std::string *x, std::string *y);
int main()
{

    std::string X = "Kool-Aid";
    std::string Y = "Water";

    swap(&X, &Y);

    std::cout << "X: " << X << '\n';  // Water
    std::cout << "Y: " << Y << '\n';  // Kool-Aid
    std::cout << "X: " << &X << '\n'; // 0x23ca5ffae0
    std::cout << "Y: " << &Y << '\n'; // 0x23ca5ffac0

    return 0;
}
void swap(std::string *x, std::string *y)
{
    std::string temp;
    temp = *x;
    *x = *y;
    *y = temp;

    std::cout << "X: " << *x << '\n'; // Water
    std::cout << "Y: " << *y << '\n'; // Kool-Aid
    std::cout << "X: " << x << '\n';  //  0x23ca5ffae0
    std::cout << "Y: " << y << '\n';  //  x23ca5ffac0
}

// Passing by Reference

// void swap(std::string &x, std::string &y);
// int main()
// {

//     std::string X = "Kool-Aid";
//     std::string Y = "Water";

//     swap(X, Y);  //pass by value

//     std::cout << "X: " << &X << '\n';
//     std::cout << "Y: " << &Y << '\n';

//     return 0;
// }
// void swap(std::string &x, std::string &y)
// {
//     // std::string temp;
//     // temp = x;
//     // x = y;
//     // y = temp;

//     std::cout << "X: " << &x << '\n';
//     std::cout << "Y: " << &y << '\n';
// }