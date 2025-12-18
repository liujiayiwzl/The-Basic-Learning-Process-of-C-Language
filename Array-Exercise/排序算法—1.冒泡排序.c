/*
     题目：冒泡排序：
                   1.相邻元素两两比较，大的放右边，小的放左边
                   2.第一轮比较完第二轮少循环一次，以此类推
                   3.n个数据，执行 n-1 轮的代码

     对3，1，2，5，4从小到大排序
*/

#include<stdio.h>
int main()
{
    // 1.定义数组
    int arr[] = { 3,1,2,5,4 };
    int len = sizeof(arr) / sizeof(int);

    // 2.冒泡排序进行升序排列
    //第一轮：

    for (int j = 0; j < len - 1; j++)
    {
        for (int i = 0; i < len - 1-j; i++)//i：表示每一个索引，防止索引越界
        {
            //相邻元素两两比较
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    //3.遍历数组
    for (int  j= 0; j < len; j++)
    {
        printf("%d", arr[j]);
    }
      
    return 0;
}