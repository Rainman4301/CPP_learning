#include <iostream>

void walk(int step);
int factorial(int num);
int main()
{

    // = a programing techinque where a function invokes itself from within break a complex concept
    //   into a repeatable single step

    //   (iterative VS recursive)

    //   advantages = less code and is cleaner
    //                useful for sorting and searching algorithms

    //   disadvantage = uses more memory slower

    walk(100);

    std::cout << factorial(10);
    return 0;
}

void walk(int step)
{

    // iterative way
    /*
    for (int i = 0; i < step; i++)
    {
        std::cout << "You take a steps! \n";
    }
    */

    // recursive way
    /*
    if (step > 0)
    {
        std::cout << "You take a step!\n";
        walk(step - 1);
    }
    */
}

int factorial(int num)
{

    // iterative way
    /*
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result = result * i;
    }
    return result;
    */

    if (num > 1)
    {
        return num * factorial(num - 1);
    }
    else
    {
        return 1;
    }
}