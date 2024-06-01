#include <iostream>

double square(double length);
double cube(double length);
std::string concateString(std::string str1, std::string str2);
int main()
{
    double length = 10.0;
    double area = square(length);
    double volumn = cube(length);

    std::cout << "Area: " << area << "cm^2\n";
    std::cout << "Volumn: " << volumn << "cm^3\n";

    std::string firstname = "Bob";
    std::string secondtname = "Code";
    std::string fullname = concateString(firstname, secondtname);
    std::cout << "Hellow " << fullname;

    return 0;
}

double square(double length)
{
    double result = length * length;
    return result;
}

double cube(double length)
{
    double result = length * length * length;
    return result;
}

std::string concateString(std::string str1, std::string str2)
{
    return str1 + ' ' + str2;
}