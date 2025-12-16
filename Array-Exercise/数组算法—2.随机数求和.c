// 题目：生成10个1-100之间的随机数，存入数组，并求和

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	// 1.定义数组
	int arr[10] = { 0 };
	int len = sizeof(arr) / sizeof(int);

	// 2.生成随机数
	srand(time(NULL));
	int sum = 0;

	// 3.存入数组
	for (int i = 0; i < len; i++)
	{
		int num = rand() % 100 + 1;
		arr[i] = num;
		sum += arr[i];
	}
	printf("%d\n", sum);
	return 0;
}