#include<iostream>

using namespace std;






int main(int argc, char * argv[]){




/*

�ŧi�P�ϥ�
    �ŧi�ܼưѦ� type & name =  �ܼƦW��;
    �z�L�ܼưѦҦs���ܼƭ�

    
    �ŧi���аѦ� type *& name = ���ЦW��;
    �z�L���аѦҦs�����Э�



    �ŧi�ɤ@�w�n�����C
    �u������@��, �]���A������, ���ܪ��O���N�����W�٪��ȡC


*/




    //  �@���ܼƪ��Ѧ�[ a == x]
    int a = 8;
    int &x = a;
    cout<< a << endl;
    x = 100;
    cout<< a << endl;
    a = 80;
    cout<< x << endl;



    // �����ܼƪ��Ѧ�
    int *b = new int;
    *b = 8;

    // y == b(����)
    int *& y = b;
    *y = 100;
    cout<< "b ="<< *b << endl;

  




    return 0;

}
