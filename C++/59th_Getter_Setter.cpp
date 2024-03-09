#include<iostream>

    // Abstraction = hiding unnecessary data from outside a class
    // Getter      = function that makes a private attribute Redeable
    // Setter      = function that makes a private attribute Writeable 

     

class Stove{

    private:
        int temperature = 0;

    public:


        Stove(int temperature){
            setTemperature(temperature);
        }

        //Writeable
        void setTemperature(int temperature){
            if(temperature<0){
                this->temperature = 0;
            }
            else if(temperature>=10){
                this->temperature = 10;
            }
            else{
                this->temperature = temperature;
            }
            
        }
        // Readeable
        int getTemperature(){

            return temperature;
        }
};

int main(){

    Stove stove(5);
    stove.setTemperature(8);
    std::cout << "the temperature setting is: " << stove.getTemperature();

    return 0;
}