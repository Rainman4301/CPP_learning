#include <iostream>
int searchArray(int array[], int size, int element);
int main()
{

    int number[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(number) / sizeof(int);
    int index;
    int mynum;

    std::cout << "Enter element to search for: " << '\n';
    std::cin >> mynum;

    index = searchArray(number, size, mynum);

    if (index != -1)
    {
        std::cout << mynum << " is at index " << index;
    }
    else
    {
        std::cout << mynum << " is not in the array";
    }

    return 0;
}

int searchArray(int array[], int size, int element)
{

    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1; // sentinel value represent something was not found
}

// #include<iostream>

// int searchArray(std::string array[], int size, std::string element);

// int main()
// {
//     std::string foods[] = {"pizza", "hamburger", "hotdog"};
//     int size = sizeof(foods)/sizeof(foods[0]);
//     int index;
//     std::string myFood;

//     std::cout << "Enter element to search for: " << '\n';
//     std::getline(std::cin, myFood);

//     index = searchArray(foods, size, myFood);

//     if(index != -1){
//         std::cout << myFood << " is at index " << index;
//     }
//     else{
//         std::cout << myFood << " is not in the array";
//     }

//     return 0;
// }
// int searchArray(std::string array[], int size, std::string element){

//     for(int i = 0; i < size; i++){
//         if(array[i] == element){
//             return i;
//         }
//     }
//     return -1;
// }