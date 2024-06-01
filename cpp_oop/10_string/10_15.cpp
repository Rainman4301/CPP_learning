



#include<iostream>
#include<string>
#include<cstring>


// 用C++11的函式

using namespace std;

int main(int argc, char * argv[]){


    /*
    登入接受輸入帳號及密碼。
    若帳號為"abcd"，密碼為"1234"，
    顯示"歡迎光臨"，否則顯示"帳號或密碼錯誤,
    請重新輸入"。但若錯誤三次，則顯示"錯誤己?三次"，
    並結束程式。
    */


    string name , password;
    int count = 0;
    bool login = false;
    
    do{
            
        cout<<"請輸入帳號: ";
        cin>>name;
        cout<<"請輸入密碼: ";
        cin>>password;

        
        if(name.compare("abcd") == 0 && password == "1234"){
            cout<<"歡迎光臨"<<endl;
            login = true;
            break;
        }
        else if(name.compare("abcd") != 0 || password != "1234"){

            if(count < 2){
                count++;
                cout<<"帳號或密碼錯誤, 請重新輸入"<<endl;
                cout << "You only have " << 3 - count << " times to try" << endl;
                
            }
            else{
                cout<<"錯誤己達三次"<<endl;
                break;
            }
        }

    } while (!login);


    if(login){
        cout<<"登入成功"<<endl;
    }
    else{
        cout<<"登入失敗"<<endl;
    }



    return 0;

}