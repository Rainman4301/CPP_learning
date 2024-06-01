
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;


int main(int argc, char * argv[]){


    /*
    
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

    char wordA[] = "12345";
    cout<<"strcat(wordA, \"6789\") == "<< strcat(wordA, "6789") <<"\n"<<endl;

    char wordB[] = "ABCDE";
    char wordC[] = "ABCD";
    cout<<"strcmp(wordB, wordC) == "<< strcmp(wordB, wordC) <<"\n"<<endl;


    char wordD[] = "1234567890";
    char * pc = strstr(wordD, "456");
    cout<<"pc == "<< pc <<endl;
    cout<<"wordD == "<< wordD <<endl;
    // strcpy(pc, "9999999");
    // cout<<"wordD == "<< wordD <<endl;

    cout<<strcmp(strstr(wordD,"456"), "456789")<<endl;

    cout<<"======================"<<endl;

    
    char wordE[] = "abc,def,ghi,jkl,mno";
    char * pwordE = new char[strlen(wordE)];
    strcpy(pwordE, wordE);
    char * tok = strtok(pwordE, ",./ ");
    // cout<<"tok == "<<tok<<endl;
    cout<<"wordE == "<<wordE<<endl;
    cout<<"pwordE == "<<pwordE<<endl;
    while (tok != NULL)
    {
        cout<<"tok == "<<tok<<endl;
        tok = strtok(NULL, ",./ ");
        // tok++;
    }
    cout<<"wordE == "<<wordE<<endl;
    cout<<"pwordE == "<<pwordE<<endl;


    cout<<"======================"<<endl;

    /*
    
    �r���ƶq�έp[�HC�y������]
        ������J�U�C��r:
            1. 1GL 1GL means First Generation Programming Language.
            It is actually a machine level programming language that is written in one's and zero's.
            These are the programs that can be understood by the computer's central processing unit directly.
            There's no need to run it into a compiler or any other programming software. 
            There are also second, third, up to fourth generation computer programming language.
            2. Abandon ware Abandon ware are software that are not being used, supported,
            or sold by its respective publisher any longer. 
            These types of software cannot be resold or redistributed to end-users unless otherwise given away as a freeware.
            3. ActiveX ActiveX are programs using the Visual Basic programming language.
            It is basically created for active contents of the software that are commonly
            used by other applications that are already installed or existing on the computer.
            Sometimes, it even shares the ones used by the operating system itself.
            ActiveX is the one responsible for the interactive features of web-based programs..
    

        ���O�έp�X�j�g�r��, �p�g�r��, �Ʀr, �Ů�Ψ�L�Ÿ��U���X��.
        ��:
        �j�g: 1 ��
        �p�g: 2 ��
        �Ʀr: 3 ��
        �Ů�:  4 ��
        ��L�Ÿ�: 5 ��
    
    
    */

    char * wordF = new char[2000];
    gets(wordF);
    //cout<<"wordF == "<<wordF<<endl;
    puts(wordF);


    
    return 0;
}