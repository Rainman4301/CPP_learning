

#include<iostream>
#include<string>
using namespace std;






class Circle{

    private:
        string name;
        int radius;
        int height;
    public:

        // Circle(): radius(1), height(1){};
        Circle(){
            name = "UnSet";
            radius = 1;
            height = 1;
        };  


        double getGirth();
        double getArea();
        double getVolume();
        void setRadius(int radius);
        void setHeight(int height);
        void getRadius();
        void getHeight();
        string getName(); 
        void setName(string name);


    };

double Circle::getGirth(){
    return radius * 2 * 3.14159;
}
double Circle::getArea(){
    return radius * radius * 3.14159;
}
double Circle::getVolume(){
    return getArea() * height;
}
void Circle::setRadius(int radius){
    if(radius >=1 && radius <= 100){
        this->radius = radius;
    }
    
}
void Circle::setHeight(int height){

    if(radius >=1 && radius <= 100){

        this->height = height;
    }
    
}
string Circle::getName(){
    return name;
}
void Circle::setName(string name){
    if(name.length() <= 10 && name[0]  == 'C'){
        this->name = name;
    }
    
}
