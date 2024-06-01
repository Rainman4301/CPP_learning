

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;






struct MyStruct {
    int intValue;
    double doubleValue;

    MyStruct(int i, double d) : intValue(i), doubleValue(d) {}
};




/*
如果你只需要在特定的結構體類型內部定義比較操作，
並且不需要與其他類型比較，
那麼選擇此種寫法是更簡單直接的方式。
*/
// Custom comparison function for ascending order based on doubleValue
bool customCompare(const MyStruct& a, const MyStruct& b) {
    return a.doubleValue < b.doubleValue;
}

bool customCompareDescending(const MyStruct& a, const MyStruct& b) {
    return a.doubleValue > b.doubleValue;
}


/*
如果你希望比較函數具有更大的通用性，
能夠與不同類型進行比較，
那麼此種寫法是更好的選擇。
*/
template<typename T>
bool customCompare_template(const T& a, const T& b) {
    return a.doubleValue < b.doubleValue;
}




int main() {
    std::vector<MyStruct> structObjects = {
        {5, 3.14},
        {2, 1.23},
        {10, 2.71},
        {7, 0.86},
        {3, 5.56}
    };

    // Ascending Use std::sort with custom comparison function for ascending order based on doubleValue
    std::sort(structObjects.begin(), structObjects.end(), customCompare);
    std::cout << "Sorted struct objects (ascending order based on doubleValue):" << std::endl;
    for (const MyStruct& obj : structObjects) {
        std::cout << "intValue: " << obj.intValue << ", doubleValue: " << obj.doubleValue << std::endl;
    }


    std::cout << std::endl;

    // Ascending order based on doubleValue using lambda
    std::sort(structObjects.begin(), structObjects.end(), [](const MyStruct& a, const MyStruct& b) {
        return a.doubleValue > b.doubleValue;
    });

    std::cout << "Sorted struct objects (descending order based on doubleValue using lambda):" << std::endl;
    for (const MyStruct& obj : structObjects) {
        std::cout << "intValue: " << obj.intValue << ", doubleValue: " << obj.doubleValue << std::endl;
    }





















    std::cout << std::endl;

    // Descending order based on doubleValue using lambda
    std::sort(structObjects.begin(), structObjects.end(), [](const MyStruct& a, const MyStruct& b) {
        return a.doubleValue > b.doubleValue;
    });

    std::cout << "Sorted struct objects (descending order based on doubleValue using lambda):" << std::endl;
    for (const MyStruct& obj : structObjects) {
        std::cout << "intValue: " << obj.intValue << ", doubleValue: " << obj.doubleValue << std::endl;
    }

    std::cout << std::endl;

    // Descending order based on doubleValue using customCompareDescending
    std::sort(structObjects.begin(), structObjects.end(), customCompareDescending);

    std::cout << "Sorted struct objects (descending order based on doubleValue using customCompareDescending):" << std::endl;
    for (const MyStruct& obj : structObjects) {
        std::cout << "intValue: " << obj.intValue << ", doubleValue: " << obj.doubleValue << std::endl;
    }

    return 0;
}