#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string tex_t;
typedef int number_t;

// 這兩種效果一樣

using text_t1 = std::string;
using number1_t = int;
int main()
{

    std::string firstname = "Bob";
    std::cout << firstname << '\n';
    tex_t golden = "handsome";
    std::cout << golden << '\n';
    number_t age = 23;
    std::cout << age;

    return 0;
}