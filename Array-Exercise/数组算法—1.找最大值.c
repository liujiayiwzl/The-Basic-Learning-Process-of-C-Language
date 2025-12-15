#include<stdio.h>
int main()
{
	int arr[] = { 520,1314,617,666,91 };// 1.定义数组
	int max = arr[0];//2.定义变量max，记录最大值
	int len = sizeof(arr) / sizeof(arr[0]);// 3.计算长度
	for (int i = 1; i < len; i++)// 4.遍历arr找到最大值
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	return 0;
}