#include <iostream>

int main()
{

    // dynamic memory = Memory that is allocated after the program is already compiled & running.
    //                  Use the 'new' operator to allocate memory in the ""heap"" rather than the ""stack""

    //                 Useful when we do not know how much memory we will need. Makes our programs
    //                 more flecible, especially when accepting user input.

    int *pnum = NULL;

    pnum = new int; // 記憶體配置
    *pnum = 21;

    std::cout << "address: " << pnum << '\n';
    std::cout << "value: " << *pnum << '\n';

    delete pnum; // 釋放記憶體(避免記憶體 leak)

    /*                                                                          */

    char *pgrade = NULL;
    int size;

    std::cout << "How many grades to enter in ?: ";
    std::cin >> size;

    pgrade = new char[size]; // 記憶體配置
    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pgrade[i];
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << pgrade[i] << " ";
    }

    delete[] pgrade; // 釋放記憶體(避免記憶體 leak)
    return 0;
}