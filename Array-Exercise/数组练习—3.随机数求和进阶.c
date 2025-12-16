/*   
     题目：生成10个1 - 100之间的随机数，要求不重复，存入数组
     1.求和
	 2.求平均数
	 3.统计有多少数据比平均数小
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//检查随机数是否已存于数组
int isexist(int arr[], int len, int num)
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == num)
		{
			return 1;// 存在返回1
		}
	}
	return 0;// 不存在返回0
}

int main()
{
	// 1.定义数组
	int arr[10] = { 0 };
	int len = sizeof(arr) / sizeof(int);

	// 2.生成随机数
	srand(time(NULL));
	int sum = 0;

	// 3.存入数组，并求和
	int i = 0;
	
	while (i < len)
	{
		int num = rand() % 100 + 1;
		int flag = isexist(arr, len, num);//调用函数
		if (!flag)//判断是否重复
		{
			arr[i] = num;//赋值
			sum += arr[i];//求和
			i++;// 数组后移
		}
	}

	// 4.计算平均数
	double average;
	average = sum / len;

	// 5.统计比平均数小的个数
	int count = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] < average)
		{
			count++;
		}
	}
	printf("生成的数：");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n所有数的和：%d\n", sum);
	printf("平均数：%.2f\n", average);
	printf("比平均数小的个数：%d\n", count);
	return 0;
}
