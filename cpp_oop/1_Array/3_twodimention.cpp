 #include<iostream>


using namespace std;
/*

�G���}�C�ŧi
    type name[�@���}�C���ƶq][�C�Ӥ@���}�C������];
    type name[][length]= {{value,.....},{value,.....}};
    type name[arrayNumbers][length] = {{value,.....},{value,.....}};
�G���}�C�s��
    ����
    name[�@���}�C���s��][�������s��] = value;
    ����
    name[�@���}�C���s��][�������s��]
    �s��
    0 ~ �@���}�C���ƶq�Τ������ƶq -1
    �O����t�m
    �����j�鱱��G���}�C
    �h���}�C�����[��

*/






 int main(int argc, char * argv[]){

    int sale1[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };


    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            std::cout<<sale1[i][j]<<" ";
        }
        std::cout<<std::endl;
    }




    int array3[2][3][4]={
        {
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12}
        },
        {
            {13,14,15,16},
            {17,18,19,20},
            {21,22,23,24}
        }
    };


    cout<<endl;




    // reflection


    int array2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            std::cout<<array2[i][j]<<" ";
        }
        std::cout<<std::endl;
    }

    cout<<endl;

    for(int i = 0; i < 3/2; i++){
        for(int j = 0; j < 3; j++){
            int temp = array2[i][j];
            array2[i][j] = array2[2-i][j];
            array2[2-i][j] = temp;
        };
    };


    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            std::cout<<array2[i][j]<<" ";
        }
        std::cout<<std::endl;
    }

    cout<<endl;


    cout<<"====================="<<endl;


    // mirror reflection


    


    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            std::cout<<array2[i][j]<<" ";
        }
        std::cout<<std::endl;
    }

    cout<<endl;


    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3/2; j++){
            
            int temp1 = array2[i][j];
            array2[i][j] = array2[i][2-j];
            array2[i][2-j] = temp1;

        };
    };

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            std::cout<<array2[i][j]<<" ";
        }
        std::cout<<std::endl;
    }




    return 0;
 }