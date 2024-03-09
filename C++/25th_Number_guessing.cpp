#include <iostream>

int main()
{
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "******************* Number guessing game *******************\n";

    do
    {
        std::cout << "Enter a number(1-100) then guessing whether it is matched: ";
        std::cin >> guess;
        tries++;

        if (guess > num)
        {
            std::cout << "Too high!!\n";
        }
        else if (guess < num)
        {
            std::cout << "Too low!!\n";
        }
        else
        {
            std::cout << "CORRECT!! # of tries:" << tries << '\n';
        }

    } while (guess != num);

    std::cout << "***************************************************************\n";

    return 0;
}