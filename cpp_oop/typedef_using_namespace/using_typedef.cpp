#include <iostream>
#include <vector>



//typedef => �����O�W(class)
//using => �O�W�n�W(class�Bnamespace��������)




/****************************using �O�W�n�W�]Type Aliases�^*/
// �ЫاO�W[class]
using ll = long long int;
using MyFloat = float;


// �ޤJ�R�W�Ŷ���������
/*
�o�̪�using�O�ޤJ�R�W�Ŷ����������A�Ӥ��O�ޤJ�R�W�Ŷ������A
�b�ϥΤW�u���Q�ޤJ�������~�i�H�ٲ��R�W�Ŷ����e��C

�Pusing namespace���P���O�Ausing namespace�O�ޤJ��өR�W�Ŷ��A
��using�u�O�ޤJ�R�W�Ŷ����������C
*/
using std::cout;
using std::endl;
using std::vector;

//���~�� ����ϥ�namespace���O�W
// using stddddd = std;


using namespace std;




/*****************************typedef �����O�W*/
// �Ы������O�W
typedef int Integer;


typedef struct test{
    int a;
    int b;
} hexgon;

int main() {


    /*using �O�W�n�W�]Type Aliases�^*/

    // �ЫاO�W
    ll number = 1234567890123456789;
    MyFloat value = 3.14;

    std::cout << "Number: " << number << std::endl;
    std::cout << "Value: " << value << std::endl;




    // �ޤJ�R�W�Ŷ���������
    vector<int> numbers = {1, 2, 3, 4, 5};

    for (int num : numbers) {
    cout << num << " ";
    }
    cout << endl;


/*******************************************************************************************************************************************8*/



    // �Ы������O�W
    Integer num = 123;
    std::cout << "Number: " << num << std::endl;

    


   

    return 0;
}
