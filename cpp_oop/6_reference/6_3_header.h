

#include<iostream>

using namespace std;

int & getreferenceA();
int & getreferenceA_1();


// this is problematic cause which refer a local variable
int & getreferenceA(){
    int r = 10;
    return r;
}






// �ΨӸѨM�W�����ݦ��O!!!! .cpp�ɨ���ϥΪ��覡�O�h�l��
int & getreferenceA_1(int & r){

    r += 10;
    return r;
}


// !!!!!!! ���O�p�G�O���O���ܴN���@�ˤF

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


// ���Ъ��Ѧ�
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

