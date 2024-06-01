

#include<iostream>

using namespace std;
#include "6_2_header.h"



/*

把σ把计
    眏㊣痹瓃珹腹い, ﹚璶倒跑计┪夹
    ミの㊣把计跑计把σㄧΑ
    ミの㊣把计夹把σㄧΑ
     const

*/





int main(int argc, char * argv[]){

    int i = 1;
    changevalue1(i);
    cout << "i = "<<i << endl;

    int * p = new int;
    *p = 1;
    changevalue2(p);
    cout << " *p = "<<*p << endl;

    int x = 1;
    changevalue3(&x);
    cout << "x = "<<x << endl;


    changevalue3(new int);

    int y = 5;
    int z = getvalue(y);
    cout << "y = "<<y << endl;
    cout << "z = "<<z << endl;

    return 0;

}