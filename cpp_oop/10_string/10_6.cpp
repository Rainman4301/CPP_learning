
#include<iostream>
#include<cstdio>
#include<cstring>


using namespace std;

int main(int argc, char * argv[]){


    /*
    �n�J������J�b���αK�X�C
    �Y�b����"abcd"�A�K�X��"1234"�A
    ���"�w����{"�A�_�h���"�b���αK�X���~,
    �Э��s��J"�C���Y���~�T���A�h���"���~�v?�T��"�A
    �õ����{���C
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