#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;


int main(int argc, char * argv[]){


    /*
    
    じ计秖参璸[C粂ēㄒ]
        钡Μ块ゅ:
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
    

        だ参璸糶ダ, 糶ダ, 计, のㄤ才腹Τ碭.
        ㄒ:
        糶: 1 
        糶: 2 
        计: 3 
        :  4 
        ㄤ才腹: 5 
    
    
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


        cout<<"糶: "<<upper<<" "<<endl;
        cout<<"糶: "<<lowerCount<<" "<<endl;
        cout<<"计: "<<numberCount<<" "<<endl;
        cout<<": "<<spaceCount<<" "<<endl;
        cout<<"ㄤ才腹: "<<otherCount<<" "<<endl;

    return 0;
}