#include<iostream>

using namespace std;

int main(int argc , char* argv[]){


// �ŧi ���� ����


    int a;
    a = 8;
    cout<< a << endl;

    int b;
    b = 100;
    cout<< &b << endl;


    //�O��ŧi���Ъ��ɭԥ[�W* �Ť@��A�[�Wp�A����ϥΫ���p�ɤ��ݭn�A�[�W*
    int * p;
    p = &b;
    cout<< *p << endl;
    cout<< p << endl;

    // �p�G���ЦA�[�W*�O�N��b�ާ@���Щҫ��V���O�����m
    // *p == b(value)
    *p = 200;
    cout<< b << endl;



    cout<<"********************************************************"<<endl;




    //address ���T��

    //1. �@���ܼƪ�address(&)
    int x = 10;
    cout<< &x << endl;


    //�ܼƦW�l �B �ܼƪ���          �B �ܼƪ�address
    //�@���ܼ� �B �ܼƪ���          �B �ܼƪ�address
    //�����ܼ� �B �ܼƫ��V��address �B �����ܼƪ�address

    //2. new�X�Ӫ��ܼƪ�address
    int * y = new int();
    *y = 20;
    cout<<"new int()"<<endl;
    cout<< *y << endl;
    cout<< y << endl;
    cout<< &y << endl;


    //3. �t�@�ӫ���
    int * z = y;
    cout<< *z << endl;
    cout<< z << endl;
    cout<< &z << endl;

    // �`���p�G��o�Ƿ�Ѽƶǻ��������ܥi�H�ǤJ e.g (1). a& (2). new int() (3). ����Z ���禡�����Ѽ�(*p)�i�H�ާ@��o���ܼ�
    //�@�Z�ŧi&���� int * p = z (�����ܼ�)
    //�禡�ŧi
    /*
    
    void func(int * p){
        *p = 100;
    }
    func(z)
    == int * p = z(�����ܼ�); 
    
    */


   // delete ����O����(new)
    delete y; // ���񱼭��ʺA�t�m���O����(new�Ӫ�)
    cout<< "delete y" << endl;
    cout<< *y << endl;
    cout<< y << endl;
    cout<< &y << endl;
    cout<<"�s�aZ���V���O�����m�]�Q���񱼤F"<<endl;
    cout<< *z << endl;
    cout<< z << endl;
    cout<< &z << endl;





    
    //const�ت��O���F�����ܼƳQ�ק�


    //int * const p = &a; // p = &b; �o�˷|����
    //type * const name; �N������ܼƪ� ��(address) ����Q�ק�
    int  * const m = new int();
    *m = 10;
    cout<< *m << endl;
    *m = 100;
    cout<< *m << endl;
    delete m;
    // m = new int(); // �o�˷|����

    //const int * p = &a; // *p = 100; �o�˷|����
    //const type * name; �N������ܼƩҫ��V�� �O�����m���� ����Q�ק�
    const int * n = new int();//�S�H�|�o�˼g
    // *n = 10; // �o�˷|����
    
    // const int *n = m;
    n = z; // �o�ˤ��|����(z)�O�����ܼ�
    

    return 0;
}