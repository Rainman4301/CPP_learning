#include <iostream>

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{

    // namespace: prevent name conflictions=> unique name

    using namespace first;

    using namespace std;
    using std::cout;
    using std::string;

    std::string handsome = "me";
    string beauty = "me";

    // int x = 0;
    std::cout << x << '\n';
    cout << first::x << '\n';
    std::cout << second::x;

    

    return 0;
}