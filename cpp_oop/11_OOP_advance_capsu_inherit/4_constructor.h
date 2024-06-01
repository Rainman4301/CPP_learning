



#include<iostream>
#include<string>
using namespace std;


class Circle{

    private:
        int radius;
        

    public:
        // Circle() : radius(999){};
        // Circle(){
        //     this->radius = 999;
        // }
        // Circle(int r) : radius(r){};
        Circle(int radius = 0){
            this->radius = 0;
            setradius(radius);
        }
        

        void setradius(int radius);
        int getradius();
};
void Circle::setradius(int radius){

    if(radius >= 0 && radius <= 100){
        this->radius = radius;     
        }
}
int Circle::getradius(){

    return radius;
}






class Rectangle{

    private:
        int length;
        int width;
    public:
        Rectangle() : length(0), width(0){};
        // Rectangle(int l, int w) : length(l), width(w){};
        Rectangle(int l, int w){
            this->length = length;
            this->width = width;
        }


        void setlength(int length);
        void setwidth(int width);
        int getlength();
        int getwidth();

};
void Rectangle::setlength(int length){

    if(length >= 0 && length <= 100){
        this->length = length;
    }
}
void Rectangle::setwidth(int width){

    if(width >= 0 && width <= 100){
        this->width = width;
    }
}
int Rectangle::getlength(){

    return length;
}
int Rectangle::getwidth(){

    return width;
}


