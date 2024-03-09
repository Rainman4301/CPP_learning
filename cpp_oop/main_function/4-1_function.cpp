#include <iostream>
#include <cstdlib> // �]�t�Ω�r���ഫ���w

using namespace std;

int main(int argc, char* argv[]) {
    // �ˬd�O�_���ѤF���T�ƶq���R�O�C�Ѽ�
    if (argc != 3) {

        std::cerr << "�Ϊk: " << argv[0] << " <num1> <num2>" << std::endl;
        return 1;
    }

    // �N�R�O�C�Ѽ��ഫ�����
    int num1 = std::atoi(argv[1]);
    int num2 = std::atoi(argv[2]);

    cout << "�R�O�C�Ѽƪ��ƶq: " << argc << endl;
    cout << "argv[1] => num1: " << num1 << endl;
    cout << "argv[2] => num2: " << num2 << endl;

    // �p�⵲�G�ÿ�X��зǿ�X�y
    int sum = num1 + num2;
    std::cout << "�`�M: " << sum << std::endl;

    // ��X�R�O�C�Ѽƪ��ƶq�M�{�����W�٨�зǿ�X�y
    cout << "�R�O�C�Ѽƪ��ƶq: " << argc << endl;
    cout << "�{���W��: " << argv[0] << endl;

    return 0;
}






// �o�̥ΨӦb�׺ݾ�����{���ɿ�J�R�O�C�Ѽ�

/*

(1). .\4-1_function.exe

    argc == 1   =>   argv[0] == D:\C++\cpp_oop\main_function\4-1_function.exe 

(2). .\4-1_function.exe 10 20

    argc == 3   =>   argv[0] == D:\C++\cpp_oop\main_function\4-1_function.exe 
                    argv[1] == 10
                    argv[2] == 20


*/