

#include <iostream>
#include"9_1_circle.h"

using namespace std;







/*

1.����
    ��ת���
        �������Ҩ̷����O�����ŧi�A�Ұt�m���O����s�աC���i�H�x�s�@�s��ơA�ӸӸs��ƥi�H���㪺�y�z�@�ӯS�w���B����C
        �Ҧp�G�@�s�i�H����y�z�@�i�q�檺��ơB�@�s�i�H����y�z�ʶR�̪���ơB�@�s�i�H����y�z�@��ӫ~����ơB
        �@�s�i�H����y�z����ɶ�����ơB�@�s�i�H����y�z�H�Υd�I�ڪ����...�C

        �]�N�O���G�@�ӰO����s�աA�N��@�ӯS�w�B���쪺�����ơC�o�@�ӰO����s�աA�ڭ̴N�٤�������C

        �ҥH�N�{���y�������פW�]�i�H���G����@�s�O���骺���X�C

    ����֦�����
        ��Ʀ���(Data Members) => �x�s���(�ܼ�)�C
        �ܦh��󪺸ѻ����٤����ݩʩΪ��A�C�b Java ���٤������C

        �����禡 (Member Functions) => �B���ơC
        �ܦh��󪺸ѻ����٤����欰�ί�O�C�b Java ���٤�����k�C

    ������n�ϥΪ���ɦV
        �b����ɦV���e�O�禡�ɦV�C�H�۹B������ת����ɡA�U�y���]�v�@���䴩����ɦV�C
        ����ɦV�P�禡�ɦV���򥻮t���O�G�����x�s��ơA����B���ơC

        �H C / C++ �y�����ҡA�b�禡�ɦV�ɴ�(C �y���ɴ�)�A���M�i�H�ε��c(struct)�ŧi�@�ӷs���O�A
        ���X�@�s��ơC���O�A���@�s��ƥ����ä��㦳�B���O�A���u���Ѽ����禡�B��C
        �ҥH�A��ƻP�B���ƪ��禡�O�S�����Y���C

        ��F����ɦV�ɴ�(C++ �ɴ�)�A������O(class)�ӫŧi�s���O�C�̷����O���ŧi�إߪ�����A
        ���F�O�@�s��ƪ����X���~�A�����]�㦳�B�⪺��O�C
        �]�N�O���G��ƻP�B���ƪ��禡�O�ݩ�P�@�Ӫ��󪺦����C


    �ۦP���O������A�@�w�֦��ۦP������

        �ۦP�W�٪���Ʀ����A�������Ȥ����o�@�ˡC
        �ۦP�W�٪������禡�A�����B�⪺���G���@�w�@�ˡC


        �C�@�Ӫ���W�ߺ޲z�P�B��ۤv�����

        ���D�S���]�p�ݨD�C�򥻤W�A�C�Ӫ���B��ۤv����ơC

*/

int main(int argc, char * argv[]){

    Circle c1;
    c1.radius = 10;
    cout << "c1.radius = " << c1.radius << endl;

    Circle c2;
    c2.radius = 20;
    cout << "c2.getGirth() = " << c2.getGirth() << endl;

    return 0;   
}
  

