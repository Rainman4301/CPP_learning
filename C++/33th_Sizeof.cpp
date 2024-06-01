#include <iostream>

int main()
{
    // sizeof() = determines the size in bytes of a:
    //                   variable, data type, class, objects, etc.

    double doub = 2.5;
    int in = 2;
    char C = 'c';
    std::string str = "abaaaaaaaaaaaa"; // reference data type 所以字數不影響大小
    int inarr[5];
    double doubarr[5];
    bool student = true;
    char grade[] = {'A', 'B', 'C', 'D', 'E'};
    std::string name[] = {"aaaa", "bbbbb", "cccccc"};

    std::cout << sizeof(doub) << " bytes\n";
    std::cout << sizeof(in) << " bytes\n";
    std::cout << sizeof(C) << " bytes\n";
    std::cout << sizeof(str) << " bytes\n";
    std::cout << sizeof(inarr) << " bytes\n";
    std::cout << sizeof(doubarr) << " bytes\n";
    std::cout << sizeof(student) << " bytes\n";
    std::cout << sizeof(grade) / sizeof(char) << " elements\n";
    std::cout << sizeof(name) / sizeof(std::string) << " elements\n";

    return 0;
}