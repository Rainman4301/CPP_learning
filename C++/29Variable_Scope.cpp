#include <iostream>

int mynum = 3; //(Global)
void printnum();
int main()
{
    // Local variables = declared inside a function or block
    // Global variables = declared outside of all function

    // Local>Global <default>
    // But std::cout << ::mynum << '\n'; prioritize Global

    int mynum = 1;
    printnum();
    std::cout << ::mynum << '\n';

    return 0;
}
void printnum()
{
    int mynum = 2;

    std::cout << mynum << '\n';
}