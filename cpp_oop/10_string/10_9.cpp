
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
            �Ѧ�
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

    string s1 = "Hellow World";
    string * ps1 = new string("I love C++");

    char c = s1.at(0);
    cout<<"s1.at(0): "<<c<<endl;
    cout<<"s1[0]: "<<s1[0]<<endl;


    char c2 = ps1->at(0);
    cout<<"ps1->at(0): "<<c2<<endl;
    cout<<"ps1[0]: "<<(*ps1)[0]<<endl;


    cout<<"======================================================================"<<endl;


    size_t size = s1.size();
    cout<<"s1.size(): "<<size<<endl;

    size_t size2 = ps1->size();
    cout<<"ps1->size(): "<<size2<<endl;

    for (size_t i = 0; i < s1.size(); i++){
        cout<<s1[i];
    }

    cout<<"\n======================================================================"<<endl;


    s1.assign("New string Content");
    cout<<"s1.assign(\"New string Content\"): "<<s1<<endl;
    ps1->assign("New string Content");
    cout<<"ps1->assign(\"New string Content\"): "<<*ps1<<endl;


    cout<<"\n======================================================================"<<endl;

    s1.append(" C++");
    cout<<"s1.append(\"C++\"): "<<s1<<endl;
    ps1->append(" Java");
    cout<<"ps1->append(\"Java\"): "<<*ps1<<endl;



    return 0;
}