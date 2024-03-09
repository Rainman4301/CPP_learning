#include <iostream>

int max(int x, int y)
{
    return (x > y) ? x : y;
}
double max(double x, double y)
{
    return (x > y) ? x : y;
}
char max(char x, char y)
{
    return (x > y) ? x : y;
}

// function templates 用於全部資料型別都是用的方法
// 可以用於不同資料型別但是兩筆資料要相同
template <typename T>
T tmax(T x, T y)
{
    return (x > y) ? x : y;
}

// 但如果用於T & U these two data you want to compare can be different types
template <typename T, typename U>
auto much_better_max(T x, U y)
{
    return (x > y) ?: x : y;
}

int main()
{

    // function templates = describe what a function looks like.
    //                      Can be used to generate as many overloaded functions as needed,
    //                      each using different data types

    std::cout << max(1, 2) << '\n';
    std::cout << max(1.1, 2.1) << '\n';
    std::cout << tmax(1.1, 2.1) << '\n';

    return 0;
}