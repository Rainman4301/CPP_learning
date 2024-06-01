


#include <iostream>
using namespace std;



struct Circle{
    int radius;
    int height;
    double girth;
    double area;
    double volume;





    template <typename T>
    bool compare(T a, T b){
        return a > b;
    }

    bool operator>(const Circle & othe_c) const{
        return radius > othe_c.radius;
    }
};

void set_Area(struct Circle * c);
void set_Girth(struct Circle * c);









double get_girth(struct Circle c);
double get_girth(struct Circle c){
    return c.radius * 2 * 3.14159;
}

double get_area(struct Circle c);
double get_area(struct Circle c){
    return c.radius * c.radius * 3.14159;
}

double get_volume(struct Circle c);
double get_volume(struct Circle c){
    return c.area * c.height;
}



void set_radius(struct Circle * c, int radius);
void set_radius(struct Circle * c, int radius){

    if(radius >= 1 && radius <= 10000){
        c->radius = radius;
    }
    else{
        c->radius = 1;
    }

    set_Girth(c);
    set_Area(c);

    
}

void set_Height(struct Circle * c, int height);
void set_Height(struct Circle * c, int height){
    if(height >= 1 && height <= 10000){
        c->height = height;
    }
    else{
        c->height = 1;
    }
    if(c == NULL){
        return;
    }
}

void set_Girth(struct Circle * c);
void set_Girth(struct Circle * c){
    if(c == NULL){
        return;
    }
    c->girth = c->radius * 2 * 3.14159;
}

void set_Area(struct Circle * c);
void set_Area(struct Circle * c){
    if(c == NULL){
        return;
    }
    c->area = c->radius * c->radius * 3.14159;
}

void set_Volume(struct Circle * c);
void set_Volume(struct Circle * c){
    if(c == NULL){
        return;
    }
    c->volume = c->area * c->height;
}


void set_Allvalue(struct Circle * c, int radius, int height);
void set_Allvalue(struct Circle * c, int radius, int height){
    if(c == NULL){
        return;
    }
    set_radius(c, radius);
    set_Height(c, height);
}




/********************************************************************************************/



// ノ挡篶把σ把计
int compareCircle(struct Circle c1, struct Circle c2);
int compareCircle(struct Circle c1, struct Circle c2){
    if(c1.radius > c2.radius){
        return 1;
    }
    else if(c1.radius < c2.radius){
        return -1;
    }
    else{
        if(c1.height > c2.height){
            return 1;
        }
        else if(c1.height < c2.height){
            return -1;
        }
        else{
            return 0;
        }
    }
}



// 夹す砛琌NULLぃ続ノ糶猭
int compareCircle_pointer(struct Circle * c1, struct Circle *c2);
int compareCircle_pointer(struct Circle * c1, struct Circle *c2){

    if(c1->radius > c2->radius){
        return 1;
    }
    else if(c1->radius < c2->radius){
        return -1;
    }
    else{
        if(c1->height > c2->height){
            return 1;
        }
        else if(c1->height < c2->height){
            return -1;
        }
        else{
            return 0;
        }
    }
}


// ノ挡篶把σ把计
int compareCircle_reference(struct Circle & c1, struct Circle & c2);
int compareCircle_reference(struct Circle & c1, struct Circle & c2){
    if(c1.radius > c2.radius){
        return 1;
    }
    else if(c1.radius < c2.radius){
        return -1;
    }
    else{
        if(c1.height > c2.height){
            return 1;
        }
        else if(c1.height < c2.height){
            return -1;
        }
        else{
            return 0;
        }
    }
}

/*******************************************************************************/


// ノ挡篶癹籔皚

struct Circle copyCircle(struct Circle c1);
struct Circle copyCircle(struct Circle c1){
    struct Circle c2;
    set_Allvalue(&c2, c1.radius, c1.height);
    return c2;
}

void copyCircle_pointer(struct Circle * c1, struct Circle * c2);
void copyCircle_pointer(struct Circle * c1, struct Circle * c2){
    set_Allvalue(c2, c1->radius, c1->height);
}


struct Circle * copyCircle_pointer2(struct Circle * c1, struct Circle * c2);
struct Circle * copyCircle_pointer2(struct Circle * c1, struct Circle * c2){
    set_Allvalue(c2, c1->radius, c1->height);
    return c2;
}


struct Circle & copyCircle_reference(struct Circle & c1, struct Circle & c2);
struct Circle & copyCircle_reference(struct Circle & c1, struct Circle & c2){
    set_Allvalue( &c2, c1.radius, c1.height);
    return c2;
}


/********************************************************************************************/



void showinfo(struct Circle c);
void showinfo(struct Circle c){
    cout<<c.radius<<"\t"<<c.height<<"\t"<<c.girth<<"\t"<<c.area<<"\t"<<c.volume<<endl;
}




