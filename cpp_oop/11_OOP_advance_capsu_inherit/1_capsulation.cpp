

#include<iostream>
#include "1_capsulation.h"
using namespace std;



/*

�ʸ�
    ����ɦV���Ψӹ�@��T���ê�����A�T�O���󪺦w���C��@�k���G���ä��Q���~�ɸIĲ�������A�u���}�����~�ɦs���������C

    �@��Ө��A���O�}�o�̬��F���󪺦w���A�|���Ʀ����������ð_�ӡA�u���}�s���ιB���Ʀ������禡�����C�������ƪ��ק�A�����Ѩ禡�����x����Ȫ��ܤơA�קK���󲣥͹w���~���ȡC
    �����s��������H�s���׹����ŧi���q�������C�b�ŧi�Y�@�Ӧs���׹�������A�t�@�Ӧs���׹����X�{���e���@�Ӭq���C�Y���S���ŧi�A�w�]�� private �C
    �s���׹����G
        private
            �u���\�����O������L�����s���C

        protected
            ���\�����O���l���O�s���C

        public
            ���\�Ҧ����O�s���C(�νd�Ҹ����s��)
            �q�}�l�Ǫ���ɦV�_�A�@���V�P�Ǳj�խn���}�o�̻P�ϥΪ̪��[���C�s������A�O�}�o�̥Ψӭ���ϥΪ̪��s���v���C



        ��A�b�}�o�@�����O���ɭԡ]���]�����O�ϡ^�A�A�O���O�Ϫ��}�o�̡C�b���O�Ϥ��A���Ψ�]�s��)�t�@�����O���ɭԡ]���]�����O�С^�A�A�O���O�Ъ��ϥΪ̡C�]�N�O���A�b�g�{�����ɭԡA�A�j�����O���ݶ}�o�̻P�ϥΪ̪�����A�ҥH�e���V�c�C

        ���O�ϥΪ̨ϥ����O���覡���G�ءG����P�~�ӡC

        �ڭ̦b�}�o�����O���Ψ� string ���O���ɭԡA�ڭ̴N�O string ���O���ϥΪ̡C�ӧڭ̬O���ϥ� string ���O�O�H�ڭ̬O�ؤF string ������A�M��Ϊ����x�s��ơA�A�I�s�����禡�B���ơC�o�N�O�H����覡�ϥ����O�A�ҥH�u��s�� public �����C�]�N�O������u��s���O���ŧi�� public �������C

        �۹諸�A��A�O���O�}�o�̮ɡC�u���n������i�H�s���������A�~�ŧi�� public �C

        �����u�Q�ת���ɦV������`�Ρ]�q��)���s������C����ѻy���M���� friend �������Q�סC

*/










int main(int argc, char const *argv[])
{

    Circle c1;

    c1.setRadius(10);
    c1.setHeight(20);

    cout<<"Area: "<<c1.getArea()<<endl;
    cout<<"Girth: "<<c1.getGirth()<<endl;
    cout<<"Volume: "<<c1.getVolume()<<endl;

    return 0;
}