/*
      题目：键盘录入五个数据，存入数组
            1.遍历数组
            2.反转数组
            3.再次遍历
*/

#include<stdio.h>
void printfArr(int arr[], int len);
int main()
{
    // 1.定义数组
    int arr[5] = { 0 };
    int len = sizeof(arr) / sizeof(int);

    //2.键盘录入
    for (int i = 0; i < len; i++)
    {
        printf("请输入第%d个数据：\n", i + 1);
        scanf("%d", &arr[i]);
    }

    // 3.调用函数，遍历数组
    printf("原数组：");
    printfArr(arr, len);

    //4.反转数组
    int i = 0;
    int j = len - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    
    //5.遍历数组
    printf("反转后的数组：");
    printfArr(arr, len);

    return 0;
}

//使用函数，遍历数组
void printfArr(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
