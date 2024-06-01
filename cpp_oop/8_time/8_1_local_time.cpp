
#include<iostream>
#include<ctime>

using namespace std;




/*
C++ 延用 C 的標頭檔

取得現在時間
    time_t time (time_t* timer)
    取得一個 time_t 型別的值，代表現在的日期時間.

    time_t
    一個整數代表經過的秒數，從 1970 年 1 月 1 日 00:00 UTC 起算。
    
    char* ctime (const time_t * timer)
    轉換 time_t 型別的值，成為 C 型態的字串。
*/


int main(int argc, char * argv[]){



    time_t a = time(NULL);
    cout<<"time(NULL) = "<<a<<endl;

    char * b = ctime(&a);
    cout<<"ctime(&a) = "<<b<<endl;

    time_t c;
    time(&c);
    char * d = ctime(&c);




    time_t * e = new time_t;
    time(e);
    cout<<"time(e) = "<<*e<<endl;


    cout<<"time(new time_t) == "<< time(new time_t)<<endl;


    char * f = ctime(e);
    cout<<"f = "<<f<<endl;



      /***********************************************************************************************************/
    /*
    格式化日期時間
        struct tm
        一個包含日期與時間的結構，擁有 9 個型別為 int 的成員。
       
        struct tm * localtime (const time_t * timer)
        使用 timer 指標的值，來填滿一個 tm 結構中的所有值，它呈現出一個對應的區域時區的時間。
    */

    struct tm g = {0};
    g.tm_year = 2023 - 1900;
    g.tm_mon = 9 - 1;
    g.tm_mday = 9;
    cout<<g.tm_year + 1900<<"/"<<g.tm_mon + 1<<"/"<<g.tm_mday<<endl;

    




    time_t h = time(NULL);
    struct tm * ph = localtime(&h);
    cout<<ph->tm_year + 1900<<"/"<<ph->tm_mon + 1<<"/"<<ph->tm_mday<<endl;




    char *result = new char[30];
    strftime(result, 30, "Now is %Y/%m/%d  %H:%M:%S", ph);
    cout<<"Now is %Y/%m/%d  %H:%M:%S = "<<result<<endl;



    struct tm startDate = {0};
    //如果用指標就無法一次初始化全部成員，因為指標只能指向一個成員必須一個一個修改
    startDate.tm_year = 2023 - 1900;
    startDate.tm_mon = 1 - 1;
    startDate.tm_mday = 28;
    cout<<"The startDate is :"<<startDate.tm_year + 1900<<"/"<<startDate.tm_mon + 1<<"/"<<startDate.tm_mday<<endl;


    struct tm endDate = {0};
    //如果用指標就無法一次初始化全部成員，因為指標只能指向一個成員必須一個一個修改
    endDate.tm_year = startDate.tm_year;
    endDate.tm_mon = startDate.tm_mon;
    endDate.tm_mday = startDate.tm_mday+5;
    cout<<"The endDate is :"<<endDate.tm_year + 1900<<"/"<<endDate.tm_mon + 1<<"/"<<endDate.tm_mday<<endl;



    /***********************************************************************************************************/



    time_t endTime = mktime(&startDate);
    endTime += 24 * 60 * 60 * 10000; // (一天)86400秒 * 5天
    struct tm * endDate_1 = localtime(&endTime);
    cout<<"The endDate_1 is :"<<endDate_1->tm_year + 1900<<"/"<<endDate_1->tm_mon + 1<<"/"<<endDate_1->tm_mday<<endl;







    struct tm startDate_3 = {0};
    //如果用指標就無法一次初始化全部成員，因為指標只能指向一個成員必須一個一個修改
    startDate_3.tm_year = 2023 - 1900;
    startDate_3.tm_mon = 1 - 1;
    startDate_3.tm_mday = 28;
    time_t startTime_3 = mktime(&startDate_3);



    struct tm endDate_3 = {0};
    //如果用指標就無法一次初始化全部成員，因為指標只能指向一個成員必須一個一個修改
    endDate_3.tm_year = 2023 - 1900;
    endDate_3.tm_mon = 2 - 1;
    endDate_3.tm_mday = 2;
    time_t endTime_3 = mktime(&endDate_3);




    time_t diffTime = endTime_3 - startTime_3;
    int day = diffTime / (24 * 60 * 60);
    cout<<"The diffTime is :"<<day<<" day"<<endl;


    double diffTime_1 = difftime(endTime_3, startTime_3) / (24 * 60 * 60);
    cout<<"The diffTime is :"<<diffTime_1<<" day"<<endl;





    return 0;
}