#include <iostream>

template<typename T>
class MyTemplateClass {
public:
    MyTemplateClass(T value) : data(value) {}

    void printData() {
        std::cout << "Data type: " << typeid(T).name() << std::endl;  // Output: "Data type: int" or "Data type: double" or "Data type: std::string
        std::cout << "Data: " << data << std::endl;
    }

private:
    T data;
};

int main(int argc, char * argv[]) {


    // ÀRºA

    // Instantiate MyTemplateClass with int
    MyTemplateClass<int> intObj(5);
    intObj.printData();  // Output: Data: 5

    // Instantiate MyTemplateClass with double
    MyTemplateClass<double> doubleObj(3.14);
    doubleObj.printData();  // Output: Data: 3.14

    // Instantiate MyTemplateClass with string
    MyTemplateClass<std::string> stringObj("Hello");
    stringObj.printData();  // Output: Data: Hello






    // °ÊºA


    MyTemplateClass<std::string> * pointer_obj = new MyTemplateClass<std::string>("Hello");


    // Declare a pointer to MyTemplateClass<int> type
    MyTemplateClass<int>* intObjPtr;

    // Instantiate MyTemplateClass and assign its address to the pointer
    intObjPtr = new MyTemplateClass<int>(42);

    // Use the pointer to call the printData function
    intObjPtr->printData();  // Output: Data: 42

    // Clean up memory
    delete intObjPtr;

    return 0;
}