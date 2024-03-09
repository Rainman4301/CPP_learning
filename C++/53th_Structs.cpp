#include <iostream>

//  struct = A structure that group related variable under one name
//           structs can contain many data types (string, int, double, bool, etc...)
//           variable in a struct are known as "members"
//           members can be access with. "Class Member Access Operator"

typedef struct student
{
    std::string name;
    double gpa;
    bool enrolled;
} ssssss;

main()
{

    student student1;
    student1.name = "Spongebob";
    student1.gpa = 3.2;
    student1.enrolled = true;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    ssssss student2;
    student2.name = "Patrick";
    student2.gpa = 3.0;
    student2.enrolled = true;

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';

        return 0;
}