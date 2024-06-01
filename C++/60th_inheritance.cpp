#include<iostream>


    // inheritance = A class can receive attributes and methods from another class
    //               Children classes inherit from a parent class
    //               Helps to reuse similar code found within multiple classes




//Abstract(Whicheve class inherit Abstract Class need to implement its virtual methods)
class AnimalAbstract{
    virtual void excrete()=0;
};
class multi_inheritance{
};
//這裡public如果不加的話 default為private
class Animal:public AnimalAbstract{

protected:
    std::string tail;

public:
    int age;
    std::string name;

    Animal(int age, std::string name){
        this->age = age;
        this->name = name;
    }

    bool alive = true;
    void eat(){
        std::cout << "This animal is eating\n";
    }
    // Implementation 實作
    void excrete(){
            std::cout << "Animal is excreting!! \n";
    }


    void rap(){
            std::cout << "Animal is rapping!! YO YO \n";
    }
};
// 多重繼曾
class Dog: public Animal,multi_inheritance{

public:
    int height;

    //會自動觸發上層Constructor
    Dog(int age, std::string name,int height)
        :Animal(age,name)
    {
        this->height = height;
    }

    void bark(){
            std::cout << "The dog goes woof!!\n";
    }

    //Polymorphism
    void rap(){
        std::cout << "Dog Dog is rapping!! YO YO \n";
    }
};
class Cat:public Animal{
public:
    int height;

    //會自動觸發上層Constructor
    Cat(int age, std::string name,int height)
        :Animal(age,name)
    {
        this->height = height;
    }
    
    void meow(){
        std::cout << "The cat goes meow!!\n";
    }


    //Polymorphism
    void rap(){
        std::cout << "Cat Cat is rapping!! YO YO \n";
    }
};






class Shape{
    public:
        double area;
        double volume;
};
class Cube: public Shape{
    public:
        double side;
        Cube(double side){
            this->side = side;
            this->area = side * side * 6;
            this->volume = side * side * side;
        }
};
class Sphere: public Shape{
    public:
        Sphere(double radius){
            this->radius = radius;
            this->area = 4 * 3.14159 * radius * radius;
            this->volume=(4/3.0)*(radius * radius * radius) * 3.14159;
        }
        double radius;
    
};

int main(){

    Dog dog(20,"Tom",5.6);
    Cat cat(60,"Bill",6.0);
    std::cout << dog.alive<<'\n';
    dog.eat();
    dog.bark();


    std::cout << cat.alive<<'\n';
    cat.eat();
    cat.meow();




//用多型會依照最近子CLASS       
    dog.rap();
    cat.rap();

//用父CLASS做指標就會依照多型的父CLASS(UNLESS  把父CLASS的method virtual)
    Animal *a1 = &dog;
    Animal *a2 = &cat;
    a1->rap();
    a2->rap();




    Cube cube(10);
    Sphere sphere(5);

    std::cout << "Area: " << cube.area << "cm\n";
    std::cout << "Volume: " << cube.volume << "cm\n";

    std::cout << "Area: " << sphere.area << "cm\n";
    std::cout << "Volume: " << sphere.volume << "cm\n";

    return 0;
}