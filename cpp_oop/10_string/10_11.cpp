
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

    string s1 = "I love Java. Java is good. Java is vary good.";
    string findWord = "Java";
    string replaceWord = "C++";
    size_t startPost = 0;

    do{
        size_t st = s1.find(findWord, startPost);
        if(st == string::npos){
            break;
        }
        s1.replace(st, findWord.size(), replaceWord);
        startPost = st + replaceWord.size();
    } while (true);

    cout<<"s1: "<<s1<<endl;


    cout<<"======================================================================"<<endl;


    s1 = "I love Java. Java is good. Java is vary good.";

    // find_first_of �N��O�u�n�b�r�ꤤ���@�ӲŦX���r���N�^��
    size_t st = s1.find_first_of("aeiou");
    cout<<"st: "<<st<<endl;



    cout<<"======================================================================"<<endl;

    s1 = "I love Java. Java is good. Java is vary good.";
    string s2 = s1.substr(7,4);
    cout<<"s2: "<<s2<<endl;

    startPost = 0;
    s1 = "C,C++,Java";
    string s3 = ",";
    int count = 0;

    do{
        size_t st = s1.find(s3, startPost);
        if(st == string::npos){
            break;
        }
        count++;
        startPost = st + s3.size();
    }while(true);

    string words[count + 1];
    startPost = 0;
    for (int i = 0; i<=count; i++){
    
        size_t st = s1.find(s3, startPost);
        words[i] = s1.substr(startPost, st - startPost);
        startPost = st + s3.size();
    
    }

    for (int i = 0; i<=count; i++){
        cout<<"words["<<i<<"]: "<<words[i]<<endl;
    }
    return 0;
}