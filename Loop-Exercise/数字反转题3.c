/*
题目：输入一个整数，使他反转
*/

#include <stdio.h>
int main()
{
	int number;
	int rev=0;
	printf("请输入一个整数：\n");
	scanf("%d", &number);
	
	//处理负数//
	int sign=1;
	if (number < 0)
	{
		sign = -1;
		number = -number;
	}

	//反转
	while (number != 0)
	{
		int temp = number % 10;
		number = number / 10;
		rev = rev * 10 + temp;
	}

	//确定符号
		rev = rev * sign;
		printf("反转后的数字是：%d\n", rev);
	
	return 0;
}
