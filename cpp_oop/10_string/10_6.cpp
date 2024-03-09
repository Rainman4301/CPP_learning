
#include<iostream>
#include<cstdio>
#include<cstring>


using namespace std;

int main(int argc, char * argv[]){


    /*
    登入接受輸入帳號及密碼。
    若帳號為"abcd"，密碼為"1234"，
    顯示"歡迎光臨"，否則顯示"帳號或密碼錯誤,
    請重新輸入"。但若錯誤三次，則顯示"錯誤己?三次"，
    並結束程式。
    */

    char * name = new char[10];
    char * password = new char[10];


    

    // printf("%s\n", name);
    // printf("%s\n", password);

    for (int error_times = 0; error_times < 3; error_times++){

        printf("Please enter the account:\t");
        scanf("%s", name);
        printf("Please enter the password:\t");
        scanf("%s", password);

        if (strcmp(name, "abcd") == 0 && strcmp(password, "1234") == 0)
        {
            printf("Welcom\n");
            break;
        }
        else if (strcmp(name, "abcd") != 0 && strcmp(password, "1234") == 0)
        {
            printf("account error\n");
        }
        else if (strcmp(name, "abcd") == 0 && strcmp(password, "1234") != 0)
        {
            printf("password error\n");
        }
        else
        {
            printf("either account or password error\n");
        }

        if (error_times == 2)
        {
            printf("errors over three times\n");
        } 
    }


    return 0;
}