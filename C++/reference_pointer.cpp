// C++ program to demonstrate differences
// between pointer and reference
#include <iostream>
using namespace std;

struct demo
{
    int a;
};

int main()
{
    int x = 5;
    int y = 6;
    demo d;

    int *p;
    p = &x;
    p = &y; // 1. Pointer reintialization allowed


    //Reference!!!!(兩種不同變數但記憶體位置都一樣)
    int &r = x;
    // &r = y;                 // 1. Compile Error

    r = y; // 1. x value becomes 6

    //P指標可以只空值但Reference不行
    p = NULL;
    // &r = NULL;             // 2. Compile Error



    // 3. Points to next memory location
    p++;

    // 3. x values becomes 7
    r++;



    cout << &p << " " << &x << '\n'; // 4. Different address
    cout << &r << " " << &x << '\n'; // 4. Same address

    demo *q = &d;
    demo &qq = d;

    q->a = 8;
    // q.a = 8;                 // 5. Compile Error
    qq.a = 8;
    // qq->a = 8;             // 5. Compile Error

    // 6. Prints the address
    cout << p << '\n';

    // 6. Print the value of x
    cout << r << '\n';

    return 0;
}