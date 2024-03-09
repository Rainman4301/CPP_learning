
#include<iostream>
using namespace std;

    // 陣列參數
    // 型別可以用 * 取代 []。

// preference 
double getaverage(int a[], int length);

double getaverage(int a[], int length){

    double sum = 0;
    for (int i = 0; i < length; i++){
        sum += a[i];
    }

    return sum / length;
}



double getaverage_pointer(int *a, int length);

double getaverage_pointer(int *a, int length){

    double sum = 0;
    for (int i = 0; i < length; i++){
        sum += a[i];
    }

    return sum / length;
}


int main(int argc, char * argv[]){

    int a[5] = {1, 2, 3, 4, 5};
    int *b = a;

    cout << getaverage(a, 5) << endl;
    cout << getaverage_pointer(b, 5) << endl;

    return 0;
}



