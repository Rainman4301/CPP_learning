#include<iostream>

using namespace std;

int main(int argc , char* argv[]){


// 宣告 指派 取值


    int a;
    a = 8;
    cout<< a << endl;

    int b;
    b = 100;
    cout<< &b << endl;


    //記住宣告指標的時候加上* 空一格再加上p，後續使用指標p時不需要再加上*
    int * p;
    p = &b;
    cout<< *p << endl;
    cout<< p << endl;

    // 如果指標再加上*是代表在操作指標所指向的記憶體位置
    // *p == b(value)
    *p = 200;
    cout<< b << endl;



    cout<<"********************************************************"<<endl;




    //address 有三種

    //1. 一般變數的address(&)
    int x = 10;
    cout<< &x << endl;


    //變數名子 、 變數的值          、 變數的address
    //一般變數 、 變數的值          、 變數的address
    //指標變數 、 變數指向的address 、 指標變數的address

    //2. new出來的變數的address
    int * y = new int();
    *y = 20;
    cout<<"new int()"<<endl;
    cout<< *y << endl;
    cout<< y << endl;
    cout<< &y << endl;


    //3. 另一個指標
    int * z = y;
    cout<< *z << endl;
    cout<< z << endl;
    cout<< &z << endl;

    // 總結如果把這些當參數傳遞給函釋示可以傳入 e.g (1). a& (2). new int() (3). 指標Z 讓函式中的參數(*p)可以操作到這些變數
    //一班宣告&指派 int * p = z (指標變數)
    //函式宣告
    /*
    
    void func(int * p){
        *p = 100;
    }
    func(z)
    == int * p = z(指標變數); 
    
    */


   // delete 釋放記憶體(new)
    delete y; // 釋放掉剛剛動態配置的記憶體(new來的)
    cout<< "delete y" << endl;
    cout<< *y << endl;
    cout<< y << endl;
    cout<< &y << endl;
    cout<<"連帶Z指向的記憶體位置也被釋放掉了"<<endl;
    cout<< *z << endl;
    cout<< z << endl;
    cout<< &z << endl;





    
    //const目的是為了防止變數被修改


    //int * const p = &a; // p = &b; 這樣會報錯
    //type * const name; 代表指標變數的 值(address) 不能被修改
    int  * const m = new int();
    *m = 10;
    cout<< *m << endl;
    *m = 100;
    cout<< *m << endl;
    delete m;
    // m = new int(); // 這樣會報錯

    //const int * p = &a; // *p = 100; 這樣會報錯
    //const type * name; 代表指標變數所指向的 記憶體位置的值 不能被修改
    const int * n = new int();//沒人會這樣寫
    // *n = 10; // 這樣會報錯
    
    // const int *n = m;
    n = z; // 這樣不會報錯(z)是指標變數
    

    return 0;
}