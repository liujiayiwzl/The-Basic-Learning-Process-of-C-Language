/*
题目：判断一个整数是否是回文数
回文数：正着读反着读是一样的
*/


#include <stdio.h>
int main()
{
	int number;
	int rev = 0;
	printf("请输入一个整数：\n");
	scanf("%d", &number);
             //这里要保存原数，因为下面循环会让number变成0
	int original = number;
    
	if (number < 0)
	{
		printf("该数不是回文数\n");
		return 0;
	}
	

	while (number != 0)
	{
		int temp = number % 10;
		number = number / 10;
		rev = rev * 10 + temp;
	}

	if (original == rev)
	{
		printf("该数是回文数");
		
	}
	else
	{
		printf("该数不是回文数");
	}

	return 0;
}
