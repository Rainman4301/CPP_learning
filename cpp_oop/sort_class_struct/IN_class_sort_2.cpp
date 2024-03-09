#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class MyCustomClass {
public:
    int intValue;
    double doubleValue;

    MyCustomClass(int i, double d) : intValue(i), doubleValue(d) {}

    // Operator overloading for <
    bool operator<(const MyCustomClass& other) const {
        return doubleValue < other.doubleValue;
    }

    // Operator overloading for >
    bool operator>(const MyCustomClass& other) const {
        return doubleValue > other.doubleValue;
    }
};

int main() {
    std::vector<MyCustomClass> customObjects = {
        {5, 3.14},
        {2, 1.23},
        {10, 2.71},
        {7, 0.86},
        {3, 5.56}
    };

    // Ascending order based on doubleValue using overloaded < operator
    std::sort(customObjects.begin(), customObjects.end());

    std::cout << "Sorted custom objects (ascending order based on doubleValue using operator <):" << std::endl;
    for (const MyCustomClass& obj : customObjects) {
        std::cout << "intValue: " << obj.intValue << ", doubleValue: " << obj.doubleValue << std::endl;
    }

    std::cout << std::endl;

    // Descending order based on doubleValue using overloaded > operator
    std::sort(customObjects.begin(), customObjects.end(), std::greater<MyCustomClass>());

    std::cout << "Sorted custom objects (descending order based on doubleValue using operator >):" << std::endl;
    for (const MyCustomClass& obj : customObjects) {
        std::cout << "intValue: " << obj.intValue << ", doubleValue: " << obj.doubleValue << std::endl;
    }

    std::cout << std::endl;

    // Ascending order based on doubleValue using lambda expression
    std::sort(customObjects.begin(), customObjects.end(), [](const MyCustomClass& a, const MyCustomClass& b) {
        return a.doubleValue < b.doubleValue;
    });

    std::cout << "Sorted custom objects (ascending order based on doubleValue using lambda):" << std::endl;
    for (const MyCustomClass& obj : customObjects) {
        std::cout << "intValue: " << obj.intValue << ", doubleValue: " << obj.doubleValue << std::endl;
    }

    std::cout << std::endl;

    // Descending order based on doubleValue using lambda expression
    std::sort(customObjects.begin(), customObjects.end(), [](const MyCustomClass& a, const MyCustomClass& b) {
        return a.doubleValue > b.doubleValue;
    });

    std::cout << "Sorted custom objects (descending order based on doubleValue using lambda):" << std::endl;
    for (const MyCustomClass& obj : customObjects) {
        std::cout << "intValue: " << obj.intValue << ", doubleValue: " << obj.doubleValue << std::endl;
    }

    return 0;
}
