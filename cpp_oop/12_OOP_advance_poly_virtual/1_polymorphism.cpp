
#include <iostream>
#include <string>
using namespace std;

#include "1_CCircle.h"
#include "1_CRectangle.h"
#include "1_CShape.h"








/*

�h���P�����禡
�@�@

    �h�������άO����ɦV���`�J�[���A�n�z�ѥ��������e�C
    ��ĳ�P�Ǥ��u�O�n�������e������ɦV���[���P�~�Ӫ��������e�A
    �ӥB�n���m�C�ר�n�T��z���������O�B����P�W�٪����Y�C

    

    �h������@�A�����O�����O�ŧi�����ЩΰѦҡA�i�H����Ҧ��l���O���󪺯�O�C
    �]�N�O���G�����O�ŧi�����ЩΰѦҡA�i�H�N�����l���O����C�@�@

    

    Q. �h�����ت��H

        A. �H�����O�ŧi�����ЩΰѦҩI�s�����禡�A�|�]�����������󤣦P�Ӧ����P�����浲�G�C�i�H�קK�����n��Overload�C

    

    Q. ����O is-a �H

        A. �ΨӴy�z���O�P���O�����Y�C�l���O is-a �����O�C�~�ӤF�N�O�F�C

        �ҡG�L�u���Ƿƹ� is-a ���Ƿƹ� is-a �ƹ� is-a �q���P�� is-a �q�l�]�ơC

        �Ӧ]���l���O is-a �����O�A�ҥH�@�ӫ��O���l���O���O������A�]�O���O�������O���O������C

    

    Q. ����h���H
        A. �u�n�O����N�@�w�����O�C�ӥB�|���h�ث��O�C�ӳo�h�ث��O�����A���w�����l���O�����Y�C

        �� 1�G

            �����l���Y�����O�G�q�l�]�� -> �q�� -> ��ʹq�� -> ���z������C

            ����G�A���W������C

            �@�@�A���W������O�@�Ӫ���A�O�@�ӫ��O�����z�����������A
                �]�O�@�ӫ��O����ʹq�ܪ�����A�]�O�@�ӫ��O���q�ܪ�����A
                �]�O�@�ӫ��O���q�l�]�ƪ�����C

    

        �� 2�G

            �����l���Y�����O�G�q�l�]�� -> �q���g�� -> �ƹ� -> ���Ƿƹ� -> �L�u���Ƿƹ��C

            ����G�A��W���ƹ��C

            �@�@�A��W���L�u���Ƿƹ��O�@�Ӫ���A�O�@�ӫ��O���L�u���Ƿƹ�������A
                �]�O�@�ӫ��O�����Ƿƹ�������A�]�O�@�ӫ��O���ƹ�������A
                �]�O�@�ӫ��O���q�l�]�ƪ�����C

    

    Q. ����O has-a�H

        A. �ΨӴy�z���O�P���O�����Y�C�bA���O������B���O�ŧi�����ܼơA�ڭ̫K�i�H��A has-a B�C

            �ҡG�q�� has-a CPU�C

            �@�ӫ��O���q�������󤤷|�]�tCPU����C

*/








/*

�@�B�h��
    1.  ����
        �N�l���O�ŧi�������ܼƫ���������O�ŧi�������ܼơC
        ���O���󪺽ƻs�A�ä��O�h�������ΡC

        A.����
            �N�l���O���������H�����O�ŧi�����СC

        B.�Ѧ�
            �N�l���O���������H�����O�ŧi���ѦҡC

        C.���X
            �N�l���O���������H�����O�ŧi�����X�C

        D.�Ѽ�
            �N�l���O���������H�����O�ŧi���ѼơC

    2.  �禡�I�s
            �L�׬O�����ܼơB�ѦҩΫ��СA
            ���u��I�s�����O���������C

    3.  �禡����
            �N��l���O�����w�q�ۦP�������禡�C
            �L�׬O�����ܼơB�ѦҩΫ��СA����������O�����w�q�����e�C

*/






















//PolyMorphism
// void draw(CShape * c){
//     cout<<"c->getInfo() = "<<c->getInfo()<<endl;
//     cout<<" c->getArea() = "<<c->getArea()<<endl;
// }
// int main(){

//     CCircle c1;
//     draw(c1);
//     return 0;
// }



//Overload
/*
void draw(CCircle * c){
    cout<<"c->getInfo() = "<<c->getInfo()<<"c->getArea() = "<<c->getArea()<<endl;
}
void draw(CRectanbgle * c){
    cout<<"c->getInfo() = "<<c->getInfo()<<"c->getArea() = "<<c->getArea()<<endl;
}
*/



// overload
void showArea(CCircle * pcs){
    cout<<"c->getArea() = "<<pcs->getArea()<<endl;
}
void showArea(CRectangle * pcs){
    cout<<"c->getArea() = "<<pcs->getArea()<<endl;
}

void showArea(CShape * pcs){
    cout<<"c->getArea() = "<<pcs->getArea()<<endl;
}







int main(int argc, char* argv[]){

    CShape cs;
    cout<<"cs.getArea() = "<<cs.getArea()<<endl;
    CCircle cc;
    cc.setRadius(10);
    cout<<"cc.getArea() = "<<cc.getArea()<<endl;

    //�o�u�O�ƻs����(�l���O�������������O����)�A�ä��O�h�������ΡC
    cs = cc;
    cout<<"cs = cc"<<endl;
    cout<<"cs.getArea() = "<<cs.getArea()<<endl;
    cout<<"cc.getArea() = "<<cc.getArea()<<endl;

    cc.setRadius(100);
    cout<<"cs.getArea() = "<<cs.getArea()<<endl;
    cout<<"cc.getArea() = "<<cc.getArea()<<endl;


    /*********************************************************************************************************8*/


    cout<<"---------------------"<<endl;

    //����
    cout<<"����"<<endl;
    CCircle c1;
    c1.setRadius(10);
    CShape * pcs = &c1;
    cout<<"pcs->getArea() = "<<pcs->getArea()<<endl;



    //�Ѧ�
    cout<<"�Ѧ�"<<endl;
    CShape & rcs = c1;
    cout<<"rcs.getArea() = "<<rcs.getArea()<<endl;

    //���X
    cout<<"���X"<<endl;
    CRectangle cr;
    cr.setValue(10, 8);
    cout<<"cr.getArea() = "<<cr.getArea()<<endl;

    CShape *array[5];
    array[0] = &c1;
    array[1] = &cr;
    array[2] = new CCircle();
    array[3] = new CRectangle();
    array[4] = new CShape();
    for(int i = 0; i < 5; i++){
        cout<<"array["<<i<<"]->getArea() = "<<array[i]->getArea()<<endl;
    }

    //�Ѽ�
    cout<<"�Ѽ�"<<endl;

    CCircle c2;
    c2.setRadius(10);
    showArea(&c2);

    CRectangle cr2;
    cr2.setValue(10, 8);
    showArea(&cr2);


    cout<<"---------------------"<<endl;
    /*
    
    �U�����{���X�ä���F��h�����ĪG�A�]���禡getArea()�u��I�s�����O���������禡�C
    �ä��O�̾ګ���������Ӧ����P�����浲�G�C
    
    */
    cout<<"�禡�I�s"<<endl;
    cout<<"CCircle"<<endl;
    CCircle c3;
    c3.setRadius(100);
    CShape * pcs2 = &c3;
    CShape & rcs2 = c3;
    cout<<"pcs2->getArea() = "<<pcs2->getArea()<<endl;
    cout<<"rcs2.getArea() = "<<rcs2.getArea()<<endl;
    cout<<"c3.getArea() = "<<c3.getArea()<<endl;

    cout<<"�禡�I�s"<<endl;
    cout<<"CRectangle"<<endl;
    CRectangle cr3;
    cr3.setValue(123, 456);
    pcs2 = &cr3;
    rcs2 = cr3;
    cout<<"pcs2->getArea() = "<<pcs2->getArea()<<endl;
    cout<<"rcs2.getArea() = "<<rcs2.getArea()<<endl;


    cout<<"--------------------------------------------------------------------"<<endl;
    
    
    /*
    
    �G�B�����禡
            1.�����O
                A.  �ŧi�P�w�q�����禡
                        �b�禡�ŧi?�z�e�[�W����r virtual�C

                B.  �i�����Ѻc�禡
                        virtual ~ClassName(){}

            2.�l���O
                A.  Override �����O�ŧi�������禡�C
                        �A���ŧi�P�w�q�����O���ŧi�������禡�C

                B.  �H�h�����ЩI�s�����禡�C
                        ����l���O Override �����e�C

                C.  �H�h���ѦҩI�s�����禡�C
                        ����l���O Override �����e�C

            3. dynamic cast
                A.  ����
                    dynamic_cast<type*>(pointer)

                        ���Ѯɨ�Ȭ�0�C

                B. �Ѧ�
                    dynamic_cast<type&>(reference)

                        ���Ѯɲ���Exception�C

    �T�B�µ����禡
            1. �ŧi�µ����禡
                virtual type name (parameter list) = 0;

            2. ��H���O
                ���O���Y�ŧi���~�ӤF�@�өΦh�ӯµ����禡�A�����O�Y����H���O�C

                    A. ���i�إߪ���C  
                    B. �i�H������@�h�������O�C
    
    
    */

    cout<<"�����禡"<<endl;

    //override CCircle
    CShape * pcs3 = &c3;
    CShape & rcs3 = c3;
    cout<<"pcs3->showInfo() = \n";
    pcs3->showInfo();
    cout<<"rcs3.showInfo() = \n";
    rcs3.showInfo();


    // no override

    CRectangle cr4;
    CShape * pcs4 = &cr4;
    CShape & rcs4 = cr4;
    cr4.setValue(123, 456);
    cout << "pcs3->showInfo() = \n";
    cr4.showInfo();
    cout << "rcs3.showInfo() = \n";
    rcs4.showInfo();

    

   

  
    
    
    
    
    
    
    
    
    
    return 0;
}







