/*
    二维数组的定义格式二+索引遍历

        核心：事先把所有的一维数组定义完毕，再放到二维数组中
*/

#include<stdio.h>
int main()
{
    //1.定义三个一维数组
    int arr1[3] = { 1,2,3 };
    int arr2[5] = { 1,2,3 ,4,5};
    int arr3[7] = { 1,2,3,4,5,6,7 };

    //2.计算每个数组的长度
    int len1 = sizeof(arr1) / sizeof(int);
    int len2 = sizeof(arr2) / sizeof(int);
    int len3 = sizeof(arr3) / sizeof(int);
    
    int arrlen[3] = { len1,len2,len3 };

    //3.把一维数组放到二维数组中
    int* arr[3] = { arr1,arr2,arr3 };//存储的是内存地址

    //4.利用索引遍历数组
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < arrlen[i]; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}