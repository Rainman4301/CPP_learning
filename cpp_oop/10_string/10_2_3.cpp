
#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char * argv[]){


    /*
    
    C �� cstring �����禡
        strlen
            size_t strlen ( const char * str );
            ���o str ������

        strcpy
            char * strcpy ( char * destination, const char * source );
            �N source ���Ƚƻs�� destination�C
            �b C �y���ɴ��A�٤���� '=' �����r��C�O�γo�Ө禡�A�i��������B��C
                �r���}�C
                �r������
                    �O�o�n new �M delete�C

        memcpy
            void * memcpy ( void * destination, const void * source, size_t num );
            �N soruce �� num ���ת����e�A�ƻs�� destination �C
            �� strcpy �ƻs�ɡA�Y source �����פp�� destination�A�h destination ���h�X�Ӫ����פ������e�ä��|�O�d�C
            �Y�Ʊ��O�d destination ���h�X�Ӫ����ת����e�A�����ϥ� memcpy �C
                ���P�r��
                �P�@�r��
                ���P���A

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