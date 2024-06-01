#include<iostream>

using namespace std;






int main(int argc, char * argv[]){




/*

宣告與使用
    宣告變數參考 type & name =  變數名稱;
    透過變數參考存取變數值

    
    宣告指標參考 type *& name = 指標名稱;
    透過指標參考存取指標值



    宣告時一定要指派。
    只能指派一次, 因為再次指派, 改變的是它代替的名稱的值。


*/




    //  一般變數的參考[ a == x]
    int a = 8;
    int &x = a;
    cout<< a << endl;
    x = 100;
    cout<< a << endl;
    a = 80;
    cout<< x << endl;



    // 指標變數的參考
    int *b = new int;
    *b = 8;

    // y == b(指標)
    int *& y = b;
    *y = 100;
    cout<< "b ="<< *b << endl;

  




    return 0;

}
