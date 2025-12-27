/*
     题目：
         在金融中，钱有很多种类型，整数小数字符串，请定义对应的共同体


      共同体：一种数据可能有多种类型
      定义格式：   
               union + 名字
               {
                   int __;
               };
*/
#include<stdio.h>
#include<string.h>
//1.定义共同体  typedef是起别名
typedef union Moneytype
{
    int moneyint;
    double moneydb;
    char moneyar[100];
}MT;

int main()
{
    //2.利用共同体定义变量
    union Moneytype money1;
    MT money2;

    //3.赋值
    //共同体每次只能赋值其中的一个类型
    money1.moneyint = 100;

    strcpy(money2.moneyar, "一百万");


    //4.打印
    printf("%d\n", money1.moneyint);
    printf("%s\n", money2.moneyar);

    return 0;
}
