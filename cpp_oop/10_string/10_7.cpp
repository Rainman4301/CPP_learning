
#include<iostream>
#include<cstdio>
#include<cstring>


using namespace std;

int main(int argc, char * argv[]){


    /*
    身份證字號
        接收輸入一個身份證字號，檢查是否符合下列規則：
        * 共十個字元
        * 第一個字元必須是大寫英文字母。
        * 第二個字元必須是 1 或 2。
        * 第三個字元至第十個字元必須是數字字元。
        * 第一個英文字元依照下方英文字母數字代號表格來取得數字代號。
        * 用數字代號取代原英文字母，得到一個 11 位數之數字。
        * 將 11 位數的數字拆開成 11 個數字，並分別乘以
        １，９，８，７，６，５，４，３，２，１，１。
        * 將上述步驟得到的相乘後的 11 個數字相加。
        * 若上述步驟得到的加總後的數字是 10 的倍數，即為正確的身份證字號
        若格式正確，輸出正確，否則輸出錯誤。



    英文字母數字代號表

        英文字母
        ＡＢＣＤＥＦＧＨＪＫ
        數字代號
        １０１１１２１３１４１５１６１７１８１９
        英文字母
        ＬＭＮＰＱＲＳＴＵＶ
        數字代號２０２１２２２３２４２５２６２７２８２９
        英文字母
        ＸＹＷＺＩＯ
        數字代號
        ３０３１３２３３３４３５


    */


    char * id = new char[11];
    scanf("%s", id);

    int result = 0;

    if(strlen(id) == 10){
        if(id[0] >= 'A' && id[0] <= 'Z'){
            if(id[1] == '1' || id[1] == '2'){
                for(int i = 2; i < strlen(id); i++){
                    if(id[i] >= '0' && id[i] <= '9'){
                        result = 1;
                    }
                    else{
                        break;
                    }
                }
            }
        }
    }



    if(result){
        char words[] = "ABCDEFGHJKLMNPQRSTUVXYWZIO";
        int index = 0;
        for(int i = 0; i < strlen(words); i++){
            if(id[0] == words[i]){
                index = i;
                break;
            }
        }
        index += 10;
        // printf("%d\n", index);


        char temp[3];
        sprintf(temp, "%d", index);
        // printf("%s\n", temp);

        char * new_id = new char[12];
        strcpy(new_id, temp);
        strcat(new_id, id + 1);
        printf("new_id:\t%s\n", new_id);


        int sum = 0;
        sum = (new_id[0] - 48) * 1;
        sum += (new_id[10] - 48) * 1;

        for (int i = 1; i <= 9; i++)
        {
            sum += (new_id[i] - 48) * (10 - i);
        }
        printf("sum:\t%d\n", sum);
        if(sum % 10 == 0){
            result = 1;
        }

    }

    
    if(result){
        printf("correct\n");        
    }
    else{
        printf("error\n");
    }

    return 0;
}