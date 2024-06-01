#include <iostream>

int main()
{

    // cout << (insertion operator)
    // cin >> (extraction operator)

    std::string name;
    int age;

    std::cout << "What's your name? ";
    // std::cin >> name;

    // 如果名子中間有''會影響下面的cin
    // result
    std::getline(std::cin >> std::ws, name);

    std::cout << "What's your age? ";
    std::cin >> age;

    std::cout << "\nhellow " << name;
    std::cout << "\nyou are " << age << " years old";

    return 0;
}