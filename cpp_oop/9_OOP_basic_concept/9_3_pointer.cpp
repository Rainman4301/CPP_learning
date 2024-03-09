




/*

�������
    �ŧi
        ClassName * pointerName;
        Or
        ClassName * pointerName = new ClassName;

    �إߪ���
        new ClassName
        new ClassName()

    ����
        pointerName = memory address;

        Ex:
        pointerName = new ClassName;
        Or
        pointerName = &objectName;
        Or
        pointerName = otherPointerName;

    �����s��
        pointerName -> dataMember
        pointerName -> memberFunction()

        �Ρ@���� -> �����@���覡�A�s�����󦨭��C

    ������аѼ�
        �禡�쫬 : void function(ClassName* pointer)
        �I�s?�z : function(memory address)

    ������Ъ�^��
        �禡�쫬 : ClassName * function()
        �I�s?�z : ClassName * pointer = function();

*/


#include <iostream>
#include"9_3_pointer.h"

using namespace std;

int main(int argc, char * argv[]){

    Circle * pc1;
    pc1 = new Circle();

    Circle * pc2 = new Circle;
    

    cout<<"pc1_address = "<<pc1<<endl;
    cout<<"&pc1_address = "<<&pc1<<endl;
    cout<<"pc2_address = "<<pc2<<endl;
    cout<<"&pc2_address = "<<&pc2<<endl;

    cout<<"======================"<<endl;

    //!!!!!!!!!!!!!!!!!!!!!
    delete pc2;
    pc2 = pc1;
    cout<<"pc1_address = "<<pc1<<endl;
    cout<<"&pc1_address = "<<&pc1<<endl;
    cout<<"pc2_address = "<<pc2<<endl;
    cout<<"&pc2_address = "<<&pc2<<endl;

    cout<<"======================"<<endl;

    Circle c;
    // !!!!!!!!!!!! �o�̪���P�@���ܼƪ��O�����m�����覡���P
    // Circle * pc3 = &c; �o��y�k�O��c���O�����}������pc3�A
    Circle * pc3 = &c;
    cout<<"&c_address = "<<&c<<endl;
    // cout<<"c_address = "<< c <<endl;
    cout<<"pc3_address = "<<pc3<<endl;
    cout<<"&pc3_address = "<<&pc3<<endl;



    /******************************************************************************************************************/



    // �����s��



    cout<<"================================================================="<<endl;

    Circle * pc4 = new Circle();
    pc4->radius = 10;
    pc4->height = 20;
    cout<<"pc4->radius = "<<pc4->radius<<endl;
    cout<<"pc4->getGirth() = "<<pc4->getGirth()<<endl;
    cout<<"pc4->getArea() = "<<pc4->getArea()<<endl;
    cout<<"pc4->getVolume() = "<<pc4->getVolume()<<endl;



    cout<<"================================================================="<<endl;

    Circle c5;
    c5.radius = 20;

    int i = pc1->compare2(&c5);
    cout << "i = " << i << endl;

    Circle * pc6 = new Circle();
    pc6->radius = 30;
    int i2 = pc1->compare2(pc6);
    cout << "i2 = " << i2 << endl;

    int i3 = pc1->compare2(new Circle());
    cout<<"i3 = "<<i3<<endl;


    cout<<"================================================================="<<endl;

    // ������аѼ�

    Circle * pc7 = new Circle();
    pc7->radius = 100000;

    pc7->copy2(&c5);
    cout<<"c5.radius = "<<c5.radius<<endl;

    cout<<"================================================================="<<endl;


    // ������Ъ�^��



    Circle * pc8 = pc7->copy3();
    cout<<"pc8->radius = "<<pc8->radius<<endl;

    delete pc8;
    delete pc7;


    Circle * pc9 = new Circle();
    pc7 = pc9->copy4(pc9);
    cout<<"pc9->radius = "<<pc9->radius<<endl;


    cout<<"================================================================="<<endl;

    Circle * pc10 = new Circle();
    int i4 = pc7->compare2(pc7->copy4(pc10));
    cout<<"i4 = "<<i4<<endl;

    delete pc10;




    return 0;
}
