#include <iostream>
// #include <ctime>

// pseudo-random = Not truly random (but close)

int main()
{

    srand(time(NULL));

    int num = rand() % 6; // 0 --- 32767
    std::cout << num;
    return 0;
}