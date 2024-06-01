#include <iostream>
#include <cstdlib> // 包含用于字符串?
#include<vector>

#include"4_1_title.h"
namespace Rain{
    int a = 1;
    int b = 2;

    class A{
        public:
            int a = 1;
            int b = 2;
            void showinfo(){
                cout<<"Happy "<<endl;
            }
    };

    class B : public A{
        public:
            int a = 1;
            int b = 2;
            void showinfo(){
                cout<<"Happy "<<endl;
            }
    };

    typedef struct cool{
        int a = 1;
        int b = 2;
        struct cool *next;
        void showinfo(){
            cout<<"Happy "<<endl;
        }
    } Apple;
}



using namespace std;

int main(int argc, char* argv[]) {
    

/*
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <num1> <num2>" << std::endl;
        return 1;
    }

    // 檢查命令行參數的數量是否正確
    int num1 = std::atoi(argv[1]); // 將第一個參數轉換為整數
    int num2 = std::atoi(argv[2]); // 將第二個參數轉換為整數

    // 計算兩個整數的和並輸出
    int sum = num1 + num2;
    std::cout << "Sum: " << sum << std::endl;
    cout<< argc << endl; // 輸出命令行參數的數量
    cout<< argv[0] << endl; // 輸出程式名稱

    // 在終端中使用以下指令編譯和執行程序：
    // bash: g++ -o A B.cpp   使用 g++ 編譯 B.cpp 文件，生成可執行文件 A.exe
    // bash: ./A 1 2  使用 A.exe 執行程序，並輸入 1 和 2    argv[0] == A argv[1] == 1  argv[2] == 2
    // bash: ./A 1 2 3  使用 A.exe 執行程序，並輸入 1、2 和 3   argv[0] == A argv[1] == 1  argv[2] == 2 argv[3] == 3
*/

    showinfo("Rain");
    get_total(1, 100);

    using namespace Rain;
    Rain:: Apple *apple = new Rain::Apple();

    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.pop_back();






    //陣列當參數傳遞是傳Address不是傳Value 
    int array[]={1,2,3,4,5};
    change_array_value(array,5);
    
    for(int i=0;i<5;i++){
        cout<<array[i]<<endl;
    }


    return 0;
}