



#include<iostream>
#include<string>
using namespace std;



class Shape{
    private:
        int area;
        int girth;

    /*  
        
        �קK�l���O�����W�ٻP�����O�����W�٬ۦP�A
        �ҥH�b�����O���ŧi�� protected���覡�A
        ���l���O�i�H�]�w�����O��private����
    
        protected ���\��O���l���O�i�H�ϥΤ����O�������禡�A���O�ܼƦ����C
    
    */
    protected:
        void setArea(int a);
        void setGirth(int g);

    public:
        Shape() : area(0), girth(0){};

        int getArea();
        int getGirth();
};

int Shape::getArea(){
    return area;
}
int Shape::getGirth(){
    return girth;
}
void Shape::setArea(int a){
    area = a;
}
void Shape::setGirth(int g){
    girth = g;
}





class Circle: public Shape{

    private:
        int radius;
        int area;

    public:
        Circle() : radius(0){};
        void setradius(int r); 

        // �o�Ӽg�k���O Overloading�A�o�˷|�B�������O�������禡
        // void setArea();
};
void Circle::setradius(int r){

    if(r >= 0 && r <= 100){
        radius = r;

        // area = radius * radius * 3.14159;    �o�̪� area, girth �O private, �ҥH���ઽ���s�����D�]�� public �� protected
        setArea(radius * radius * 3.14159);
        setGirth( 2 * radius * 3.14159);
        
        }
}







class Rectangle: public Shape{

    private:
        int length;
        int width;
    public:
        Rectangle() : length(0), width(0){};
        void setlength(int l);
        void setwidth(int w);

};


