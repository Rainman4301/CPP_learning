#include <iostream>


using namespace std;















void test(int a[]);


int main(int argc, char const *argv[]){





    /*
    
    �ŧi
        type name[length];
        �ŧi�ɭn�D�t�m���w���ת��O����Ŷ� => �ӫ��O���ȩһݪ��Ŷ� * length�C

        ���ۦ��l�ư}�C���������e�C
        type name[] = {value,.....};

        �ŧi�P��l�ư}�C�������e�C
        �H value ���ӼƬ��}�C���סC
        type name[length] = {value,.....};

        �ŧi�P��l�ư}�C�������e�C

        ***�Y length �p�� value ���ӼơA�H value ���ӼƬ��}�C���סC(�o�@�y�O���~��, length ���i�H�p��value�Ӽ�)***
        �Y length �j�� value ���ӼơA�H length ���}�C���סC�W�L value �ӼƳ����������A�@�ߪ�l�Ƭ� 0 �C �@��Φb�إ߰}�C�ɡA���K��l�ƩҦ������� 0 �C



        �s��
            ����
            name[index] = value;
            ����
            name[index]
            index
            0 ~ �}�C���� -1
    

        �O����t�_
        �}�C����
            ���ӥt�~�Τ@���ܼƨ��x�s�}�C���סC
            ����ĳ�ϥ� sizeof �ӹB��}�C���סC�]�����u�b�P�@�Ө禡�����ġC
        �}�C�P�j��



    */







    int number[5] = {} ;

    for (int i = 0; i < 5; i++){
        number[i] = i;
    }

    int * p = number;

    cout<<"number :" << number << endl; 
    cout<<"&number :" << &number << endl;
    cout<<"&number[0] :" << &number[0] << endl;
    cout<<"number[0] :" << number[0] << endl;
    cout<<"&number[1] :" << &number[1] << endl;
    cout<<"number[1] :" << number[1] << endl;


    cout<<"p :" << p << endl;
    cout<<"*p :" << *p << endl;


    int number2[] = {1,2,3,4,5};


    int number3[10] = {1,2,3,4,5};
    cout<< "number3[4]" <<number3[4] << endl;
    cout<<"number3[5] :" << number3[5] << endl;


    cout<<"\n\n\n";


    int number4[5];
    number4[0] = 1;
    number4[1] = 2;
    number4[2] = 3;
    number4[3] = 4;
    number4[4] = 5;

    cout<<"sizeof(number4): "<<sizeof(number4) << endl;
    int length = sizeof(number4) / sizeof(int);
    cout<<"length: "<<length <<"\n\n\n"<< endl;

    

    cout<<"number4: "<<number4 << endl;
    cout<<"&number4: "<<&number4 << endl;
    cout<<"number4[0]  "<<number4[0] << endl;

    test(number4);




    return 0;
}


void test(int a[]){

    cout<<"a: "<<a << endl;
    cout<<"&a: "<<&a << endl;
    cout<<"a[0]  "<<a[0] << endl;

    int test_length = sizeof(a) / sizeof(int);
    cout<<"sizeof(a): "<<sizeof(a) << endl;
    cout<<"test_length: "<<test_length << endl;
}