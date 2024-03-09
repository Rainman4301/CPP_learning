#include<iostream>
#include"6_3_header.h"
using namespace std;




/*

return 參考
    建立及呼叫返迴值為變數參考的函式
    建立及呼叫返迴值為指標參考的函式
    可以宣告為 const

*/


int main(int argc, char * argv[]){

    int & p = getreferenceA();


    int r = 10;
    // 很多餘因為函式的參數就是一個參考，沒必要宣告P_1為參考
    // 所以通常回傳參考的函式是不必要的
    int & p_1 = getreferenceA_1(r);
    cout<< r << endl;
    cout<< p_1 << endl;



    cout<< "-------------------" << endl;

    // !!!!!!! 但是如果是類別的話就不一樣了

    Circle c;
    c.radius = 10;
    c.showarea();
    c.radius = 100;
    c.showarea();

    // changeRadius(c, 200) 回傳一個Circle的參考
    // 通常回傳參考的函式是不太需要一個變數去接，
    // 會用在一個物件的函式裡面執行其功能，例如下面的例子
    changeRadius(c, 200).showarea();





    cout<< "-------------------" << endl;
    // 指標的參考
    // 一樣用在一般變數時沒必要
    int * q = new int;
    *q = 1;
    int *k = getReferenceB(q);
    cout<< *q << endl;
    cout<< *k << endl;


    cout<< "-------------------" << endl;
    // 用在類別的時候就有用了
    Circle * c_1 = new Circle;
    c_1->radius = 10;
    c_1->showarea();
    changeRadius2(c_1, 200)->showarea();



    return 0;

}