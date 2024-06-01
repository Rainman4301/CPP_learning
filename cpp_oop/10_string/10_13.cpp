
#include<iostream>
#include<string>


using namespace std;

int main(int argc, char * argv[]){

    /*
    
    string 標頭檔中與字串運算相關的函式

        Dev C++ 中使用 C++11的函式
        重要函式
            int stoi (const string&  str, size_t* idx = 0, int base = 10);
                字串轉整數
            string to_string (int val);
                整數轉字串

    */

    string s1 = "111,222,333";
    // 字串轉10進位整數
    int x = stoi(s1);
    cout<<"x = "<<x<<endl;




    size_t st = 0;
    // 字串轉8進位整數
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