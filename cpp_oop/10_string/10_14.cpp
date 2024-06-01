



#include<iostream>
#include<string>


// ノC++11ㄧΑ

using namespace std;

int main(int argc, char * argv[]){





    /*
    
    じ计秖参璸[ C++ 粂ēㄒ]
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










    char *word = new char[2000];
    cin.getline(word, 2000);

    
    // string sword = word;
    // string 篶Α
    string sword(word);
    cout<<"sword.size() = "<<sword.size()<<endl;

    int a, b, c, d, e;
    a = b = c = d = e = 0;

    for (size_t i = 0; i < sword.size(); i++){
                        
        if(sword[i] >= 'A' && sword[i] <= 'Z'){
            a++;
        }                   
        else if(sword[i] >= 'a' && sword[i] <= 'z'){
            b++;
        } 
                          // じ 0 == 计 48
        else if(sword[i] >= '0' && sword[i] <= '9'){
            c++;
        }
        else if(sword[i] == ' '){
            d++;
        }
        else{
            e++;
        } 

    }

    cout<<"糶: "<<a<<" "<<endl;
    cout<<"糶: "<<b<<" "<<endl;
    cout<<"计: "<<c<<" "<<endl;
    cout<<": "<<d<<" "<<endl;
    cout<<"ㄤ才腹: "<<e<<" "<<endl;



    return 0;
}