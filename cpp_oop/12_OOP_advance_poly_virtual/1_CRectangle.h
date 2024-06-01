#ifndef CRECTANGLE_H_
#define CRECTANGLE_H_


#include"1_CShape.h"
#include<iostream>
using namespace std;
#include<string>

class CRectangle: public CShape{
    public:
        CRectangle();
        virtual ~CRectangle();

        int getLength()const{
            return length;
        }
        int getWidth()const{
            return width;
        }
        void setValue(int length, int width){
            this->length = length;
            this->width = width;
            setArea(length * width);
            setGirth(2 * (length + width));
        }

        // Virtual override the parent class's function
        virtual void showInfo();

        // Virtual override the parent class's function(被迫實作此函式)
        // void show_name(){
        //     cout<<"CRectangle"<<endl;
        // }
        
    private:
        int length;
        int width;
};

CRectangle::CRectangle(){
    length = 0;
    width = 0;
}
CRectangle::~CRectangle(){

}

void CRectangle::showInfo(){
    cout<<"CRectangle's area: "<<getArea()<<endl;
    cout<<"CRectangle's girth: "<<getGirth()<<endl;
}

#endif