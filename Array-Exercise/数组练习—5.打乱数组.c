/*
        题目：定义一个数组，存入五个数，打乱所有顺序
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    // 1.定义数组
    int arr[5] = { 1,2,3,4,5 };
    int len = sizeof(arr) / sizeof(int);

    // 2.设置随机数，并且随机交换元素
    srand(time(NULL));
    for (int i = 0; i < len; i++)
    {
        int index = rand() % len;//生成0~（len-1）的随机索引
        int temp = arr[i];// 交换 arr[i] 和 arr[index]
        arr[i] = arr[index];
        arr[index] = temp;
    }

    // 3.遍历打乱后的数组
    printf("打乱后的数组：");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}