
#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char * argv[]){

    /*
    
    字元陣列與字元指標
        宣告字元陣列
            char name[length + 1];
                字元陣列最後一個元素必須為空字元，其字元碼為 0 ，代碼為 NUL。
            char name[length + 1] = {'1','2','3',.....};
                未指派的空間會置入空字元
            char name[length+1] = "12345";
                未指派的空間會置入空字元
            char name[] = "12345";
                執行環境會自動在最末端串上空字元
    
    */

    char wordA[11];
    char wordB[11]={'1','2','3','4','5','6','7','8','9','0'};
    char wordC[11]="1234567890";
    char wordD[]="1234567890";

    

    cout << "wordA: " << wordA << endl;
    cout << "wordB: " << wordB << endl;
    cout << "wordC: " << wordC << endl;
    cout << "wordD: " << wordD << endl;


    cout<<"===========================================\n\n"<<endl;




    /*
    
    宣告字元指標
        char * name;
        char * name = "12345";  //不建議
            沒有 new 就不能 delete 。
        char * name = new char[length + 1];
    
    */



    char * nameA;   //沒有初始化，不知道指向哪裡。
    char * nameB = "12345";  //不建議，沒有 new 就不能 delete 。
    char * nameC = new char[11];
    // cout<<"nameA: "<<nameA<<endl;
    cout<<"nameB: "<<nameB<<endl;
    // cout<<"nameC: "<<nameC<<endl;



    cout<<"===========================================\n\n"<<endl;


    /*
    
    C 的 cstring 中的函式
        strlen
            size_t strlen ( const char * str );
            取得 str 的長度

        strcpy
            char * strcpy ( char * destination, const char * source );
            將 source 的值複製給 destination。
            在 C 語言時期，還不能用 '=' 指派字串。是用這個函式，進行指派的運算。
                字元陣列
                字元指標
                    記得要 new 和 delete。

        memcpy
            void * memcpy ( void * destination, const void * source, size_t num );
            將 soruce 中 num 長度的內容，複製到 destination 。
            用 strcpy 複製時，若 source 的長度小於 destination，則 destination 中多出來的長度中的內容並不會保留。
            若希望能保留 destination 中多出來的長度的內容，必須使用 memcpy 。
                不同字串
                同一字串
                不同型態

        strcat
            char * strcat ( char * destination, const char * source );
            將 source 的內容，串接在 destination 原先內容的後面。

        strcmp
            int strcmp ( const char * str1, const char * str2 );
            從第一個字元開始逐一比對 str1 與 str2 的所有字元。
            比對過程若有不一樣的字元時：
            * 若 str1 的字元大於 str2 的字元，運算的結果為正值。
            * 若 str1 的字元小於 str2 的字元，運算的結果為負值。
            若 str1 的全部字元等於str2 的全部字元，運算的結果為零。

        const char * strstr ( const char * str1, const char * str2 );
            運算出 str2 在 str1 中第一次出現的位置。若不存在結果為 NULL。

        char * strtok ( char * str, const char * delimiters );
            依照 delimiters 的內容切割 str。delimiters 中的各個字元為或的關係。str 的內容會被改變。
    
    
    */

   

    //size_t strlen ( const char * str );

    char str1[] = "1234567890";
    char * str2 = "1234567890";

    char * str3 = new char[11];

    char str4[11];
    char *str5 = str4;
    cout<<"strlen(str4): "<<strlen(str4)<<endl;

    // cout<<"strlen(str1): "<<strlen(str1)<<endl;
    cout<<"strlen(str2): "<<strlen(str2)<<endl;
    cout<<"strlen(str3): "<<strlen(str3)<<endl;

    size_t len1 = strlen(str1);
    cout << "len1: " << len1 << endl;


    cout<<"===========================================\n\n"<<endl;









    return 0;   
}