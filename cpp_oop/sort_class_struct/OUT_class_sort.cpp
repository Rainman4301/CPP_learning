#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class MyCustomClass {
public:
    int intValue;
    double doubleValue;

    MyCustomClass(int i, double d) : intValue(i), doubleValue(d) {}

    // Other member functions of the class (if any)...

};

// Custom comparison function for ascending order based on doubleValue
bool customCompareAscending(const MyCustomClass& a, const MyCustomClass& b) {
    return a.doubleValue < b.doubleValue;
}

// Custom comparison function for descending order based on doubleValue
bool customCompareDescending(const MyCustomClass& a, const MyCustomClass& b) {
    return a.doubleValue > b.doubleValue;
}

int main() {
    std::vector<MyCustomClass> customObjects = {
        {5, 3.14},
        {2, 1.23},
        {10, 2.71},
        {7, 0.86},
        {3, 5.56}
    };

    // Ascending order based on doubleValue using customCompareAscending
    std::sort(customObjects.begin(), customObjects.end(), customCompareAscending);

    std::cout << "Sorted custom objects (ascending order based on doubleValue):" << std::endl;
    for (const MyCustomClass& obj : customObjects) {
        std::cout << "intValue: " << obj.intValue << ", doubleValue: " << obj.doubleValue << std::endl;
    }

    std::cout << std::endl;

    // Descending order based on doubleValue using customCompareDescending
    std::sort(customObjects.begin(), customObjects.end(), customCompareDescending);

    std::cout << "Sorted custom objects (descending order based on doubleValue):" << std::endl;
    for (const MyCustomClass& obj : customObjects) {
        std::cout << "intValue: " << obj.intValue << ", doubleValue: " << obj.doubleValue << std::endl;
    }

    std::cout << std::endl;

    // Ascending order based on doubleValue using lambda
    std::sort(customObjects.begin(), customObjects.end(), [](const MyCustomClass& a, const MyCustomClass& b) {
        return a.doubleValue < b.doubleValue;
    });

    std::cout << "Sorted custom objects (ascending order based on doubleValue using lambda):" << std::endl;
    for (const MyCustomClass& obj : customObjects) {
        std::cout << "intValue: " << obj.intValue << ", doubleValue: " << obj.doubleValue << std::endl;
    }

    std::cout << std::endl;

    // Descending order based on doubleValue using lambda
    std::sort(customObjects.begin(), customObjects.end(), [](const MyCustomClass& a, const MyCustomClass& b) {
        return a.doubleValue > b.doubleValue;
    });

    std::cout << "Sorted custom objects (descending order based on doubleValue using lambda):" << std::endl;
    for (const MyCustomClass& obj : customObjects) {
        std::cout << "intValue: " << obj.intValue << ", doubleValue: " << obj.doubleValue << std::endl;
    }

    return 0;
}