
#ifndef CSHAPE_H_
#define CSHAPE_H_

#include<string>
#include<iostream>
using namespace std;

class CShape{


    public:
    
        CShape();
        virtual ~CShape();


        double getGirth()const{
            return girth;
        }
        double getArea()const{
            return area;
        }

        //類別成員函式中如果有虛擬函式，則該類別必須有"虛擬解構函式" Line 15
        virtual void showInfo();

        //如果類別中有純虛擬函式，則該類別為抽象類別，不可建立物件
        //強迫子類別實作此虛擬函式
        // virtual void show_name() = 0;
         

    protected:
        void setGirth(double girth){
            this->girth = girth;
            
        }
        void setArea(double area){
            this->area = area;
        }



    private:
        double girth;
        double area;

};

CShape::CShape(){
    girth = 0;
    area = 0;
}
CShape::~CShape(){

}
void CShape::showInfo(){

    cout<<"CShape's area: "<<getArea()<<endl;
    cout<<"CShape's girth: "<<getGirth()<<endl;
}

#endif