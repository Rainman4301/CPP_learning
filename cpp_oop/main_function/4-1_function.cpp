#include <iostream>
#include <cstdlib> // ノ﹃锣传畐

using namespace std;

int main(int argc, char* argv[]) {
    // 浪琩琌矗ㄑタ絋计秖㏑把计
    if (argc != 3) {

        std::cerr << "ノ猭: " << argv[0] << " <num1> <num2>" << std::endl;
        return 1;
    }

    // 盢㏑把计锣传俱计
    int num1 = std::atoi(argv[1]);
    int num2 = std::atoi(argv[2]);

    cout << "㏑把计计秖: " << argc << endl;
    cout << "argv[1] => num1: " << num1 << endl;
    cout << "argv[2] => num2: " << num2 << endl;

    // 璸衡挡狦块夹非块瑈
    int sum = num1 + num2;
    std::cout << "羆㎝: " << sum << std::endl;

    // 块㏑把计计秖㎝祘Α嘿夹非块瑈
    cout << "㏑把计计秖: " << argc << endl;
    cout << "祘Α嘿: " << argv[0] << endl;

    return 0;
}






// 硂柑ノㄓ沧狠诀磅︽祘Α块㏑把计

/*

(1). .\4-1_function.exe

    argc == 1   =>   argv[0] == D:\C++\cpp_oop\main_function\4-1_function.exe 

(2). .\4-1_function.exe 10 20

    argc == 3   =>   argv[0] == D:\C++\cpp_oop\main_function\4-1_function.exe 
                    argv[1] == 10
                    argv[2] == 20


*/