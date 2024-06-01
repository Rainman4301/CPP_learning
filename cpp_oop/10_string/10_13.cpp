
#include<iostream>
#include<string>


using namespace std;

int main(int argc, char * argv[]){

    /*
    
    string ���Y�ɤ��P�r��B��������禡

        Dev C++ ���ϥ� C++11���禡
        ���n�禡
            int stoi (const string&  str, size_t* idx = 0, int base = 10);
                �r������
            string to_string (int val);
                �����r��

    */

    string s1 = "111,222,333";
    // �r����10�i����
    int x = stoi(s1);
    cout<<"x = "<<x<<endl;




    size_t st = 0;
    // �r����8�i����
    x = stoi(s1, &st, 8);


    
    x = stoi(s1, &st);
    cout<<"x = "<<x<<endl; // 111
    cout<<"st = "<<st<<endl; // 3
    int y = stoi(s1.substr(st + 1), &st);
    cout<<"y = "<<y<<endl; // 222
    cout<<"st = "<<st<<endl; // 3

    int z = stoi(s1.substr(st + 1 + 3 + 1 ), &st);
    cout<<"z = "<<z<<endl; // 333
    // cout<<"x + y = "<<x + y<<endl;


    cout <<"============================================================"<<endl;


    string s2 = to_string(12345);
    cout<<"s2 = "<<s2<<endl;

    string s3 = "" + 123; // error10_string/10_13.cpp
    cout<<"s3 = "<<s3<<endl;

    return 0;
}