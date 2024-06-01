
#include<iostream>
#include<string>


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

    string s1 = "1245";
    s1.append(s1.insert(2, "3"));
    cout<<"s1: "<<s1<<endl;


    cout<<"======================================================================"<<endl;

    s1.erase(5);
    cout<<"s1: "<<s1<<endl;

    s1.erase(3, 2);
    cout<<"s1: "<<s1<<endl;

    //�w�] argument �� 0, npos
    s1.erase();
    cout<<"s1: "<<s1<<endl;


    cout<<"======================================================================"<<endl;

    s1 = "1234567890";

    s1.replace(5, 3, "abc");
    cout<<"s1.replace(5, 3, \"abc\"): "<<s1<<endl;


    cout<<"======================================================================"<<endl;

    size_t st = s1.find("34");
    cout<<"s1.find(\"34\"): "<<st<<endl;


    st = s1.find("88");
    cout<<"s1.find(\"88\"): "<<st<<endl;
    // string::npos = -1
    if(st == string::npos){
        cout<<"88 is not found in s1"<<endl;
    }

    

    return 0;
}