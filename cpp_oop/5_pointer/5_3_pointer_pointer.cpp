

#include<iostream>

using namespace std;


/*

���Ъ�����
    �ŧi
    �s�� 
void *
    ����
    casting
���Ъ��}�C
    �ŧi
    �s��

*/




int main(int argc, char * argv[]){

    // ���V���Ъ������ܼ�(�����ХΨ��x�s�t�@�ӫ��Ъ��O�����})
    /*
    int **a;�G�o�ŧi�F�@�ӦW�� a �����V���Ъ������ܼơC
    ���y�ܻ��Aa �O�@�ӫ��V int* ���O�����СA
    �]�N�O���V���Ъ����СC
    */
    int ** a;

    /*
    �o��{���X�ʺA�t�m�F�@���O����A
    �Ψ��x�s�@�� int* ���O�����СC
    �M��A�N�o�ӫ��Ъ���}�s��� a ���C
    ���ɡAa �ܦ��F���V�@�� int* ���O�����СC
    */
    a = new int *;

    /*
    �o��{���X�ʺA�t�m�F�@���O����A
    �Ψ��x�s�@�Ӿ�ơC
    �M��A�N�o�Ӿ�ƪ���}�s��� *a ���A
    �Y a �ҫ��V����}�C�o�̪� *a �O�@�� int* ���O�����СA
    ���V���t�m����ưO����C
    */
    *a = new int;

    /*
    �o��{���X�N�� 10 �s��� **a �ҫ��V����}�A
    �Y���t�m����ưO����C
    �o�ˡA����ܼƪ��ȴN�Q�]�m�� 10�C
    */
    **a = 10;

    cout<<" a == "<< a<< endl;
    cout<<" *a == "<< *a<< endl;
    cout<<" **a == "<< **a<< endl;

    // ���Ъ����ХD�n�Ω��x�s�t�@���Ъ��O�����}(�����Ы��V�t�@�ܼƪ��O�����})�C
    int * b = new int();
    a = &b;





    // void *
    // �ΨӦs�����󫬧O���O�����}�C

    void *c;
    c = new int;
    c = new double;
    c = new char;

    c = b;
    cout<< c << endl;
    cout << b;

    // �|�X���A�]�� void* ���T�w���O�C
    // cout << *c << endl;
    // �����ϥ� casting�C[c�y�����g�k]=> ��c�ഫ��int*�A�A���ȡC
    cout<< *((int*)c) << endl;







    int num = 42;

    // ??? void*�A���h?���H��
    void* ptr = &num;

    // �ϥ� static_cast ���s���o���O�H��
    int* intPtr = static_cast<int*>(ptr);
    std::cout << "Value using static_cast: " << *intPtr << std::endl;

    // �ϥ� const_cast ���� const ����
    const int* constIntPtr = &num;
    int* nonConstIntPtr = const_cast<int*>(constIntPtr);
    *nonConstIntPtr = 99;
    std::cout << "Value after const_cast: " << num << std::endl;




    // !!!!! �U����ؤ覡�O���P��


    // �R�A�O����}�C
    int count;
    cout<< "�п�J�ǥͤH��=> ";
    cin >> count;
    int arrayA[count];



    // �ʺA�O����}�C
    int counta = 5;
    int * p = new int[counta];
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;


    // �R�A���Ъ��}�C
    int * array[5];
    for(int i = 0; i < 5; i++){
        array[i] = new int; // initialize
        *array[i] = i * 10;
    }
 


    // �ʺA�����а}�C[�n�Ψ���Ъ�����]
    int **parray;
    parray = new int *[5]; //(���Ъ��}�C)
    for(int i = 0; i < 5; i++){
        parray[i] = new int; // initialize
        *parray[i] = i * 10;
    }



    main(0, 0);

    return 0;
}