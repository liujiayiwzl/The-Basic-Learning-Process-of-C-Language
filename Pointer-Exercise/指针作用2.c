/*
     指针作用2：函数返回多个值

     题目：定义一个函数，求数组最大值和最小值，并进行返回
*/


#include<stdio.h>

//函数中求最大值和最小值
void getMaxandMin(int arr[], int len, int* max, int* min)
{
    *max = arr[0];//利用*max存储arr[0]的值
    for (int i = 1; i < len; i++)//遍历数组，求最大值
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
    }

    *min = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
    }
}

int main()
{
    //1.定义数组
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int len = sizeof(arr) / sizeof(int);

    //2.调用函数
    int max = arr[0];
    int min = arr[0];

    getMaxandMin(arr, len, &max, &min);//把变量和 内存地址 传入给函数

    //3.打印
    printf("数组的最大值为：%d\n", max);
    printf("数组的最小值为：%d\n", min);

    return 0;
}