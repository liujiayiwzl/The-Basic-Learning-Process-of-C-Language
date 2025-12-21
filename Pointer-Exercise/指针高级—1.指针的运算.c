/*
     指针运算：
            步长：指针移动一次，走了多少字节
            char：1
            short：2
            int：4
            long：4
            long long：8

            加法：指针往后移动N步
            减法：指针往前移动N步

*/

#include<stdio.h>
int main()
{
    int a = 10;
    int* p = &a;
    printf("%p\n", p);//内存地址
    printf("%p\n", p+1);
    printf("%p\n", p-1);

    return 0;
}