

void changevalue1(int &a);
void changevalue2(int *& b);
void changevalue3(int * c);
int getvalue(const int & d);


//  �@���ܼƪ��Ѧ�
void changevalue1(int &a){

    a += 100;
}

// ���Ъ��Ѧ�
void changevalue2(int *& b){

    *b += 100;

}

// �p�G���Q�ϥε۶ǻ��w�s�b���ܼ�, �i�H�ϥΫ��аѦ�
void changevalue3(int * c){

    *c += 100;
}

int getvalue(const int & d){
    
        return d*d;
}
