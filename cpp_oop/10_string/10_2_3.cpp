
#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char * argv[]){


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

    */
    
    
    // char * strcpy ( char * destination, const char * source );
    char *dest1 = "12345";          // irretional
    char *dest2 = new char[11];     // irretonal
    char temp[11];
    char *dest3 = temp;
    char *dest4 = dest2;


    const char * sou1 = "12345";
    const char * sou2 = new char[11];   // irretional
    char temp2[11];                 
    const char * sou3 = temp2;
    const char * sou4 = sou2;

    char wordA[11];
    strcpy(wordA, "12345"); 
    cout<<"wordA: "<<wordA<<endl;

    char * wordB = new char[11];
    strcpy(wordB, "12345");
    cout<<"wordB: "<<wordB<<endl;

    strcpy(wordA, "1234567890123456789"); 
    cout<<"wordA: "<<wordA<<endl;

    wordB = new char[15];
    strcpy(wordB, "1234567890123456789");
    cout<<"wordB: "<<wordB<<endl;

    char * wordC = new char[20];    
    strcpy(wordC, wordB);
    cout<<"wordC: "<<wordC<<endl;
    cout<<"strlen(strcpy(wordC, wordB)):  "<<strlen(strcpy(wordC, wordB))<<endl;


    cout<<"===========================================\n\n"<<endl;


    char * wordD = new char[21];
    strcpy(wordD, "12345");
    strcpy(wordD + 3, "67890"+3);
    cout<<"wordD: "<<wordD<<endl;

    char * wordE = new char[21];
    strcpy(wordE, "Hi, I am Rain");
    char newName[] = "John";
    strcpy(wordE + strlen(wordE) - strlen(newName), newName);
    cout<<"wordE: "<<wordE<<endl;


    cout<<"===========================================\n\n"<<endl;


    // void * memcpy ( void * destination, const void * source, size_t num );

    void *pv;
    int a = 97;
    pv = &a;
    cout<<"pv: "<<pv<<endl;
    cout<< "*pv: "<<*(int *)pv<<endl;
    // !!!!!!!!!!!!!!!!!!!!!!!!!!!!
    cout<< "*pv: "<<*(char *)pv<<endl;

    char b = 'a';
    pv = &b;
    cout<<"pv: "<<pv<<endl;

    // *pv = 'b';   error
    cout<< "*pv: "<<*(char *)pv<<endl;
    *(char * )pv = 'b';
    cout<< "*pv: "<<*(char *)pv<<endl;

    int *pz = new int;
    *pz = 123;
    pv = pz;
    cout<<"*pv: "<<*(int *)pv<<endl;


    cout<<"===========================================\n\n"<<endl;

    char wordF[] = "123456789";
    char wordF_1[] = "123456789";
    char wordF_2[] = "123456789";
    char wordG[] = "abcde";
    strcpy(wordF, wordG);
    cout<<"wordF: "<<wordF<<endl;
    
    memcpy(wordF_1 + 3, wordG, strlen(wordG));
    cout<<"wordF_1: "<<wordF_1<<endl;
    cout<<*(char *)memcpy(wordF_1 + 3, wordG, strlen(wordG))<<endl;
    char * temp1 = (char *)memcpy(wordF_1 + 3, wordG, strlen(wordG));
    cout<<"temp1: "<<temp1<<endl;
    
    memccpy(wordF_2, wordG, 'a', strlen(wordG));
    cout<<"wordF_2: "<<wordF_2<<endl;

    memcpy(wordF + 3, wordF + 6, 3);
    cout<<"wordF: "<<wordF<<endl;

    int z = 97;
    char wordH[] = "123456789";
    memcpy(wordH, &z, 1);
    cout<<"wordG: "<<wordH<<endl;

    memcpy(&z, wordH + 1, 1);
    cout<<"z: "<<z<<endl;
    

    return 0;
}