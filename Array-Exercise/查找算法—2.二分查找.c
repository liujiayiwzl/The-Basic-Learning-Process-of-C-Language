/*
     题目：数组的二分查找
           二分查找要求：  1.数组中数据有序
                           2.每次排除一半查找范围

     在 7，24，66，78，91，131，167中查找数据
*/

#include<stdio.h>
int binarySearch(int arr[], int len, int num);
int main()
{
    // 1.定义数组
    int arr[] = { 7,24,66,78,91,131,167 };
    int len = sizeof(arr) / sizeof(int);

    // 2.定义找的数
    int num = 131;

    // 3.调用函数
    int index = binarySearch(arr, len, num);

    printf("%d", index);
    return 0;
}

//利用函数进行二分查找
int binarySearch(int arr[], int len, int num)
{
    // 1.确定查找范围
    int min = 0;
    int max = len - 1;
   

    // 2.二分查找
    while (min <= max)//循环不断二分
    {
        int mid = (min + max) / 2;//确定中间位置
        if (arr[mid] > num)
        {
            //查找数据在左边
            max = mid - 1;
        }
        else if (arr[mid] < num)
        {
            //查找数据在右边
            min = mid + 1;
        }
        else
        {
            //查找到了,返回索引
            return arr[mid];
        }
    }
    return -1;
}