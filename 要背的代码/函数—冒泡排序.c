//请编写函数，对数组元素按升序排序。
//
//函数原型
//void ArraySort(long long* array, int size);
//说明：array 为数组的起始地址，size 为数组尺寸。函数对数组元素按由小到大的顺序排序。
//
//裁判程序
#include <stdio.h>

#define arraySize 1024

void LLSwap(long long* x, long long* y);
void ArrayInput(long long* array, int size);
void ArrayOutput(const long long* array, int size);
void ArraySort(long long* array, int size);

int main()
{
    long long a[arraySize];
    int n;
    scanf("%d", &n);
    if (n < 1 || n > arraySize)
    {
        puts("Error!");
        exit(1);
    }

    ArrayInput(a, n);
    ArraySort(a, n);
    ArrayOutput(a, n);
    putchar('\n');
    return 0;
}

void ArrayInput(long long* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%lld", &array[i]);
    }
}

void LLSwap(long long* x, long long* y)
{
    long long temp = *x;
    *x = *y;
    *y = temp;
}

void ArraySort(long long* array, int size)
{
    for (int j = 0; j < size - 1; j++)
    {
        for (int i = 0; i < size - j - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                LLSwap(&array[i], &array[i + 1]);
            }
        }
    }
}

void ArrayOutput(const long long* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%lld ", array[i]);
    }
}

//说明：ArrayInput 函数输入数组元素，ArrayOutput 函数输出数组元素，LLSwap 函数交换两个长整数的值。
//
//输入样例
//10
//36 90 18 27 86 75 24 54 48 62
//
//输出样例
//18 24 27 36 48 54 62 75 86 90