



#include<iostream>
#include<string>


// ��C++11���禡

using namespace std;

int main(int argc, char * argv[]){





    /*
    
    �r���ƶq�έp[�H C++ �y������]
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










    char *word = new char[2000];
    cin.getline(word, 2000);

    
    // string sword = word;
    // string �غc��
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
                          // �r�� 0 == �Ʀr 48
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

    cout<<"�j�g: "<<a<<" ��"<<endl;
    cout<<"�p�g: "<<b<<" ��"<<endl;
    cout<<"�Ʀr: "<<c<<" ��"<<endl;
    cout<<"�Ů�: "<<d<<" ��"<<endl;
    cout<<"��L�Ÿ�: "<<e<<" ��"<<endl;



    return 0;
}