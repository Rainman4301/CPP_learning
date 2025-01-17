

#include<iostream>
#include<string>

#include "4_constructor.h"

using namespace std;





/*

繼承


    物件導向中用來避免程式碼重複撰寫與減低維護困難度的機制。
    子類別可以繼承父類別中的所有成員。
    也就是說，把多個類別都會用到的成員，寫在父類別中，子類別只要繼承父類別，不必再寫，就可以擁有那群成員。
    不但避免了程式寫的重複撰寫，也減少了日後維護的困難度。因為若有程式碼要修改，只需要修改一個類別。


    當我們寫一個新類別，指定繼承某一個或多個己存在的類別時，就是在使用那一個或多個己存在的類別。
    新類別稱之為衍生類別 (Derived class) 或子類別 (Child class)，
    己存在的類別稱之為基礎類別 (Base class) 或父類別 (Parent class)。
    子類別繼承父類別中的所有成員。但繼承了不代表可以存取，子類別不能存取父類別中宣告為 private 的成員，
    只能存取宣告為 protected 或 public 的成員。


    當你是類別開發者時，不接受子類別與物件存取的，宣告為 private。
    不接受物件存取，但接受子類別存取的，宣告為 protected。
    接受物件存取的才宣告為 public。


    繼承運算符號
    ： 


    繼承是為了在父類別的基礎之上，做進一步的開發。
    所以繼承不是重點，重點是繼承後的子類別可以做什麼？


    子類別中可以：
        新增子類別的成員
        在子類別中可以新增父類別中沒有宣告的成員。


    隱藏父類別的成員
        在子類別中可以宣告父類中己宣告過的成員，新宣告的成員會遮蔽父類別中相同名稱的成員。
        若子類別中宣告與父類別中名稱相同的資料成員，子類別中的函式存取的是子類別中的資料成員。
        但父類別中的函式存取的是父類別中的資料成員。


    若子類別中宣告與父類別名稱相同但參數列不同的函式，
    不是 Overloading，一樣是遮蔽了父類別的成員函式。




*/


/*

建構函式

    物件建立時，環境會在配置記憶體之後呼叫類別中定義的建構函式。
    類別開發者會在建構函式中撰寫物件初始化的程式碼，
    一般是指定資料成員的初值。建構函式的名稱必須與類別名稱一樣，可以有參數列，但不可以有返回型別。
    參數列可以宣告參數預設值。


    預設的建構函式
        建立物件時，若建立物件的?述中沒有指定建構函式。
        環境預設會呼叫沒有參數的建構函式。所以沒有參數的建構函式就是預設的建構函式。


        類別中若沒有撰寫建構方法，編譯器會自動產生沒有參數的建構方法。
        但是，自動產生的建構方法並不會自動指派資料成員的初值，所以建構出來的物件是不安全的。
        而且，若類別中有撰寫任何建構方法，編譯器就不會自動產生沒有參數的建構方法。


    Overloading 建構函式
        類別中除了沒有參數的建構函式，也可以視需求，Overloading 多個建構函式。

    this
        每一個成員函式中都有一個隱含的指標 this。this可以指向呼叫此函式的物件，用來取存物件成員。
        主要用途有二：
            在專業編輯環境中快速找到要存取的成員
            解決成員變數與參數名稱重複的問題。

    子類別的建構函式指定呼叫父類別的建構函式
        若父類別沒有預設的建構函式或 Overloading 多個建構函式，子類別的建構函式可以指定呼叫。

*/

/*

如要使用 constructor 的overloading，
當中建構式參數中若有預設值，則不需要再寫一個沒有參數的建構式，

e.g.

   
    // Circle(){
    //     this->radius = 999;
    // }
    
    Circle(int r = 0){
        this->radius = r;
    }

*/

int main(int argc, char * argv[]){

    Circle c(100);
    Rectangle r(10,20);
    cout<<"c's radius: "<<c.getradius()<<endl;
    cout<<"r's length: "<<r.getlength()<<endl;
    cout<<"r's width: "<<r.getwidth()<<endl;

    Circle c2;
    cout<<"c2's radius: "<<c2.getradius()<<endl;

    cout<<"-------------------"<<endl;

    // Circle c2;
    // cout<<"c2's radius: "<<c2.getradius()<<endl;
    // Circle c3(20);
    // cout<<"c3's radius: "<<c3.getradius()<<endl;

    cout<<"-------------------"<<endl;

    Rectangle r2;
    cout<<"r2's length: "<<r2.getlength()<<endl;
    cout<<"r2's width: "<<r2.getwidth()<<endl;

    Rectangle r3(10,20);
    cout<<"r3's length: "<<r3.getlength()<<endl;
    cout<<"r3's width: "<<r3.getwidth()<<endl;

    return 0;
}