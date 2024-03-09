#include <iostream>
#include <vector>
#include <algorithm>

struct MyStruct {
    int intValue;
    double doubleValue;

    MyStruct(int i, double d) : intValue(i), doubleValue(d) {}

    // Operator overloading for <
    bool operator<(const MyStruct& other) const {
        return doubleValue < other.doubleValue;
    }
    // Operator overloading for >
    bool operator>(const MyStruct& other) const {
        return doubleValue > other.doubleValue;
    }

};

int main() {
    std::vector<MyStruct> structObjects = {
        {5, 3.14},
        {2, 1.23},
        {10, 2.71},
        {7, 0.86},
        {3, 5.56}
    };

    

    // Ascending Use std::sort with default comparison using overloaded < operator for ascending order based on doubleValue
    std::sort(structObjects.begin(), structObjects.end());
    std::cout << "Sorted struct objects (ascending order based on doubleValue):" << std::endl;
    for (const MyStruct& obj : structObjects) {
        std::cout << "intValue: " << obj.intValue << ", doubleValue: " << obj.doubleValue << std::endl;
    }

    // Ascending order based on doubleValue
    std::sort(structObjects.begin(), structObjects.end(), [](const MyStruct& a, const MyStruct& b) {
        return a < b;
    });
    std::cout << "Sorted struct objects (descending order based on doubleValue):" << std::endl;
    for (const MyStruct& obj : structObjects) {
        std::cout << "intValue: " << obj.intValue << ", doubleValue: " << obj.doubleValue << std::endl;
    }





    // Descending order based on doubleValue
    std::sort(structObjects.begin(), structObjects.end(), std::greater<MyStruct>());
    std::cout << "Sorted struct objects (descending order based on doubleValue):" << std::endl;
    for (const MyStruct& obj : structObjects) {
        std::cout << "intValue: " << obj.intValue << ", doubleValue: " << obj.doubleValue << std::endl;
    }




    // Descending order based on doubleValue
    std::sort(structObjects.begin(), structObjects.end(), [](const MyStruct& a, const MyStruct& b) {
        return a > b;
    });
    std::cout << "Sorted struct objects (descending order based on doubleValue):" << std::endl;
    for (const MyStruct& obj : structObjects) {
        std::cout << "intValue: " << obj.intValue << ", doubleValue: " << obj.doubleValue << std::endl;
    }
   

    return 0;
}




