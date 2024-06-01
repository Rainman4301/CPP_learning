 #include<iostream>


using namespace std;
/*

二維陣列宣告
    type name[一維陣列的數量][每個一維陣列的長度];
    type name[][length]= {{value,.....},{value,.....}};
    type name[arrayNumbers][length] = {{value,.....},{value,.....}};
二維陣列存取
    指派
    name[一維陣列的編號][元素的編號] = value;
    取值
    name[一維陣列的編號][元素的編號]
    編號
    0 ~ 一維陣列的數量或元素的數量 -1
    記憶體配置
    用雙迴圈控制二維陣列
    多維陣列的基本觀念

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