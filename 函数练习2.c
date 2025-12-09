#include<stdio.h>
int sum(int q1, int q2, int q3)
{
	int sum = q1 + q2 + q3;
	return sum;
}

int main()
{
	int sum1 = sum(10, 20, 15);
	int sum2 = sum(20, 30, 17);
	int sum3 = sum(19, 17, 20);
	int sum4 = sum(23, 21, 19);

	if (sum2 > sum1 && sum2 > sum3 && sum2 > sum4)
	{
		printf("最高二季度：%d\n", sum2);
	}
	else if (sum4 > sum1 && sum4 > sum3)
	{
		printf("四季度：%d\n", sum4);
	}
	else if (sum3 > sum1)
	{
		printf("三季度:%d\n", sum3);
	}
	else
	{
		printf("一季度:%d\n", sum1);
	}
	return 0;
}