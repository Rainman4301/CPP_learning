#include<iostream>
using namespace std;

void showValue(int *p);
void passbyvalue(int value);
void passbypoint(int *pvalue);

void showValue(int * p){
    cout<< *p << endl;
}

void passbyvalue(int value){
    value += 100;
}

void passbypoint(int * pvalue){
    *pvalue += 100;
}





/*
return ���O������
�I�s?�z�O�@�ӰO�����}�C
!!!!!!���� return �ϰ��ܼƪ��O�����}�C
�i�H�ŧi�� const�C
*/



int *getaddressA();
int *getaddressB();
int *getaddressC();

int * getaddressA(){
    int * p = new int;
    *p = 100;

    return p;
}

int * getaddressB(){

    return new int;
}



// �]���O�R�A�O����A�ҥH�|�Q����
// �^�Ǫ��O����w���s�b
int * getaddressC(){

    int p = 8;

    return &p;
}







const int * getaddressD(const int *p);
// �Ѽ�p�Ȥ��|�Q�ʨ�
const int * getaddressD(const int* p){


    int * q = new int;
    *q = *p;
    *q += 100;

    return q;
}