

#include<iostream>

using namespace std;
#include "6_2_header.h"



/*

�ѦҰѼ�
    �j���I�s�ԭz���p�A����, �@�w�n���@�Ӥv�s�b���ܼƩΫ��СC
    �إߤΩI�s�ѼƬ��ܼưѦҪ��禡
    �إߤΩI�s�ѼƬ����аѦҪ��禡
    �i�H�ŧi�� const

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