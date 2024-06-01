
#include <iostream>
#include <cstdlib> 

using namespace std;




void showinfo();
void get_total(int A, int B);
void change_array_value(int a[] ,int lemgth);

void showinfo(string name){

    cout<<"Happy "<< name <<endl;
}
 
void get_total(int A, int B){
    int total = 0;
    for (int i = A; i <= B; i++){
        total+=i;
    }

    cout<<"The total is "<< total <<endl;
}


void change_array_value(int a[] ,int length ){

    for (int i = 0; i < length; i++){
        a[i] += 100;
    }
    
}