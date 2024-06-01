#include <iostream>
#include <ctime>

int main()
{
    //可以是0 or null
    srand(time(0));
    int randnum = rand() % 5 + 1;

    switch (randnum)
    {
    case (1):
        std::cout << "You win a bumper sticker!\n";

        break;
    case (2):
        std::cout << "You win a concert ticket sticker!\n";

        break;
    case (3):
        std::cout << "You win a T-shirt sticker!\n";

        break;
    case (4):
        std::cout << "You win a free lunch sticker!\n";

        break;
    case (5):
        std::cout << "You win a car sticker!\n";

        break;

    default:
        break;
    }

    return 0;
}