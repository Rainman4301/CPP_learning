#include<iostream>
#include"6_3_header.h"
using namespace std;




/*

return �Ѧ�
    �إߤΩI�s��j�Ȭ��ܼưѦҪ��禡
    �إߤΩI�s��j�Ȭ����аѦҪ��禡
    �i�H�ŧi�� const

*/


int main(int argc, char * argv[]){

    int & p = getreferenceA();


    int r = 10;
    // �ܦh�l�]���禡���ѼƴN�O�@�ӰѦҡA�S���n�ŧiP_1���Ѧ�
    // �ҥH�q�`�^�ǰѦҪ��禡�O�����n��
    int & p_1 = getreferenceA_1(r);
    cout<< r << endl;
    cout<< p_1 << endl;



    cout<< "-------------------" << endl;

    // !!!!!!! ���O�p�G�O���O���ܴN���@�ˤF

    Circle c;
    c.radius = 10;
    c.showarea();
    c.radius = 100;
    c.showarea();

    // changeRadius(c, 200) �^�Ǥ@��Circle���Ѧ�
    // �q�`�^�ǰѦҪ��禡�O���ӻݭn�@���ܼƥh���A
    // �|�Φb�@�Ӫ��󪺨禡�̭������\��A�Ҧp�U�����Ҥl
    changeRadius(c, 200).showarea();





    cout<< "-------------------" << endl;
    // ���Ъ��Ѧ�
    // �@�˥Φb�@���ܼƮɨS���n
    int * q = new int;
    *q = 1;
    int *k = getReferenceB(q);
    cout<< *q << endl;
    cout<< *k << endl;


    cout<< "-------------------" << endl;
    // �Φb���O���ɭԴN���ΤF
    Circle * c_1 = new Circle;
    c_1->radius = 10;
    c_1->showarea();
    changeRadius2(c_1, 200)->showarea();



    return 0;

}