/*
     野指针：指针指向的空间未分配
     悬空指针：指针指向的空间已分配，但是被释放了
*/

#include<stdio.h>
int* method();

int main()
{
    int a = 10;
    int* p1 = &a;
    printf("%p\n", p1);
    printf("%d\n", *p1);

    // p2野指针
    int* p2 = p1 + 10;
    printf("%p\n", p2);
    printf("%d\n", *p2);
  

    //  悬空指针
    int* p3 = method();
    printf("111\n");
    printf("%p\n", p3);
    printf("%d\n", *p3);
}

//定义函数
int* method()
{
    int num = 10;
    int* p3 = &num;
    return p3;
}