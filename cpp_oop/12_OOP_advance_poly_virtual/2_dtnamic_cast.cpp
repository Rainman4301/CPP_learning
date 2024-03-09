#include<iostream>
#include<string>
using namespace std;

#include"1_CShape.h"
#include"1_CRectangle.h"
#include"1_CCircle.h"






    /*

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







void doubleshape(CShape * pcs);

int main(int argc, char * argv[]){

    CCircle c1;
    c1.setRadius(10);
    cout<<"c1.getRadius() = "<<c1.getRadius()<<endl;
    doubleshape(&c1);
    cout<<"c1.getRadius() = "<<c1.getRadius()<<endl;

    CRectangle cr1;
    cr1.setValue(10, 5);
    doubleshape(&cr1);
    cout<<"cr1.getArea() = "<<cr1.getArea()<<endl;







     
    return 0;
}



// �ʺA�૬ �����O�����ন�l���O����
void doubleshape(CShape *pcs){



    CCircle * pcc = dynamic_cast<CCircle *>(pcs);
    // cout<<pcc<<endl;
    if (pcc != 0){
        pcc->setRadius(pcc->getRadius() * 2);
        return;
    }


    CRectangle * pcr = dynamic_cast<CRectangle *>(pcs);
    if(pcr != 0){
        pcr->setValue(pcr->getLength() * 2, pcr->getWidth() * 2);
        return;
    }

    // �o�˼g�]�i�H
    // dynamic_cast<CCircle *>(pcs)->setRadius(dynamic_cast<CCircle *>(pcs)->getRadius() * 2);

}