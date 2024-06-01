

#include<iostream>

using namespace std;

int & getreferenceA();
int & getreferenceA_1();


// this is problematic cause which refer a local variable
int & getreferenceA(){
    int r = 10;
    return r;
}






// 用來解決上面的問但是!!!! .cpp檔那邊使用的方式是多餘的
int & getreferenceA_1(int & r){

    r += 10;
    return r;
}


// !!!!!!! 但是如果是類別的話就不一樣了

class Circle{
    public:
        int radius;
        void showgirth();
        void showarea();
};

void Circle::showgirth(){
    double girth  = radius * 2 * 3.14159;
    cout<< "girth: " << girth << endl;
}

void Circle::showarea(){
    double area = radius * radius * 3.14159;
    cout<< "area: " << area << endl;
}




int & getreferenceA_2(int & r);
int & getreferenceA_2(int & r){

    r += 10;
    return r;

}


Circle & changeRadius(Circle & c, int radius = 0);
Circle & changeRadius(Circle & c, int radius){

    if(radius >= 0 && radius <= 1000){

        c.radius = radius;

    }

    return c;

}


// 指標的參考
int *& getReferenceB(int *& r);
int *& getReferenceB(int *& r){
    *r += 10;
    return r;
}


Circle *& changeRadius2(Circle *& c, int radius = 0);
Circle *& changeRadius2(Circle *& c, int radius){

    if(radius >= 0 && radius <= 1000){

        c->radius = radius;

    }

    return c;

}

