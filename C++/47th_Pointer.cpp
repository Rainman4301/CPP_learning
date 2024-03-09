#include <iostream>

int main()
{

    // pointers = variable that stores a memory address of another variable
    //                    sometimes it's easier to work with an address

    // & address-of operator
    // * dereference operator

    std::string name = "Bro";
    std::string *pname = &name;
    std::string &referencename = name;
    std::string *test;

    std::cout << referencename << '\n';
    std::cout << &referencename << '\n';
    std::cout << "*******************************************" << '\n';
    std::cout << &name << '\n';
    std::cout << pname << '\n'; // 指標容器內的記憶體位置
    std::cout << *pname << '\n';
    std::cout << &pname << '\n'; // 指標自己的記憶體位置
    std::cout << "*******************************************" << '\n';
    test = pname;
    std::cout << test << '\n';
    std::cout << *test << '\n';
    std::cout << &test << '\n';
    std::cout << "*******************************************" << '\n';

    std::string freepizza[] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};
    std::string *pizza;
    pizza = &freepizza[2];
    std::cout << freepizza << '\n';
    std::cout << &freepizza[2] << '\n';
    std::cout << pizza;

    return 0;
}