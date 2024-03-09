


#ifndef CCIRCLE_H_
#define CCIRCLE_H_


#include"1_CShape.h"
#include<iostream>
using namespace std;
#include<string>


class CCircle: public CShape{

    

    public:

        CCircle();
        virtual ~CCircle();

        int getRadius()const{
            return radius;
        }
        void setRadius(int radius){
            this->radius = radius;
            setArea(radius*radius*3.14);
            setGirth(2 * radius * 3.14);
        }
        double getArea();
        double getGirth();

        // Virtual override the parent class's function
        virtual void showInfo();

        // Virtual override the parent class's function(�Q����@���禡)
        // void show_name(){
        //     cout<<"CCircle"<<endl;
        // }

    protected:



    private:
    
        int radius;


};



CCircle::CCircle(){
    radius = 0;
}
CCircle::~CCircle(){
}


//!!!!!!!!!!!�bC++ ���b�l���O���w�q���禡�P�����O�ۦP(�����O�L��virture)�A���Ooverride�u�Ohide
double CCircle::getArea(){
    return 123456;
}
double CCircle::getGirth(){
    return 123456;
}
#endif
 

void CCircle::showInfo(){
    cout<<"CCircle's area: "<<getArea()<<endl;
    cout<<"CCircle's girth: "<<getGirth()<<endl;
}

