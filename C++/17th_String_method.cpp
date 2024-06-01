#include <iostream>

int main()
{
    std::string name;
    std::cout << "enter your name: ";
    std::getline(std::cin, name);

    // calculate the length of string
    if (name.length() > 12)
    {
        std::cout << "Your name cannot be over 12 characters!!\n";
    }
    else
    {
        std::cout << "Welcom " << name << '\n';
    }

    // discriminate whether empty
    if (name.empty())
    {
        std::cout << "you did not enter your name \n";
    }
    else
    {
        std::cout << "Hellow " << name << '\n';
    }

    // clean the string
    name.clear();

    // add string  tail of the string
    name.append("@gamil.com");
    std::cout << "your name is " << name << '\n';

    // print what is the word at the position in the string
    std::cout << name.at(3) << '\n';

    // insert
    name.insert(2, "$$$$$$$");

    // find character
    std::cout << name.find(' ') << '\n';

    name.erase(0, 3);

    std::cout << name;

    return 0;
}