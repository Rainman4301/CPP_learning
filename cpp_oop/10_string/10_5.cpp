#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;


int main(int argc, char * argv[]){


    /*
    
    �r���ƶq�έp[�HC�y������]
        ������J�U�C��r:
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
    

        ���O�έp�X�j�g�r��, �p�g�r��, �Ʀr, �Ů�Ψ�L�Ÿ��U���X��.
        ��:
        �j�g: 1 ��
        �p�g: 2 ��
        �Ʀr: 3 ��
        �Ů�:  4 ��
        ��L�Ÿ�: 5 ��
    
    
    */

    char words[2000];
    // gets(words);
    // puts(words);

    cin.get(words,2000);
    // cout<<words<<endl;

    int upper = 0, lowerCount = 0, numberCount = 0, spaceCount = 0, otherCount = 0;
    for (size_t i = 0; i < strlen(words); i++){
        if(words[i] >= 'A' && words[i] <= 'Z'){
            upper++;
        }
                        // 97 = 'a'  122 = 'z'
        else if(words[i] >= 97 && words[i] <= 97+26){
            lowerCount++;
        }
        else if(words[i] >= '0' && words[i] <= '9'){
            numberCount++;
        }
        else if(words[i] == ' '){
            spaceCount++;
        }
        else{
            otherCount++;
        }
    }


        cout<<"�j�g: "<<upper<<" ��"<<endl;
        cout<<"�p�g: "<<lowerCount<<" ��"<<endl;
        cout<<"�Ʀr: "<<numberCount<<" ��"<<endl;
        cout<<"�Ů�: "<<spaceCount<<" ��"<<endl;
        cout<<"��L�Ÿ�: "<<otherCount<<" ��"<<endl;

    return 0;
}