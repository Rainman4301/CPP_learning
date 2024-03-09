#include<iostream>
using namespace std;



struct Circle{
    int radius;
    int height;
    double girth;
    double area;
    double volume;
}c_2, c_3,
* c_4 = new struct Circle,* c_5 = new struct Circle,
// 如果要在此宣告的話要立刻指派不然會出錯
& c_8 = c_3,
*& c_9 = c_4;


int main(int argc, char * argv[]){

    struct Circle c_1;
    c_1.radius = 10;
    cout<<"c_1.radius = "<<c_1.radius<<endl;

    c_2.radius = 20;
    cout<<"c_2.radius = "<<c_2.radius<<endl;



    cout<<"-------------------------------------------"<<endl;
    // 用結構型別宣告指標
    struct Circle * c_6 = new Circle;
    c_6->radius = 40;
    cout<<"c_6->radius = "<<c_6->radius<<endl;
    c_5->radius = 50;
    cout<<"c_5->radius = "<<c_5->radius<<endl;

    struct Circle * c_7 = new struct Circle;
    c_7->radius = 70;
    cout<<"c_7->radius = "<<c_7->radius<<endl;


    cout<<"-------------------------------------------"<<endl;
    // 用結構型別宣告參考
    c_8.radius = 80;
    cout<<"c_8.radius = "<<c_8.radius<<endl;



    cout<<"-------------------------------------------"<<endl;
    // 用結構型別宣告指標參考
    c_9->radius = 90;
    cout<<"c_9->radius = "<<c_9->radius<<endl;

    struct Circle &c_10 = c_3;
    c_10.radius = 100;
    cout<<"c_10.radius = "<<c_10.radius<<endl;

    struct Circle *& c_11 = c_4;
    c_11->radius = 110;
    cout<<"c_11->radius = "<<c_11->radius<<endl;
    return 0;
}