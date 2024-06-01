


#include <iostream>
#include<fstream>
#include<cstdio>
#include <string>

using namespace std;



int main(int argc, char const *argv[])
{

    

    /*

    // fstream fs("1_test.txt");
    fstream * pfs = new fstream("1_test.txt");

    string buffer;
    if(pfs->is_open()){
        cout << "fs is open\n\n" << endl;

        // while(getline(*pfs, buffer) ){
        //     cout << buffer << endl;
        // }

        while(true){
            int i = pfs->get();
            if(i == EOF){
                break;
            }
            cout<< (char)i;
        }




    }

    pfs->close();

    */


    fstream * pfs = new fstream("1_test.txt");
    char c;
    pfs->get(c);
    cout<<"c = "<<c<<endl;
    pfs->get(c);
    cout<<"c = "<<c<<endl;

    

    return 0;
}