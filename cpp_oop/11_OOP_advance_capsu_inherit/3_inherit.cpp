

#include<iostream>
#include<string>

#include "3_inherit.h"

using namespace std;





/*

�~��


    ����ɦV���Ψ��קK�{���X���Ƽ��g�P��C���@�x���ת�����C
    �l���O�i�H�~�Ӥ����O�����Ҧ������C
    �]�N�O���A��h�����O���|�Ψ쪺�����A�g�b�����O���A�l���O�u�n�~�Ӥ����O�A�����A�g�A�N�i�H�֦����s�����C
    �����קK�F�{���g�����Ƽ��g�A�]��֤F�����@���x���סC�]���Y���{���X�n�ק�A�u�ݭn�ק�@�����O�C


    ��ڭ̼g�@�ӷs���O�A���w�~�ӬY�@�өΦh�Ӥv�s�b�����O�ɡA�N�O�b�ϥΨ��@�өΦh�Ӥv�s�b�����O�C
    �s���O�٤����l�����O (Derived class) �Τl���O (Child class)�A
    �v�s�b�����O�٤�����¦���O (Base class) �Τ����O (Parent class)�C
    �l���O�~�Ӥ����O�����Ҧ������C���~�ӤF���N��i�H�s���A�l���O����s�������O���ŧi�� private �������A
    �u��s���ŧi�� protected �� public �������C


    ��A�O���O�}�o�̮ɡA�������l���O�P����s�����A�ŧi�� private�C
    ����������s���A�������l���O�s�����A�ŧi�� protected�C
    ��������s�����~�ŧi�� public�C


    �~�ӹB��Ÿ�
    �G 


    �~�ӬO���F�b�����O����¦���W�A���i�@�B���}�o�C
    �ҥH�~�Ӥ��O���I�A���I�O�~�ӫ᪺�l���O�i�H������H


    �l���O���i�H�G
        �s�W�l���O������
        �b�l���O���i�H�s�W�����O���S���ŧi�������C


    ���ä����O������
        �b�l���O���i�H�ŧi�������v�ŧi�L�������A�s�ŧi�������|�B�������O���ۦP�W�٪������C
        �Y�l���O���ŧi�P�����O���W�٬ۦP����Ʀ����A�l���O�����禡�s�����O�l���O������Ʀ����C
        �������O�����禡�s�����O�����O������Ʀ����C


    �Y�l���O���ŧi�P�����O�W�٬ۦP���ѼƦC���P���禡�A
    ���O Overloading�A�@�ˬO�B���F�����O�������禡�C




*/


/*

�غc�禡

    ����إ߮ɡA���ҷ|�b�t�m�O���餧��I�s���O���w�q���غc�禡�C
    ���O�}�o�̷|�b�غc�禡�����g�����l�ƪ��{���X�A
    �@��O���w��Ʀ�������ȡC�غc�禡���W�٥����P���O�W�٤@�ˡA�i�H���ѼƦC�A�����i�H����^���O�C
    �ѼƦC�i�H�ŧi�Ѽƹw�]�ȡC


    �w�]���غc�禡
        �إߪ���ɡA�Y�إߪ���?�z���S�����w�غc�禡�C
        ���ҹw�]�|�I�s�S���Ѽƪ��غc�禡�C�ҥH�S���Ѽƪ��غc�禡�N�O�w�]���غc�禡�C


        ���O���Y�S�����g�غc��k�A�sĶ���|�۰ʲ��ͨS���Ѽƪ��غc��k�C
        ���O�A�۰ʲ��ͪ��غc��k�ä��|�۰ʫ�����Ʀ�������ȡA�ҥH�غc�X�Ӫ�����O���w�����C
        �ӥB�A�Y���O�������g����غc��k�A�sĶ���N���|�۰ʲ��ͨS���Ѽƪ��غc��k�C


    Overloading �غc�禡
        ���O�����F�S���Ѽƪ��غc�禡�A�]�i�H���ݨD�AOverloading �h�ӫغc�禡�C

    this
        �C�@�Ӧ����禡�������@�����t������ this�Cthis�i�H���V�I�s���禡������A�ΨӨ��s���󦨭��C
        �D�n�γ~���G�G
            �b�M�~�s�����Ҥ��ֳt���n�s��������
            �ѨM�����ܼƻP�ѼƦW�٭��ƪ����D�C

    �l���O���غc�禡���w�I�s�����O���غc�禡
        �Y�����O�S���w�]���غc�禡�� Overloading �h�ӫغc�禡�A�l���O���غc�禡�i�H���w�I�s�C

*/





int main(int argc, char * argv[]){

    Circle c1;
    c1.setradius(10);
    cout <<"c1.Area = "<< c1.getArea() << endl;
    cout<<"c1.Girth = "<< c1.getGirth() << endl;

    Rectangle r1;
    cout<<"r1.Area = "<< r1.getArea() << endl;
    cout<<"r1.Girth = "<< r1.getGirth() << endl;

    return 0;
}