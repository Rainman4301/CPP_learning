


#include <iostream>
#include"9_4_obj_reference.h"


using namespace std;


/*

ン跑计把σ
    
        ClassName & referenceName = objectName;

    ン跑计把σ把计
        ㄧΑ : void function(ClassName & referenceName)
        ㊣?瓃 : function(objectName)

    ン跑计把σ
        ㄧΑ : ClassName & function(ClassName & referenctName)
        ㊣?瓃 : function(objectName)

ン夹把σ
    
        ClassName *& referenceName = pointerName;

    ン夹把σ把计
        ㄧΑ : void function(ClassName *& referenceName)
        ㊣?瓃 : function(pointerName)

    ン夹把σ癹
        ㄧΑ : ClassName *& function(ClassName *& referenceName)
        ㊣痹瓃 : function(pointerName)

*/



// ン跑计把σ籔ン夹把σ

int main(int argc, char * argv[]){

    Circle c1;
    c1.radius = 10;

    // ン跑计把σ
    Circle & rc1 = c1;
    cout<<"rc1.area = "<<rc1.getArea()<<endl;

    // ン夹把σ
    Circle *pc1;
    pc1 = &c1;
    pc1 = new Circle();

    cout<<"======================"<<endl;


    // ン跑计把σ把计

    Circle c2, c3;
    c2.radius = 10;
    c3.radius = 10;

    cout<<c2.compare(c3)<<endl;
    cout<<c2.compare2(&c3)<<endl; // ノ夹穦Τ肚NULL繧
    cout<<c2.compare3(c3)<<endl; // ノ把σ碞ぃ穦Τ肚NULL繧


    cout<<"======================\n\n"<<endl;

    Circle c4;
    c1.radius = 20;
    // Circle &rc4 = c4.copy5(c2);
    c4.copy5(c2);
    cout<<"c1.compare3(c1.copy5(c2)) == "<<c1.compare3(c1.copy5(c2))<<endl;
     


    cout<<"======================\n\n"<<endl;

    Circle * pc5 = new Circle(); 
    Circle & rc5 = *pc5;
    Circle c5;

    c5.radius = 10;
    pc5->radius = 10;
    cout<<"rc5.radius == "<<rc5.radius<<endl;
    cout<<c5.compare3(*pc5)<<endl;


    cout<<"======================\n\n"<<endl;


    Circle *pc6 = new Circle();
    pc6->radius = 10;
    cout<<"pc6->radius == "<<pc6->radius<<endl;
    (*pc6).radius = 300;
    cout<<"(*pc6).radius == "<<(*pc6).radius<<endl; 




    cout<<"======================\n\n"<<endl;

    // ン夹把σ(砆ン夹)

    
    Circle * pc7 = new Circle();
    pc7->radius = 10;
    Circle c8;

    //  Circle & rc8 = *pc7;
    // Circle *& rc7 = new Circle();
    // Circle *&rc7 = &c8;
    Circle *& rc7 = pc7;
   
    rc7->radius = 100;

    cout<<"pc7->getArea() == "<<pc7->getArea()<<endl;



    cout<<"======================\n\n"<<endl;

    // ン夹把σ把计

    Circle c9;
    c9.radius = 10;
    Circle * pc9 = new Circle();
    pc9->radius = 20;
    cout<<"c9.compare4(c9) == "<<c9.compare4(pc9)<<endl;

    cout<<"======================\n\n"<<endl;


    // ン夹把σ癹
    Circle c10;
    Circle *pc10 = new Circle();
    c10.radius = 10;
    cout<<"c10.compare4(c10.copy6(pc10)) == "<<c10.compare4(c10.copy6(pc10))<<endl;

    return 0;
}


