#include <iostream>


using namespace std;















void test(int a[]);


int main(int argc, char const *argv[]){





    /*
    
    宣告
        type name[length];
        宣告時要求配置指定長度的記憶體空間 => 該型別的值所需的空間 * length。

        須自行初始化陣列元素的內容。
        type name[] = {value,.....};

        宣告與初始化陣列元素內容。
        以 value 的個數為陣列長度。
        type name[length] = {value,.....};

        宣告與初始化陣列元素內容。

        ***若 length 小於 value 的個數，以 value 的個數為陣列長度。(這一句是錯誤的, length 不可以小於value個數)***
        若 length 大於 value 的個數，以 length 為陣列長度。超過 value 個數部份的元素，一律初始化為 0 。 一般用在建立陣列時，順便初始化所有元素為 0 。



        存取
            指派
            name[index] = value;
            取值
            name[index]
            index
            0 ~ 陣列長度 -1
    

        記憶體配罝
        陣列長度
            應該另外用一個變數來儲存陣列長度。
            不建議使用 sizeof 來運算陣列長度。因為它只在同一個函式中有效。
        陣列與迴圈



    */







    int number[5] = {} ;

    for (int i = 0; i < 5; i++){
        number[i] = i;
    }

    int * p = number;

    cout<<"number :" << number << endl; 
    cout<<"&number :" << &number << endl;
    cout<<"&number[0] :" << &number[0] << endl;
    cout<<"number[0] :" << number[0] << endl;
    cout<<"&number[1] :" << &number[1] << endl;
    cout<<"number[1] :" << number[1] << endl;


    cout<<"p :" << p << endl;
    cout<<"*p :" << *p << endl;


    int number2[] = {1,2,3,4,5};


    int number3[10] = {1,2,3,4,5};
    cout<< "number3[4]" <<number3[4] << endl;
    cout<<"number3[5] :" << number3[5] << endl;


    cout<<"\n\n\n";


    int number4[5];
    number4[0] = 1;
    number4[1] = 2;
    number4[2] = 3;
    number4[3] = 4;
    number4[4] = 5;

    cout<<"sizeof(number4): "<<sizeof(number4) << endl;
    int length = sizeof(number4) / sizeof(int);
    cout<<"length: "<<length <<"\n\n\n"<< endl;

    

    cout<<"number4: "<<number4 << endl;
    cout<<"&number4: "<<&number4 << endl;
    cout<<"number4[0]  "<<number4[0] << endl;

    test(number4);




    return 0;
}


void test(int a[]){

    cout<<"a: "<<a << endl;
    cout<<"&a: "<<&a << endl;
    cout<<"a[0]  "<<a[0] << endl;

    int test_length = sizeof(a) / sizeof(int);
    cout<<"sizeof(a): "<<sizeof(a) << endl;
    cout<<"test_length: "<<test_length << endl;
}