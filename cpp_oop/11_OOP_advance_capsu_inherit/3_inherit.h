



#include<iostream>
#include<string>
using namespace std;



class Shape{
    private:
        int area;
        int girth;

    /*  
        
        避免子類別成員名稱與父類別成員名稱相同，
        所以在父類別中宣告成 protected的方式，
        讓子類別可以設定父類別的private成員
    
        protected 的功能是讓子類別可以使用父類別的成員函式，不是變數成員。
    
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

        // 這個寫法不是 Overloading，這樣會遮蔽父類別的成員函式
        // void setArea();
};
void Circle::setradius(int r){

    if(r >= 0 && r <= 100){
        radius = r;

        // area = radius * radius * 3.14159;    這裡的 area, girth 是 private, 所以不能直接存取除非設成 public 或 protected
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


