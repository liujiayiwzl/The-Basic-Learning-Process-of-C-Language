/*
      题目：数组的基本查找
      思路：从0索引开始向后索引
            找到了返回对应索引
            没找到返回-1
*/

#include<stdio.h>
int order(int arr[], int len, int num);
int main()
{
    // 1.定义数组
    int arr[] = { 11,22,33,44,55 };
    int len = sizeof(arr) / sizeof(int);

    // 2.定义查找值
    int num = 66;

    // 3.调用函数
    int index = order(arr, len, num);
    printf("%d",index);
    return 0;
}

//运用函数，遍历数组并查找
int order(int arr[], int len, int num)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}