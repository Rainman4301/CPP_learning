
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;


int main(int argc, char * argv[]){


    /*
    
        strcat
            char * strcat ( char * destination, const char * source );
            將 source 的內容，串接在 destination 原先內容的後面。

        strcmp
            int strcmp ( const char * str1, const char * str2 );
            從第一個字元開始逐一比對 str1 與 str2 的所有字元。
            比對過程若有不一樣的字元時：
            * 若 str1 的字元大於 str2 的字元，運算的結果為正值。
            * 若 str1 的字元小於 str2 的字元，運算的結果為負值。
            若 str1 的全部字元等於str2 的全部字元，運算的結果為零。

        const char * strstr ( const char * str1, const char * str2 );
            運算出 str2 在 str1 中第一次出現的位置。若不存在結果為 NULL。

        char * strtok ( char * str, const char * delimiters );
            依照 delimiters 的內容切割 str。delimiters 中的各個字元為或的關係。str 的內容會被改變。

    

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
    
    字元數量統計[以C語言為例]
        接收輸入下列文字:
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
    

        分別統計出大寫字母, 小寫字母, 數字, 空格及其他符號各有幾個.
        例:
        大寫: 1 個
        小寫: 2 個
        數字: 3 個
        空格:  4 個
        其他符號: 5 個
    
    
    */

    char * wordF = new char[2000];
    gets(wordF);
    //cout<<"wordF == "<<wordF<<endl;
    puts(wordF);


    
    return 0;
}