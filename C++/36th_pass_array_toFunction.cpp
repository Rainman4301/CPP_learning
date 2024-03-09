#include <iostream>

double getTotal(double pppp[], int size);
int main()
{
    double prices[] = {49, 52, 88, 695, 46, 888};
    int size = sizeof(prices) / sizeof(double);
    double total = getTotal(prices, size);

    std::cout << "$" << total;
    return 0;
}
// 這樣是錯誤的因為ARRAY傳入的是記憶體位置所以要用指標
// sizeof(pppp) / sizeof(double) 無法如此拿來計算
double getTotal(double pppp[], int size)
{
    double total = 0;
    for (int i = 0; i < size; i++)
    {
        total += pppp[i];
    }
    return total;
}