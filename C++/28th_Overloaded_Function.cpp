#include <iostream>

void bakepizza();
void bakepizza(std::string topping);
void bakepizza(std::string topping1, std::string topping2);
int main()
{
    bakepizza();
    bakepizza("pepperoni");
    bakepizza("pepperoni", "mushrooms");
    return 0;
}

void bakepizza()
{
    std::cout << "Here is your pizza\n";
}
void bakepizza(std::string topping)
{
    std::cout << "Here is your " << topping << " pizza\n";
}

void bakepizza(std::string topping1, std::string topping2)
{
    std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza\n ";
}