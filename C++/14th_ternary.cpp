#include <iostream>

int main()
{

    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression0;

    int grade = 11;

    grade <= 10 ? std::cout << "yesyesyes\n" : std::cout << "nonononono\n";
    printf("the answer= %d\n", grade > 10 ? 100 : 50);

    int number = 16;
    number % 3 ? std::cout << "ODD\n" : std::cout << "EVEN\n";

    bool hungry = true;
    hungry ? std::cout << "you hungry\n" : std::cout << "you full\n";

    std::cout << (hungry ? "you hungry" : "you full");

    return 0;
}