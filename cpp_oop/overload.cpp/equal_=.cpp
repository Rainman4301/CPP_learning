#include <iostream>
#include <cstring>

class MyString {
private:
    char* str;

public:
    // Constructor that takes a std::string
    MyString(const std::string& s) {
        // Allocate memory and copy the string
        str = new char[s.length() + 1];
        strcpy(str, s.c_str());
    }

    // Destructor
    ~MyString() {
        delete[] str;
    }

    // Overload the assignment operator for std::string
    MyString& operator=(const std::string& s) {
        // Deallocate existing memory
        delete[] str;

        // Allocate new memory and copy the string
        str = new char[s.length() + 1];
        strcpy(str, s.c_str());

        return *this;
    }

    // Function to display the string
    void display() {
        std::cout << str << std::endl;
    }
};

int main() {
    MyString str1("Hello, World!");
    std::string stdStr = "Goodbye!";

    std::cout << "str1: ";
    str1.display();
    std::cout << "stdStr: " << stdStr << std::endl;

    // Use the overloaded assignment operator
    str1 = stdStr;

    std::cout << "After assignment:" << std::endl;
    std::cout << "str1: ";
    str1.display();

    return 0;
}