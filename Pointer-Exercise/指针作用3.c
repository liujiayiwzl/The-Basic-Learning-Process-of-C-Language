/*
     指针作用3：将函数结果和状态分开

     题目：定义一个函数，将两数相除，获取他们的余数
*/

#include<stdio.h>
int getRemainder(int a, int b, int* res);
int main()
{
    //1.定义变量
    int a = 10;
    int b = 3;
    int res = 0;//先定义一个变量用于存储余数位置

    //2.调用函数
    int flag = getRemainder(a, b, &res);

    //3.根据返回状态，输出打印
    if (flag == 1)
    {
        printf("%d除以%d的余数是：%d\n", a, b, res);
    }
    else
    {
        printf("除数为0，计算错误");
    }

    return 0;
}

/*
   利用函数返回状态
   返回1：计算成功
   返回0：计算失败
*/
int getRemainder(int a, int b, int* res)
{
    //判断除数是否为0
    if (b == 0)
    {
        return 0;  //除数为0，计算失败，返回0
    }

    //计算余数
    *res = a % b; //访问res的值，把余数的值赋值给res
    return 1;     //计算成功，返回1
}