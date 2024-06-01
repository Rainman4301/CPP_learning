

#include<iostream>

using namespace std;


/*

指標的指標
    宣告
    存取 
void *
    指派
    casting
指標的陣列
    宣告
    存取

*/




int main(int argc, char * argv[]){

    // 指向指標的指標變數(此指標用來儲存另一個指標的記憶體位址)
    /*
    int **a;：這宣告了一個名為 a 的指向指標的指標變數。
    換句話說，a 是一個指向 int* 型別的指標，
    也就是指向指標的指標。
    */
    int ** a;

    /*
    這行程式碼動態配置了一塊記憶體，
    用來儲存一個 int* 型別的指標。
    然後，將這個指標的位址存放到 a 中。
    此時，a 變成了指向一個 int* 型別的指標。
    */
    a = new int *;

    /*
    這行程式碼動態配置了一塊記憶體，
    用來儲存一個整數。
    然後，將這個整數的位址存放到 *a 中，
    即 a 所指向的位址。這裡的 *a 是一個 int* 型別的指標，
    指向剛剛配置的整數記憶體。
    */
    *a = new int;

    /*
    這行程式碼將值 10 存放到 **a 所指向的位址，
    即剛剛配置的整數記憶體。
    這樣，整數變數的值就被設置為 10。
    */
    **a = 10;

    cout<<" a == "<< a<< endl;
    cout<<" *a == "<< *a<< endl;
    cout<<" **a == "<< **a<< endl;

    // 指標的指標主要用於儲存另一指標的記憶體位址(此指標指向另一變數的記憶體位址)。
    int * b = new int();
    a = &b;





    // void *
    // 用來存取任何型別的記憶體位址。

    void *c;
    c = new int;
    c = new double;
    c = new char;

    c = b;
    cout<< c << endl;
    cout << b;

    // 會出錯，因為 void* 不確定型別。
    // cout << *c << endl;
    // 必須使用 casting。[c語言的寫法]=> 把c轉換成int*，再取值。
    cout<< *((int*)c) << endl;







    int num = 42;

    // ??? void*，失去?型信息
    void* ptr = &num;

    // 使用 static_cast 重新取得型別信息
    int* intPtr = static_cast<int*>(ptr);
    std::cout << "Value using static_cast: " << *intPtr << std::endl;

    // 使用 const_cast 移除 const 限制
    const int* constIntPtr = &num;
    int* nonConstIntPtr = const_cast<int*>(constIntPtr);
    *nonConstIntPtr = 99;
    std::cout << "Value after const_cast: " << num << std::endl;




    // !!!!! 下面兩種方式是不同的


    // 靜態記憶體陣列
    int count;
    cout<< "請輸入學生人數=> ";
    cin >> count;
    int arrayA[count];



    // 動態記憶體陣列
    int counta = 5;
    int * p = new int[counta];
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;


    // 靜態指標的陣列
    int * array[5];
    for(int i = 0; i < 5; i++){
        array[i] = new int; // initialize
        *array[i] = i * 10;
    }
 


    // 動態的指標陣列[要用到指標的指標]
    int **parray;
    parray = new int *[5]; //(指標的陣列)
    for(int i = 0; i < 5; i++){
        parray[i] = new int; // initialize
        *parray[i] = i * 10;
    }



    main(0, 0);

    return 0;
}