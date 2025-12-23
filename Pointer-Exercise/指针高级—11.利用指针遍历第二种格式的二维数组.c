#include<stdio.h>
int main()
{
	//1.定义二维数组
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 11,22,33,44,55 };
	int arr3[] = { 111,222,333,444,555 };

	int* arr[3] = { arr1,arr2,arr3 };
	
	//2.获取指针
	/*
	      第一个 * 是代表一个 int* 类型的，存储 arr123 这个地址的指针变量
		  第二个 * 是 *p 代表这是一个指针型的变量，用来标注类型
	*/
	int** p = arr;

	//3.遍历数组
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", *(*p + j));
		}
		//换行
		printf("\n");
		//移动指针！！
		p++;
	}

	return 0;
}