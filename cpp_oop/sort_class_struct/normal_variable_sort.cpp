#include <iostream>

// Compare two integers
int compare(int a, int b) {
    if (a > b) {
        return 1;
    } else if (a < b) {
        return -1;
    } else {
        return 0;
    }
}

// Compare two floating-point numbers
int compare(double a, double b) {
    if (a > b) {
        return 1;
    } else if (a < b) {
        return -1;
    } else {
        return 0;
    }
}




// Template function to compare any type
template<typename T>
int compare(T a, T b) {
    if (a > b) {
        return 1;
    } else if (a < b) {
        return -1;
    } else {
        return 0;
    }
}




int main() {
    int num1 = 5, num2 = 10;
    double val1 = 3.14, val2 = 2.71;

    std::cout << "Compare integers: " << compare(num1, num2) << std::endl;
    std::cout << "Compare doubles: " << compare(val1, val2) << std::endl;




    int num3 = 5, num4 = 10;
    double val3 = 3.14, val4 = 2.71;

    std::cout << "Compare integers: " << compare(num3, num4) << std::endl;
    std::cout << "Compare doubles: " << compare(val3, val4) << std::endl;


    return 0;
}
