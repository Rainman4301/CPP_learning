

void changevalue1(int &a);
void changevalue2(int *& b);
void changevalue3(int * c);
int getvalue(const int & d);


//  一般變數的參考
void changevalue1(int &a){

    a += 100;
}

// 指標的參考
void changevalue2(int *& b){

    *b += 100;

}

// 如果不想使用著傳遞已存在的變數, 可以使用指標參考
void changevalue3(int * c){

    *c += 100;
}

int getvalue(const int & d){
    
        return d*d;
}
