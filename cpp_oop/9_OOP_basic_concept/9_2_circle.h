

class Circle{
    public:
        int radius;
        int height;
        double girth;
        double area;
        double volume;
        Circle(): radius(0), height(0), girth(0), area(0), volume(0){};


        double getGirth();
        int compare(Circle c);

        Circle copy();

    private:
};

double Circle::getGirth(){

    return radius * 2 * 3.14159 ;
    
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

Circle Circle::copy(){
    Circle c;
    c.radius = this->radius;
    return c;
}
