#include <iostream>
#include <cstdlib> // �]�t�Τ_�r�Ŧ�?
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

    // �ˬd�R�O��Ѽƪ��ƶq�O�_���T
    int num1 = std::atoi(argv[1]); // �N�Ĥ@�ӰѼ��ഫ�����
    int num2 = std::atoi(argv[2]); // �N�ĤG�ӰѼ��ഫ�����

    // �p���Ӿ�ƪ��M�ÿ�X
    int sum = num1 + num2;
    std::cout << "Sum: " << sum << std::endl;
    cout<< argc << endl; // ��X�R�O��Ѽƪ��ƶq
    cout<< argv[0] << endl; // ��X�{���W��

    // �b�׺ݤ��ϥΥH�U���O�sĶ�M����{�ǡG
    // bash: g++ -o A B.cpp   �ϥ� g++ �sĶ B.cpp ���A�ͦ��i������ A.exe
    // bash: ./A 1 2  �ϥ� A.exe ����{�ǡA�ÿ�J 1 �M 2    argv[0] == A argv[1] == 1  argv[2] == 2
    // bash: ./A 1 2 3  �ϥ� A.exe ����{�ǡA�ÿ�J 1�B2 �M 3   argv[0] == A argv[1] == 1  argv[2] == 2 argv[3] == 3
*/

    showinfo("Rain");
    get_total(1, 100);

    using namespace Rain;
    Rain:: Apple *apple = new Rain::Apple();

    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.pop_back();






    //�}�C��Ѽƶǻ��O��Address���O��Value 
    int array[]={1,2,3,4,5};
    change_array_value(array,5);
    
    for(int i=0;i<5;i++){
        cout<<array[i]<<endl;
    }


    return 0;
}