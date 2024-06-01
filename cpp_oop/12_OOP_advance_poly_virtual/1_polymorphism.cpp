
#include <iostream>
#include <string>
using namespace std;

#include "1_CCircle.h"
#include "1_CRectangle.h"
#include "1_CShape.h"








/*

多型與虛擬函式
　　

    多型的應用是物件導向的深入觀念，要理解本章的內容。
    建議同學不只是要先看懂前面物件導向基本觀念與繼承的相關內容，
    而且要熟練。尤其要確實理解關於類別、物件與名稱的關係。

    

    多型的實作，指的是父類別宣告的指標或參考，可以控制所有子類別物件的能力。
    也就是說：父類別宣告的指標或參考，可以代表任何子類別物件。　　

    

    Q. 多型的目的？

        A. 以父類別宣告的指標或參考呼叫成員函式，會因為指派的物件不同而有不同的執行結果。可以避免不必要的Overload。

    

    Q. 什麼是 is-a ？

        A. 用來描述類別與類別的關係。子類別 is-a 父類別。繼承了就是了。

        例：無線光學滑鼠 is-a 光學滑鼠 is-a 滑鼠 is-a 電腦周邊 is-a 電子設備。

        而因為子類別 is-a 父類別，所以一個型別為子類別型別的物件，也是型別為父類別型別的物件。

    

    Q. 物件多型？
        A. 只要是物件就一定有型別。而且會有多種型別。而這多種型別之間，必定有父子型別的關係。

        例 1：

            有父子關係的型別：電子設備 -> 電話 -> 行動電話 -> 智慧型手機。

            物件：你身上的手機。

            　　你身上的手機是一個物件，是一個型別為智慧型手機的物件，
                也是一個型別為行動電話的物件，也是一個型別為電話的物件，
                也是一個型別為電子設備的物件。

    

        例 2：

            有父子關係的型別：電子設備 -> 電腦週邊 -> 滑鼠 -> 光學滑鼠 -> 無線光學滑鼠。

            物件：你桌上的滑鼠。

            　　你桌上的無線光學滑鼠是一個物件，是一個型別為無線光學滑鼠的物件，
                也是一個型別為光學滑鼠的物件，也是一個型別為滑鼠的物件，
                也是一個型別為電子設備的物件。

    

    Q. 什麼是 has-a？

        A. 用來描述類別與類別的關係。在A類別中有用B類別宣告成員變數，我們便可以說A has-a B。

            例：電腦 has-a CPU。

            一個型別為電腦的物件中會包含CPU物件。

*/








/*

一、多型
    1.  指派
        將子類別宣告的物件變數指派到父類別宣告的物件變數。
        其實是物件的複製，並不是多型的應用。

        A.指標
            將子類別物件指派到以父類別宣告的指標。

        B.參考
            將子類別物件指派到以父類別宣告的參考。

        C.集合
            將子類別物件指派到以父類別宣告的集合。

        D.參數
            將子類別物件指派到以父類別宣告的參數。

    2.  函式呼叫
            無論是物件變數、參考或指標，
            都只能呼叫父類別中的成員。

    3.  函式執行
            就算子類別中有定義相同的成員函式。
            無論是物件變數、參考或指標，都執行父類別中的定義的內容。

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

    //這只是複製物件(子類別物件指派到父類別物件)，並不是多型的應用。
    cs = cc;
    cout<<"cs = cc"<<endl;
    cout<<"cs.getArea() = "<<cs.getArea()<<endl;
    cout<<"cc.getArea() = "<<cc.getArea()<<endl;

    cc.setRadius(100);
    cout<<"cs.getArea() = "<<cs.getArea()<<endl;
    cout<<"cc.getArea() = "<<cc.getArea()<<endl;


    /*********************************************************************************************************8*/


    cout<<"---------------------"<<endl;

    //指標
    cout<<"指標"<<endl;
    CCircle c1;
    c1.setRadius(10);
    CShape * pcs = &c1;
    cout<<"pcs->getArea() = "<<pcs->getArea()<<endl;



    //參考
    cout<<"參考"<<endl;
    CShape & rcs = c1;
    cout<<"rcs.getArea() = "<<rcs.getArea()<<endl;

    //集合
    cout<<"集合"<<endl;
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

    //參數
    cout<<"參數"<<endl;

    CCircle c2;
    c2.setRadius(10);
    showArea(&c2);

    CRectangle cr2;
    cr2.setValue(10, 8);
    showArea(&cr2);


    cout<<"---------------------"<<endl;
    /*
    
    下面的程式碼並不能達到多型的效果，因為函式getArea()只能呼叫父類別中的成員函式。
    並不是依據指派的物件而有不同的執行結果。
    
    */
    cout<<"函式呼叫"<<endl;
    cout<<"CCircle"<<endl;
    CCircle c3;
    c3.setRadius(100);
    CShape * pcs2 = &c3;
    CShape & rcs2 = c3;
    cout<<"pcs2->getArea() = "<<pcs2->getArea()<<endl;
    cout<<"rcs2.getArea() = "<<rcs2.getArea()<<endl;
    cout<<"c3.getArea() = "<<c3.getArea()<<endl;

    cout<<"函式呼叫"<<endl;
    cout<<"CRectangle"<<endl;
    CRectangle cr3;
    cr3.setValue(123, 456);
    pcs2 = &cr3;
    rcs2 = cr3;
    cout<<"pcs2->getArea() = "<<pcs2->getArea()<<endl;
    cout<<"rcs2.getArea() = "<<rcs2.getArea()<<endl;


    cout<<"--------------------------------------------------------------------"<<endl;
    
    
    /*
    
    二、虛擬函式
            1.父類別
                A.  宣告與定義虛擬函式
                        在函式宣告?述前加上關鍵字 virtual。

                B.  告虛擬解構函式
                        virtual ~ClassName(){}

            2.子類別
                A.  Override 父類別宣告的虛擬函式。
                        再次宣告與定義父類別中宣告的虛擬函式。

                B.  以多型指標呼叫虛擬函式。
                        執行子類別 Override 的內容。

                C.  以多型參考呼叫虛擬函式。
                        執行子類別 Override 的內容。

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

    cout<<"虛擬函式"<<endl;

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







