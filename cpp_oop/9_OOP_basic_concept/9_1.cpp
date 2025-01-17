

#include <iostream>
#include"9_1_circle.h"

using namespace std;







/*

1.物件
    何謂物件
        執行環境依照類別中的宣告，所配置的記憶體群組。它可以儲存一群資料，而該群資料可以完整的描述一個特定的運算單位。
        例如：一群可以完整描述一張訂單的資料、一群可以完整描述購買者的資料、一群可以完整描述一件商品的資料、
        一群可以完整描述日期時間的資料、一群可以完整描述信用卡付款的資料...。

        也就是說：一個記憶體群組，代表一個特定運算單位的完整資料。這一個記憶體群組，我們就稱之為物件。

        所以就程式語言的角度上也可以說：物件一群記憶體的集合。

    物件擁有什麼
        資料成員(Data Members) => 儲存資料(變數)。
        很多文件的解說中稱之為屬性或狀態。在 Java 中稱之為欄位。

        成員函式 (Member Functions) => 運算資料。
        很多文件的解說中稱之為行為或能力。在 Java 中稱之為方法。

    為什麼要使用物件導向
        在物件導向之前是函式導向。隨著運算複雜度的提升，各語言也逐一的支援物件導向。
        物件導向與函式導向的基本差異是：物件儲存資料，物件運算資料。

        以 C / C++ 語言為例，在函式導向時期(C 語言時期)，雖然可以用結構(struct)宣告一個新型別，
        集合一群資料。但是，那一群資料本身並不具有運算能力，它只能當參數讓函式運算。
        所以，資料與運算資料的函式是沒有關係的。

        到了物件導向時期(C++ 時期)，改用類別(class)來宣告新型別。依照類別的宣告建立的物件，
        除了是一群資料的集合之外，本身也具有運算的能力。
        也就是說：資料與運算資料的函式是屬於同一個物件的成員。


    相同類別的物件，一定擁有相同的成員

        相同名稱的資料成員，但它的值不見得一樣。
        相同名稱的成員函式，但它運算的結果不一定一樣。


        每一個物件獨立管理與運算自己的資料

        除非特殊的設計需求。基本上，每個物件運算自己的資料。

*/

int main(int argc, char * argv[]){

    Circle c1;
    c1.radius = 10;
    cout << "c1.radius = " << c1.radius << endl;

    Circle c2;
    c2.radius = 20;
    cout << "c2.getGirth() = " << c2.getGirth() << endl;

    return 0;   
}
  

