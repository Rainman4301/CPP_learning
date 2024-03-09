
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

        //���O�����禡���p�G�������禡�A�h�����O������"�����Ѻc�禡" Line 15
        virtual void showInfo();

        //�p�G���O�����µ����禡�A�h�����O����H���O�A���i�إߪ���
        //�j���l���O��@�������禡
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