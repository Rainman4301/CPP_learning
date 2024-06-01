



#include<iostream>
#include<string>
#include"10_16.h"


using namespace std;

int main(int argc, char * argv[]){


    /*
    
    
    */


   cout<<"Please input the ID => ";
   string id;
   cin>>id;

   int b = checkID(id);

   if(b){
       cout<<"Welcome"<<endl;
   }
   else{
       cout<<"Wrong ID"<<endl;
   }


   return 0;
}