#include <iostream>

int main()
{

    int student = 20;
    student = student + 1;
    std::cout << student << '\n';
    student += 1;
    std::cout << student << '\n';
    student++;
    std::cout << student << '\n';

    student -= 1;
    student--;
    std::cout << student << '\n';

    student *= 2;
    std::cout << student << '\n';

    student /= 4; // 求整數
    std::cout << student << '\n';

    student %= 4; // 求餘數mod
    std::cout << student << '\n';

    if (student)
    {
        printf("hellow boy");
    }
    return 0;
}