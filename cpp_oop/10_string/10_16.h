

#include<string>
using namespace std;

int checkID(string id);


int checkID(string id){

    if(id.length() != 10){
        return 1;
    }
    if(id[0] < 'A' || id[0] > 'Z'){
        return 2;
    }
    if(id[1] != '1' && id[1] != '2'){
        return 3;
    }
    for(int i = 2; i < 10; i++){
        if(id[i] < '0' || id[i] > '9'){
            return 4;
        }
    }

    string word = "ABCDEFGHJKLMNPQRSTUVXYWZIO";


    int number = word.find(id[0]) + 10;
    id = to_string(number) + id.substr(1);

    int sum = 0;

    sum += id[0]-'0'*1;

    for (int i = 1; i <= 9; i++) {
    
        sum += id[i]-'0'* (10-i);

    }

    sum += id[10]-'0'*1;

    if(sum % 10 != 0){
        return;
    }
    else{
        return;
    }


    return 0;

}



