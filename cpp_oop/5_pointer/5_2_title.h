#include<iostream>
using namespace std;

void showValue(int *p);
void passbyvalue(int value);
void passbypoint(int *pvalue);

void showValue(int * p){
    cout<< *p << endl;
}

void passbyvalue(int value){
    value += 100;
}

void passbypoint(int * pvalue){
    *pvalue += 100;
}





/*
return 型別為指標
呼叫?述是一個記憶體位址。
!!!!!!不應 return 區域變數的記憶體位址。
可以宣告為 const。
*/



int *getaddressA();
int *getaddressB();
int *getaddressC();

int * getaddressA(){
    int * p = new int;
    *p = 100;

    return p;
}

int * getaddressB(){

    return new int;
}



// 因為是靜態記憶體，所以會被釋放掉
// 回傳的記憶體已不存在
int * getaddressC(){

    int p = 8;

    return &p;
}







const int * getaddressD(const int *p);
// 參數p值不會被動到
const int * getaddressD(const int* p){


    int * q = new int;
    *q = *p;
    *q += 100;

    return q;
}