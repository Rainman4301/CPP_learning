



#include<iostream>
#include<string>
#include<cstring>


// ��C++11���禡

using namespace std;

int main(int argc, char * argv[]){


    /*
    �n�J������J�b���αK�X�C
    �Y�b����"abcd"�A�K�X��"1234"�A
    ���"�w����{"�A�_�h���"�b���αK�X���~,
    �Э��s��J"�C���Y���~�T���A�h���"���~�v?�T��"�A
    �õ����{���C
    */


    string name , password;
    int count = 0;
    bool login = false;
    
    do{
            
        cout<<"�п�J�b��: ";
        cin>>name;
        cout<<"�п�J�K�X: ";
        cin>>password;

        
        if(name.compare("abcd") == 0 && password == "1234"){
            cout<<"�w����{"<<endl;
            login = true;
            break;
        }
        else if(name.compare("abcd") != 0 || password != "1234"){

            if(count < 2){
                count++;
                cout<<"�b���αK�X���~, �Э��s��J"<<endl;
                cout << "You only have " << 3 - count << " times to try" << endl;
                
            }
            else{
                cout<<"���~�v�F�T��"<<endl;
                break;
            }
        }

    } while (!login);


    if(login){
        cout<<"�n�J���\"<<endl;
    }
    else{
        cout<<"�n�J����"<<endl;
    }



    return 0;

}