/*
     共用体的特点：
            1.共用体，也叫联合体，共同体    
            2.所有变量使用同一个内存空间
            3.每次只能给一个变量赋值，第二次会覆盖前一个
                 细节：怎么存的，怎么取
            4.所占内存大小=最大成员的长度（受内存对齐影响）
                   细节：以最大成员长度为准
                         总大小是最大单个成员的字节数倍数
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
    money1.moneydb = 1.25;
    strcpy(money2.moneyar, "一百万");


    //4.打印
    printf("%lf\n", money1.moneydb); //  3.每次只能给一个变量赋值，第二次会覆盖前一个
                                     //     细节：怎么存的，怎么取
    
    printf("%s\n", money2.moneyar);


    //5.获取内存地址
    printf("%p\n", &(money1.moneyar));
    printf("%p\n", &(money1.moneyint));
    printf("%p\n", &(money1.moneydb));

    printf("%zu\n", sizeof(money1.moneyar));//100字节
    printf("%zu\n", sizeof(money1.moneyint));//4字节
    printf("%zu\n", sizeof(money1.moneydb));//8字节
    printf("%zu\n", sizeof(money1));//104字节   （后面补四个字节） 以最大成员长度为准总大小是最大单个成员的字节数倍数
                                     /*
                                          最大单个长度是double的8个字节，因此受内存对齐影响
                                          总字节数要是8的倍数
                                     */


    return 0;
}