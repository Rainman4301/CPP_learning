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
        int compare3(Circle & rpc);
        int compare4(Circle *& pc);
        Circle * copy3();
        Circle * copy4(Circle * pc);
        Circle copy();
        void copy2(Circle * c);
        Circle & copy5(Circle & c);
        Circle *& copy6(Circle *& rpc);

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

    return i;
}

int Circle::compare4(Circle *& rpc){
    int i = 0;

    if(this->radius > rpc->radius){
        i = 1;
    }
    else if(this->radius < rpc->radius){
        i = -1;
    }

    return i;
}



int Circle::compare3(Circle & pc){
    int i = 0;

    if(this->radius > pc.radius){
        i = 1;
    }
    else if(this->radius < pc.radius){
        i = -1;
    }

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

    //!!! ��h�ɶq���^�Ǩ禡���ŧi���ʺA�O����A�]���禡������A�O���餣�|�Q����
    return pc;
}



Circle * Circle::copy4(Circle * pc){

    pc->radius = this->radius;
    return pc;
}


// �^�ǰѦ��ܼ�/���󪺥ت����O���F�ŧi�s������h����
// �ӬO���F���I�s�ݥi�H�����ϥγo�Ӫ���

Circle & Circle::copy5(Circle & c){

    //�o�˼g�|�X���A�]��c�O�ϰ��ܼơA�禡������|�Q����
    //�ҥH�p�G�n�^�ǰѦҪ���n�^�Ǥw�s�b������
    // Circle c;

    c.radius = this->radius;
    return c;
}


Circle *& Circle::copy6(Circle *& rpc){

    rpc->radius = this->radius;
    return rpc;
}





