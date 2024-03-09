#include<iostream>
#include"7_2_header.h"
using namespace std;





// �ε��c���O�ŧi�ܼưѼ� 

int main(int argc, char * argv[]){


    // struct�@�뫬�O

    struct Circle circleA;
    circleA.radius = 10;
    cout<<"circleA.radius = "<<circleA.radius<<endl;
    circleA.height = 20;
    cout<<"circleA.height = "<<circleA.height<<endl;
    circleA.girth = circleA.radius * 2 * 3.14159;
    cout<<"circleA.girth = "<<circleA.girth<<endl;
    circleA.area = circleA.radius * circleA.radius * 3.14159;
    cout<<"circleA.area = "<<circleA.area<<endl;
    circleA.volume = circleA.area * circleA.height;
    cout<<"circleA.volume = "<<circleA.volume<<endl;

    cout<<"============================"<<endl;

    struct Circle circleB;
    circleB.radius = 10;
    circleB.height = 20;
    circleB.girth = get_girth(circleB);
    cout<< "circleB.girth = "<<circleB.girth<<endl;
    circleB.area = get_area(circleB);
    cout<< "circleB.area = "<<circleB.area<<endl;
    circleB.volume = get_volume(circleB);
    cout<< "circleB.volume = "<<circleB.volume<<endl;

    cout<<"============================"<<endl;



    //struct ���Ы��O
    struct Circle circleC;
    set_radius(&circleC, -10);
    circleC.height = 20;
    circleC.girth = get_girth(circleC);
    cout<< "circleC.girth = "<<circleC.girth<<endl;
    circleC.area = get_area(circleC);
    cout<< "circleC.area = "<<circleC.area<<endl;
    circleC.volume = get_volume(circleC);
    cout<< "circleC.volume = "<<circleC.volume<<endl;
    

    set_Allvalue(&circleC, 10, 20);
    cout<<"circleC.girth = "<<circleC.girth<<endl;
    cout<<"circleC.area = "<<circleC.area<<endl;


    cout<<"============================"<<endl;
    struct Circle * circleD = new struct Circle;
    set_Allvalue(circleD, 100, 200);
    cout<<"circleD->girth = "<<circleD->girth<<endl;
    cout<<"circleD->area = "<<circleD->area<<endl;
    cout<<"circleD->volume = "<<circleD->volume<<endl;

    // ���Ъ��ϥί��I
    struct Circle *circleE = NULL; // == 0
    set_Allvalue(circleE, 100, 200);
    if( circleE != NULL){
        cout<<"circleE->girth = "<<circleE->girth<<endl;
        cout<<"circleE->area = "<<circleE->area<<endl;
        cout<<"circleE->volume = "<<circleE->volume<<endl;
    }
    cout << "ending"<<endl;



/********************************************************************************************/

    // �ε��c���O�ŧi�ѦҰѼ�
    cout << "============================"<<endl;

    struct Circle circleF;
    struct Circle circleG;
    set_Allvalue(&circleF, 10, 20);
    set_Allvalue(&circleG, 10, 20);
    cout<<"compareCircle(circleF, circleG) = "<<compareCircle(circleF, circleG)<<endl;
    cout<<"comparecircle_reference(circleF, circleG) = "<<compareCircle_reference(circleF, circleG)<<endl;


    // �ε��c���O�ŧi���аѼ�
    struct  Circle * circleH = new struct Circle;
    struct  Circle * circleI = new struct Circle;
    set_Allvalue(circleH, 10, 20);
    set_Allvalue(circleI, 10, 20);
    cout<<"compareCircle_pointer(circleH, circleI) = "<<compareCircle_pointer(circleH, circleI)<<endl;
    

/********************************************************************************************/

    // �ε��c���O�ŧi��j���O�P�}�C
    cout << "============================"<<endl;
    struct Circle circleJ;
    set_Allvalue(&circleJ, 10, 20);
    struct Circle circleK = copyCircle(circleJ);
    cout<<"circleJ.area = "<<circleJ.area<<endl;
    cout<<"circleK.area = "<<circleK.area<<endl;


    struct Circle * circleL = new struct Circle;
    copyCircle_pointer(&circleJ, circleL);
    cout<<"circleL->area = "<<get_area(*circleL)<<endl;


    struct Circle * circleM = new struct Circle;
    // *copyCircle_pointer2(circleL, circleM) ��^�@�ӫ��� �[*����
    cout << compareCircle(circleC, *copyCircle_pointer2(circleL, circleM))<<endl;
     

    // copyCircle_reference(circleA, circleB)) ��^�@�ӰѦ�
    set_radius(&circleA, 100);
    copyCircle_reference(circleA, circleB);
    cout<<"circleB.area = "<<get_area(circleB)<<endl;
    cout<<compareCircle(circleA, copyCircle_reference(circleA, circleB))<<endl;


/********************************************************************************************/


    // �ε��c���O�ŧi�}�C
    cout << "============================"<<endl;

    int radius[] = {1,2,3,4,5,6,7,8,9,10};
    int height[] = {11,22,33,44,55,66,77,88,99,100};
    
    // �R�A�ŧi�}�C
    struct Circle circles[10];
    for (int i = 0; i < 10; i++)
    {
        set_Allvalue(&circles[i], radius[i], height[i]);
    }

    for(int i = 0; i < 10; i++)
    {
        showinfo(circles[i]);
    }

    // �ʺA�ŧi�}�C
    struct Circle * pointers[10];
    for(int i = 0; i < 10; i++)
    {
        pointers[i] = new struct Circle;
        set_Allvalue(pointers[i], radius[i], height[i]);
    }


    


    return 0;
}