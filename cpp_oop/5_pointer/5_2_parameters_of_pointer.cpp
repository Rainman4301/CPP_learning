#include <iostream>
#include "5_2_title.h"
using namespace std;

void test(int a[]){
    cout << "�p��}�C����" << endl;
    // �L�ġA�ȶǤJ�}�C�Ĥ@�Ӧ�m����
    cout << sizeof(a) / sizeof(int);
}




int main(int argc, char const *argv[]){
    int a = 10;
    showValue(&a);

    int *b = new int();
    *b = 20;
    showValue(b);

    int *c = b;
    showValue(c);

    /*
    new int()�G�o�اΦ�����l�ƨϥΤF��ƽեΪ��覡�A
    ���Ыؤ@�� int ���O����H�ð�����q�{��l�ơC
    �N���ۤ��t���s�x�Q�m���s�A�Y�ҥH���Ȫ�l�ơC
    new int�G�o�اΦ�����l�Ƥ��i��s�x����l�ơA
    �]���Ҥ��t���s�x�����ȬO���T�w���A�i��O�H���ȡC
    */
    showValue(new int());
    showValue(new int(100));
    showValue(new int);

    /* passbyvalue
       passbyaddress:
       (1)pointer *
       (2)reference &
    */
    int value = 1;
    passbyvalue(value);
    cout << value << endl;

    passbypoint(&value);
    cout << value << endl;

    // return value == (pointer)
    int * i = getaddressA();
    cout << *i << endl;

    cout << getaddressB() << endl;
    int * j = getaddressB();
    cout << *j << endl;

    delete i, j;

    /*
       // �]���O�R�A�O���骺��^�A�ҥH�|�Q����
       // ��^���O����w���s�b
       int * k = getaddressC();
       cout << *k << endl;
    */
    int * m = new int;
    *m = 1;
    const int *n = getaddressD(m);
    cout << *n << endl;
    // *n = 100; // error �]��const ���Y

    // �ʺA�}�C & �}�C�Ѽ�
    // �R�A���s�}�C


    int count = 5;
    // cout << "�п�J�ǥͤH��=> ";
    // cin >> count;
    // int array[count];

    // �ʺA���s�}�C
    int * p = new int[count];
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;


    cout << "�ʺA���s�}�C p == " << p  << endl;
    cout << "&p == " << &p  << endl;
    cout << "&p[0] == " << &p[0]  << endl;
    cout << "&p[1] == " << &p[1]  << endl;
    cout << "&p[2] == " << &p[2]  << endl;
    cout << "&p[3] == " << &p[3]  << endl;
    cout << "&p[4] == " << &p[4]  << endl;
    
    for(int i = 0; i < count; i++){
        // �n�[&�A�]���O���񤺦s��}�C 
        // �p�G���[&�Ap[i]�O�N���s��}���ȡC
        delete &p[i];
    }

    delete p;

    // �}�C�Ѽ�
    // ���O�i�H�� * ���N []�C
    return 0;   
}