#include <iostream>

int main()
{

    // fill() = Fills a range of elements with a specified value
    //            fill(begin, end, value)

    int size = 66;
    std::string foods[size];

    fill(foods, foods + (size / 3), "1");
    fill(foods + size / 3, foods + (size / 3) * 2, "2");
    fill(foods + (size / 3) * 2, foods + size, "3");

    for (std::string food : foods)
    {

        std::cout << food << '\n';
    }

    return 0;
}