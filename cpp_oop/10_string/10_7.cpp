
#include<iostream>
#include<cstdio>
#include<cstring>


using namespace std;

int main(int argc, char * argv[]){


    /*
    �����Ҧr��
        ������J�@�Ө����Ҧr���A�ˬd�O�_�ŦX�U�C�W�h�G
        * �@�̭Ӧr��
        * �Ĥ@�Ӧr�������O�j�g�^��r���C
        * �ĤG�Ӧr�������O 1 �� 2�C
        * �ĤT�Ӧr���ܲĢ̭Ӧr�������O�Ʀr�r���C
        * �Ĥ@�ӭ^��r���̷ӤU��^��r���Ʀr�N�����Ө��o�Ʀr�N���C
        * �μƦr�N�����N��^��r���A�o��@�� 11 ��Ƥ��Ʀr�C
        * �N 11 ��ƪ��Ʀr��}�� 11 �ӼƦr�A�ä��O���H
        ���A���A���A���A���A���A���A���A���A���A���C
        * �N�W�z�B�J�o�쪺�ۭ��᪺ 11 �ӼƦr�ۥ[�C
        * �Y�W�z�B�J�o�쪺�[�`�᪺�Ʀr�O 10 �����ơA�Y�����T�������Ҧr��
        �Y�榡���T�A��X���T�A�_�h��X���~�C



    �^��r���Ʀr�N����

        �^��r��
        �ϢТѢҢӢԢբ֢آ�
        �Ʀr�N��
        ����������������������������������������
        �^��r��
        �ڢۢܢޢߢ�����
        �Ʀr�N������������������������������������������
        �^��r��
        �����ע�
        �Ʀr�N��
        ������������������������


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