
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
    string s2 = s1.substr(s1.find_first_of("Jj"), 4);

    if(s2 == "Java"){
        cout << "Yes "<< s2 <<endl;
    }
    else{
        cout << "No " << s2 << endl;
    }


    s1 = "I love Java. Java is good. Java is vary good.";
    s2 = s1.substr(s1.find_first_of("Jj"), 4);

    if(s2.compare("Java") == 0){
        cout << "Yes "<< s2 <<endl;
    }
    else{
        cout << "No " << s2 << endl;
    }


    //�̷Ӥ��Ϋ᪺���e��J�}�C�A�Ƨ�

    string s3 = "Mary, Tom, John, Peter, David, James, Andy, Jane, Bob, Jack";
    int count = 0;
    size_t startpoint = 0;
    string delimiter = ",";

    do{
        size_t st = s3.find_first_of(delimiter, startpoint);
        if(st == string::npos){
            break;
        }
        count++;
        startpoint = st + delimiter.size();
    } while (true);

    string words[count+1];
    startpoint = 0;

    for (int i = 0; i <= count; i++){

        size_t st = s3.find(delimiter, startpoint);
        words[i] = s3.substr(startpoint, st - startpoint);
        startpoint = st + delimiter.size();
    }

    for(int i = 0; i <= count; i++){
        cout <<"words["<<i<<"]"<< words[i] << endl;
    }

    cout<<"======================================================================"<<endl;
    cout<<"�ϥ� bubble sort �Ƨ�"<<endl;

    
    for (int j = 0; j < count; j++ )
    {

        int smallindex = j;
        for (int i = j + 1; i <= count; i++){

            if(words[smallindex].compare(words[i]) > 0){
                smallindex = i;
            }
        }

        string temp = words[j];
        words[j] = words[smallindex];
        words[smallindex] = temp;
    }

    for(int i = 0; i <= count; i++){
        cout <<"words["<<i<<"]"<< words[i] << endl;
    }

        return 0;
}