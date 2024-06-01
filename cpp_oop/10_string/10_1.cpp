
#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char * argv[]){

    /*
    
    �r���}�C�P�r������
        �ŧi�r���}�C
            char name[length + 1];
                �r���}�C�̫�@�Ӥ����������Ŧr���A��r���X�� 0 �A�N�X�� NUL�C
            char name[length + 1] = {'1','2','3',.....};
                ���������Ŷ��|�m�J�Ŧr��
            char name[length+1] = "12345";
                ���������Ŷ��|�m�J�Ŧr��
            char name[] = "12345";
                �������ҷ|�۰ʦb�̥��ݦ�W�Ŧr��
    
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
    
    �ŧi�r������
        char * name;
        char * name = "12345";  //����ĳ
            �S�� new �N���� delete �C
        char * name = new char[length + 1];
    
    */



    char * nameA;   //�S����l�ơA�����D���V���̡C
    char * nameB = "12345";  //����ĳ�A�S�� new �N���� delete �C
    char * nameC = new char[11];
    // cout<<"nameA: "<<nameA<<endl;
    cout<<"nameB: "<<nameB<<endl;
    // cout<<"nameC: "<<nameC<<endl;



    cout<<"===========================================\n\n"<<endl;


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

        strcat
            char * strcat ( char * destination, const char * source );
            �N source �����e�A�걵�b destination ������e���᭱�C

        strcmp
            int strcmp ( const char * str1, const char * str2 );
            �q�Ĥ@�Ӧr���}�l�v�@��� str1 �P str2 ���Ҧ��r���C
            ���L�{�Y�����@�˪��r���ɡG
            * �Y str1 ���r���j�� str2 ���r���A�B�⪺���G�����ȡC
            * �Y str1 ���r���p�� str2 ���r���A�B�⪺���G���t�ȡC
            �Y str1 �������r������str2 �������r���A�B�⪺���G���s�C

        const char * strstr ( const char * str1, const char * str2 );
            �B��X str2 �b str1 ���Ĥ@���X�{����m�C�Y���s�b���G�� NULL�C

        char * strtok ( char * str, const char * delimiters );
            �̷� delimiters �����e���� str�Cdelimiters �����U�Ӧr�����Ϊ����Y�Cstr �����e�|�Q���ܡC
    
    
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