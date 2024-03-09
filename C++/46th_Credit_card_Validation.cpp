

// Luhn Algorithm
// --------------
// 1. Double every second digit from right to left
//    If doubled number is 2 digits, split them
// 2. Add all single digits from step 1
// 3. Add all odd numbered digits from right to left
// 4. Sum results from steps 2 & 3
// 5. If step 4 is divisible by 10, # is valid

#include <iostream>

int getdiget(const int number);
int sumodd(const std::string carnumber);
int sumevendigits(const std::string carnumber);
int main()
{

    std::string carnumber;
    int result = 0;
    std::cout << "Enter a credit number";
    std::getline(std::cin >> std::ws, carnumber);

    result = sumevendigits(carnumber) + sumodd(carnumber);

    if (result % 10 == 0)
    {
        std::cout << "Car number is valid!!";
    }
    else
    {
        std::cout << "Car number is not valid!!";
    }

    return 0;
}

int getdiget(const int number)
{

    return number % 10 + (number / 10 % 10);
}
int sumodd(const std::string carnumber)
{

    int sum = 0;
    for (int i = carnumber.size() - 1; i >= 0; i -= 2)
    {
        sum += carnumber[i] - '0';
    }
    return 0;
}
int sumevendigits(const std::string carnumber)
{

    int sum = 0;
    for (int i = carnumber.size() - 0; i >= 0; i -= 2)
    {
        // ASCII '0' == dec: 48
        // 因為傳到getdiget()時字元會被轉成數值型所以EX 字元5==數值53 - 字元'0'== 數值48
        sum += getdiget((carnumber[i] - '0') * 2);
    }

    return sum;
}