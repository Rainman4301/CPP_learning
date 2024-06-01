
#include<iostream>
#include<cstdio>
#include<cstring>


using namespace std;

int main(int argc, char * argv[]){

    /*
    
    C++ 的 string 中的 string 類別
        物件變數
            宣告
            指派
        物件指標
            宣告
            指派
        建構函式
        成員函式
            char& at (size_t pos); / [ ]
            size_t size() const; / size_t length() const;
                字串物件的長度
            string& assign (const string& str); / =
                指派新內容給物件，物件中的舊內容會被取代。
            string& append (const string& str); / +=
                將 str 串接到物件目前內容的最後面。
            string& insert (size_t pos, const string& str);
                在物件目前內容 pos 的位置，插入 str 。
            string& erase (size_t pos = 0, size_t len = npos);
                把物件目前內容中從 pos 開始，長度 len 的內容?除。
            string& replace (size_t pos, size_t len, const string str);
                用 str 取代物件目前內容中，從 pos 開始長度 len 的內容。
            size_t find (const string& str, size_t pos = 0) const;
                從 pos 開始，找出 str 第一次出現的位置。若不存在，值為 npos(-1) 。
            size_t find_first_of (const string& str, size_t pos = 0) const;
                從 pos 開始，找出 str 中的任何一個字元，第一次出現的位置。若不存在，值為 npos(-1) 。
            string substr (size_t pos = 0, size_t len = npos) const;
                運算出一個新的 stirng 物件，其內容為本物件? pos 開始長度 len 的內容。
            int compare (const string& str) const;
                與 str 比大小。正值、零、負值分別代表大於、等於、小於。

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