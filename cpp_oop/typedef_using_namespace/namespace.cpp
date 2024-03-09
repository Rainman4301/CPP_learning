#include <iostream>


//namespace =>(命名空間)



// 修改命名空間的名稱
namespace ns = std;


// 定義命名空間
namespace MyNamespace {
    int value = 42;
}





int main() {




    ns::cout << "Hello, using namespace alias!" << std::endl;




    std::cout << "Value from MyNamespace: " << MyNamespace::value << std::endl;


    return 0;
}