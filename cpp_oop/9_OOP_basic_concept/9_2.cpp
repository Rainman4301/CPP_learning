

#include <iostream>
#include"9_2_circle.h"

using namespace std;

/*

2.類別
    什麼是類別
    像 int 一樣，是 C++ 中合法的型別。
    為什麼要開發類別
    因為程式有物件的需求，所以依照物件的需求開發類別
    類別用來做什麼
        宣告變數
        宣告指標
        宣告參考
        物件轉型
        物件識別
        執行環境製做物件的說明書
    類別中有什麼
        物件成員=> 物件資料成員，物件成員函式
        類別成員=> 類別資料成員，類別成員函式
        建構函式(建構子)
        其他



*/


/*

3.物件變數
    宣告
        ClassName objectName;

        變數宣告時，環境會依照類別中的宣告來建立物件。並把物件的記憶體位址指派給變數。

    成員存取
        objectName.dataMember
        objectName.memberFunction()

        用　變數.成員　的方式，存取物件成員。

    指派
        objectName = otherObjectName;

        變數和物件是綁定的，也就是說這個變數不能再指派另一個物件的記憶體位址給它。指派時是將 '=' 右邊的物件的資料成員的值，複製給 '=' 左邊的物件的資料成員。

    物件變數參數
        函式原型 : void function(ClassName objectName)
        呼叫敘述 : function(objectName);

        在函式呼叫?述的小括號中放物件變數時，是把本物件的成員變數的值，複製給函式的物件變數參數。

    物件變數返回值
        函式原型 : ClassName function()
        呼叫敘述 : ClassName objectName = function();

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
  

