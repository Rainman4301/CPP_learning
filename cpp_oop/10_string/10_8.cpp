
#include<iostream>
#include<cstdio>
#include<cstring>


using namespace std;

int main(int argc, char * argv[]){

    /*
    
    C++ �� string ���� string ���O
        �����ܼ�
            �ŧi
            ����
        �������
            �ŧi
            ����
        �غc�禡
        �����禡
            char& at (size_t pos); / [ ]
            size_t size() const; / size_t length() const;
                �r�ꪫ�󪺪���
            string& assign (const string& str); / =
                �����s���e������A���󤤪��¤��e�|�Q���N�C
            string& append (const string& str); / +=
                �N str �걵�쪫��ثe���e���̫᭱�C
            string& insert (size_t pos, const string& str);
                �b����ثe���e pos ����m�A���J str �C
            string& erase (size_t pos = 0, size_t len = npos);
                �⪫��ثe���e���q pos �}�l�A���� len �����e?���C
            string& replace (size_t pos, size_t len, const string str);
                �� str ���N����ثe���e���A�q pos �}�l���� len �����e�C
            size_t find (const string& str, size_t pos = 0) const;
                �q pos �}�l�A��X str �Ĥ@���X�{����m�C�Y���s�b�A�Ȭ� npos(-1) �C
            size_t find_first_of (const string& str, size_t pos = 0) const;
                �q pos �}�l�A��X str ��������@�Ӧr���A�Ĥ@���X�{����m�C�Y���s�b�A�Ȭ� npos(-1) �C
            string substr (size_t pos = 0, size_t len = npos) const;
                �B��X�@�ӷs�� stirng ����A�䤺�e��������? pos �}�l���� len �����e�C
            int compare (const string& str) const;
                �P str ��j�p�C���ȡB�s�B�t�Ȥ��O�N��j��B����B�p��C

    */

    string s1;
    s1 = "abcd";

    string s2 = "1234";
    string s3("klmn");

    
    cout<<"s1: "<<s1<<endl;
    cout<<"s2: "<<s2<<endl;
    cout<<"s3: "<<s3<<endl;


    string *ps1 = &s1;
    string *ps2 = new string;
    string *ps3 = new string("stu");
    *ps2 = "xyz";

    cout<<"ps1: "<<*ps1<<endl;
    cout<<"ps2: "<<*ps2<<endl;
    cout<<"ps3: "<<*ps3<<endl;

    *ps1 = "pqr";
    cout<<"ps1: "<<*ps1<<endl;
    cout<<"s1: "<<s1<<endl;

    cout << "*****************************************************************************" << endl;


    

    return 0;
}