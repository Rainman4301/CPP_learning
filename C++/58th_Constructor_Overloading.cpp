#include <iostream>


class pizza{
    public:
        std::string topping1;
        std::string topping2;

    pizza(std::string topping1){

        this->topping1 = topping1;
    }
    pizza(std::string topping1,std::string topping2){

        this->topping1 = topping1;
        this->topping2 = topping2;
    }
    pizza(){

    }
};



int main()
{
    pizza pizza1("pepperoni");
    std::cout << pizza1.topping1 << '\n';

    
    pizza pizza2("pepperoni","Mushrooms");
    std::cout << pizza2.topping1 << '\n';
    std::cout << pizza2.topping2 << '\n';

    pizza pizza3;

    return 0;
}