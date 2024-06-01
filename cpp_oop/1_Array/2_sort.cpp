#include  <iostream>    


using namespace std;


int main(int argc, char * argv[]){

    int length = 5;
    int sorces[5]={};

    for (int i = 0 ; i < length; i++){
        std::cout<<"Please input number ";
        cin>>sorces[i];
    }

    cout<<"What you input is: ";
    for (int i = 0 ; i < length; i++){
        cout<<sorces[i]<<endl;
    }


    int biggest_num =   sorces[0];

    for(int i = 0; i < length; i++){
        if (sorces[i] > biggest_num){
            biggest_num = sorces[i];
        }
    }

    cout<<"The biggest number is: "<<biggest_num<<endl;


    // sort the array by bubble sort

    for (int i = 0; i < length; i++){
        for (int j = 0; j < length - i - 1; j++){
            if (sorces[j] > sorces[j+1]){
                int temp = sorces[j];
                sorces[j] = sorces[j+1];
                sorces[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < length; i++){
        cout<<sorces[i]<<endl;
    }



    return 0;
}