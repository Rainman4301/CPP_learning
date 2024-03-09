#include <iostream>
#include "5_2_title.h"
using namespace std;

void test(int a[]){
    cout << "計算陣列長度" << endl;
    // 無效，僅傳入陣列第一個位置的值
    cout << sizeof(a) / sizeof(int);
}




int main(int argc, char const *argv[]){
    int a = 10;
    showValue(&a);

    int *b = new int();
    *b = 20;
    showValue(b);

    int *c = b;
    showValue(c);

    /*
    new int()：這種形式的初始化使用了函數調用的方式，
    它創建一個 int 型別的對象並執行其默認初始化。
    意味著分配的存儲被置為零，即所以的值初始化。
    new int：這種形式的初始化不進行存儲的初始化，
    因此所分配的存儲中的值是不確定的，可能是隨機值。
    */
    showValue(new int());
    showValue(new int(100));
    showValue(new int);

    /* passbyvalue
       passbyaddress:
       (1)pointer *
       (2)reference &
    */
    int value = 1;
    passbyvalue(value);
    cout << value << endl;

    passbypoint(&value);
    cout << value << endl;

    // return value == (pointer)
    int * i = getaddressA();
    cout << *i << endl;

    cout << getaddressB() << endl;
    int * j = getaddressB();
    cout << *j << endl;

    delete i, j;

    /*
       // 因為是靜態記憶體的返回，所以會被釋放掉
       // 返回的記憶體已不存在
       int * k = getaddressC();
       cout << *k << endl;
    */
    int * m = new int;
    *m = 1;
    const int *n = getaddressD(m);
    cout << *n << endl;
    // *n = 100; // error 因為const 關係

    // 動態陣列 & 陣列參數
    // 靜態內存陣列


    int count = 5;
    // cout << "請輸入學生人數=> ";
    // cin >> count;
    // int array[count];

    // 動態內存陣列
    int * p = new int[count];
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;


    cout << "動態內存陣列 p == " << p  << endl;
    cout << "&p == " << &p  << endl;
    cout << "&p[0] == " << &p[0]  << endl;
    cout << "&p[1] == " << &p[1]  << endl;
    cout << "&p[2] == " << &p[2]  << endl;
    cout << "&p[3] == " << &p[3]  << endl;
    cout << "&p[4] == " << &p[4]  << endl;
    
    for(int i = 0; i < count; i++){
        // 要加&，因為是釋放內存位址。 
        // 如果不加&，p[i]是代表內存位址的值。
        delete &p[i];
    }

    delete p;

    // 陣列參數
    // 型別可以用 * 取代 []。
    return 0;   
}