

class Circle{
    public:

        Circle * next;
        int radius;
        int height;
        double girth;
        double area;
        double volume;
        Circle(): radius(0), height(0), girth(0), area(0), volume(0),next(NULL){};

        double getGirth();

    private:
};

double Circle::getGirth(){

    return radius * 2 * 3.14159 ;
    
}
