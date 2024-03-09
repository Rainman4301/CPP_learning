#include <iostream>

//  enums = a user-defined data type that consists
//          of paired named-integer constants.(有時候要用Switch 只能用int rather than string)
//          GREAT if you have a set of potential options

enum Day
{
    sunday = 0,
    monday = 1,
    tuesday = 2,
    wednesday = 3,
    thursday = 4,
    friday = 5,
    saturday = 6
};

int main()
{

    // both enum are ok!!
    Day today = sunday;
    switch (today)
    {
    case sunday:
        std::cout << "It is Sunday!\n";
        break;
    case monday:
        std::cout << "It is Monday!\n";
        break;
    case tuesday:
        std::cout << "It is Tuesday!\n";
        break;
    case wednesday:
        std::cout << "It is Wednesday!\n";
        break;
    case thursday:
        std::cout << "It is Thursday!\n";
        break;
    case friday:
        std::cout << "It is Friday!\n";
        break;
    case saturday:
        std::cout << "It is Saturday!\n";

        return 0;
    }

    Day tomorrow = friday;
    switch (tomorrow)
    {
    case 0:
        std::cout << "It is Sunday!\n";
        break;
    case 1:
        std::cout << "It is Monday!\n";
        break;
    case 2:
        std::cout << "It is Tuesday!\n";
        break;
    case 3:
        std::cout << "It is Wednesday!\n";
        break;
    case 4:
        std::cout << "It is Thursday!\n";
        break;
    case 5:
        std::cout << "It is Friday!\n";
        break;
    case 6:
        std::cout << "It is Saturday!\n";

        return 0;
    }
}