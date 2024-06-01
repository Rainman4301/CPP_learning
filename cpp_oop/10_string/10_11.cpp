
#include<iostream>
#include<string>


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
            參考
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

    // find_first_of 意思是只要在字串中找到一個符合的字元就回傳
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