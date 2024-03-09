class Circle{
    

    private:
        double girth;
        double area;
        double volume;

    public:
        int radius;
        int height;
        Circle(): radius(0), height(0), girth(0), area(0), volume(0){};


        double getGirth();
        double getArea();
        double getVolume();
        int compare(Circle c);
        int compare2(Circle * pc);
        Circle * copy3();
        Circle *copy4(Circle * pc);

        Circle copy();
        void copy2(Circle * c);

    private:
};

double Circle::getGirth(){

    return radius * 2 * 3.14159 ;
    
}
double Circle::getArea(){

    return radius * radius * 3.14159 ;
    
}
double Circle::getVolume(){

    return Circle::getArea() * height ;
    
}









int Circle::compare(Circle c){
    if(this->radius > c.radius){
        return 1;
    }
    else if(this->radius < c.radius){
        return -1;
    }
    else{
        return 0;
    }
}

int Circle::compare2(Circle * pc){
    int i = 0;

    if(this->radius > pc->radius){
        i = 1;
    }
    else if(this->radius < pc->radius){
        i = -1;
    }

    pc->radius = 100;
    return i;
}




Circle Circle::copy(){
    Circle c;
    c.radius = this->radius;
    return c;
}

void Circle::copy2(Circle * c){
    c->radius = this->radius;
}

Circle * Circle::copy3(){

    Circle * pc = new Circle();
    pc->radius = this->radius;

    //!!! 原則盡量不回傳函式內宣告的動態記憶體，因為函式結束後，記憶體不會被釋放掉
    return pc;
}



Circle * Circle::copy4(Circle * pc){

    pc->radius = this->radius;
    return pc;
}
