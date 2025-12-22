/*
    练习：利用指针遍历数组
*/

#include <stdio.h>

int main() 
{
    // 1.定义数组
    int arr[] = { 10,20,30,40,50 };
    int len = sizeof(arr) / sizeof(int);

    //2.获取数组的指针
    int* p1 = arr;
    int* p2 = &arr[0];

    //3.利用循环和指针遍历数组
    for (int i = 0; i < len; i++)
    {
        printf("%d\n", *p1++);//指针先取值，再自增一个int，到下一个值
    }
   

    return 0;
}
