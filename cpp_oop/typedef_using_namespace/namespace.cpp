#include <iostream>


//namespace =>(�R�W�Ŷ�)



// �ק�R�W�Ŷ����W��
namespace ns = std;


// �w�q�R�W�Ŷ�
namespace MyNamespace {
    int value = 42;
}





int main() {




    ns::cout << "Hello, using namespace alias!" << std::endl;




    std::cout << "Value from MyNamespace: " << MyNamespace::value << std::endl;


    return 0;
}