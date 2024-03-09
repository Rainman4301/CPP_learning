#include<iostream>
#include<string>
using namespace std;

#include"1_CShape.h"
#include"1_CRectangle.h"
#include"1_CCircle.h"






    /*

                3. dynamic cast
                    A.  指標
                        dynamic_cast<type*>(pointer)

                            失敗時其值為0。

                    B. 參考
                        dynamic_cast<type&>(reference)

                            失敗時產生Exception。

        三、純虛擬函式
                1. 宣告純虛擬函式
                    virtual type name (parameter list) = 0;

                2. 抽象類別
                    類別中若宣告或繼承了一個或多個純虛擬函式，此類別即為抽象類別。

                        A. 不可建立物件。  
                        B. 可以做為實作多型的型別。
    
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



// 動態轉型 父類別指標轉成子類別指標
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

    // 這樣寫也可以
    // dynamic_cast<CCircle *>(pcs)->setRadius(dynamic_cast<CCircle *>(pcs)->getRadius() * 2);

}