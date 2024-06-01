#include <iostream>
#include <vector>



//typedef => 類型別名(class)
//using => 別名聲名(class、namespace中的成員)




/****************************using 別名聲名（Type Aliases）*/
// 創建別名[class]
using ll = long long int;
using MyFloat = float;


// 引入命名空間中的成員
/*
這裡的using是引入命名空間中的成員，而不是引入命名空間本身，
在使用上只有被引入的成員才可以省略命名空間的前綴。

與using namespace不同的是，using namespace是引入整個命名空間，
而using只是引入命名空間中的成員。
*/
using std::cout;
using std::endl;
using std::vector;

//錯誤的 不能使用namespace的別名
// using stddddd = std;


using namespace std;




/*****************************typedef 類型別名*/
// 創建類型別名
typedef int Integer;


typedef struct test{
    int a;
    int b;
} hexgon;

int main() {


    /*using 別名聲名（Type Aliases）*/

    // 創建別名
    ll number = 1234567890123456789;
    MyFloat value = 3.14;

    std::cout << "Number: " << number << std::endl;
    std::cout << "Value: " << value << std::endl;




    // 引入命名空間中的成員
    vector<int> numbers = {1, 2, 3, 4, 5};

    for (int num : numbers) {
    cout << num << " ";
    }
    cout << endl;


/*******************************************************************************************************************************************8*/



    // 創建類型別名
    Integer num = 123;
    std::cout << "Number: " << num << std::endl;

    


   

    return 0;
}
