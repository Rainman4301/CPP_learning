

#include <iostream>
#include"9_2_circle.h"

using namespace std;

/*

2.���O
    ����O���O
    �� int �@�ˡA�O C++ ���X�k�����O�C
    ������n�}�o���O
    �]���{�������󪺻ݨD�A�ҥH�̷Ӫ��󪺻ݨD�}�o���O
    ���O�ΨӰ�����
        �ŧi�ܼ�
        �ŧi����
        �ŧi�Ѧ�
        �����૬
        �����ѧO
        �������һs�����󪺻�����
    ���O��������
        ���󦨭�=> �����Ʀ����A���󦨭��禡
        ���O����=> ���O��Ʀ����A���O�����禡
        �غc�禡(�غc�l)
        ��L



*/


/*

3.�����ܼ�
    �ŧi
        ClassName objectName;

        �ܼƫŧi�ɡA���ҷ|�̷����O�����ŧi�ӫإߪ���C�ç⪫�󪺰O�����}�������ܼơC

    �����s��
        objectName.dataMember
        objectName.memberFunction()

        �Ρ@�ܼ�.�����@���覡�A�s�����󦨭��C

    ����
        objectName = otherObjectName;

        �ܼƩM����O�j�w���A�]�N�O���o���ܼƤ���A�����t�@�Ӫ��󪺰O�����}�����C�����ɬO�N '=' �k�䪺���󪺸�Ʀ������ȡA�ƻs�� '=' ���䪺���󪺸�Ʀ����C

    �����ܼưѼ�
        �禡�쫬 : void function(ClassName objectName)
        �I�s�ԭz : function(objectName);

        �b�禡�I�s?�z���p�A�����񪫥��ܼƮɡA�O�⥻���󪺦����ܼƪ��ȡA�ƻs���禡�������ܼưѼơC

    �����ܼƪ�^��
        �禡�쫬 : ClassName function()
        �I�s�ԭz : ClassName objectName = function();

*/




int main(int argc, char * argv[]){



    Circle c1;
    c1.radius = 10;
    cout << "c1.radius = " << c1.radius << endl;

    Circle c2;
    c2.radius = 20;
    cout << "c2.getGirth() = " << c2.getGirth() << endl;


    cout<<"===================================="<<endl;

    c1 = c2;    
    cout<<"c1.getGirth() = "<<c1.getGirth()<<endl;
    cout<<"c1_address = "<<&c1<<endl;
    cout<<"c2.getGirth() = "<<c2.getGirth()<<endl;
    cout<<"c2_address = "<<&c2<<endl;



    int i = c1.compare(c2);
    if(i == 0){
        cout<<"The value are the same"<<endl;
    }
    else if(i == 1){
        cout<<"c1 is bigger"<<endl;
    }
    else{
        cout<<"c2 is bigger"<<endl;
    }



    cout<<"===================================="<<endl;

    // c3 is a copy of c2
    Circle c3 = c2.copy();
    cout<<"c3.getGirth() = "<<c3.getGirth()<<endl;


    return 0;   
}
  

