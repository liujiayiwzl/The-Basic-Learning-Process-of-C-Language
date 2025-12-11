#include <stdio.h>
int main()
{
	int number;
	printf("请输入一个整数：");
	scanf("%d", &number);
	int i = 1;
	while (i * i <= number)
	{
		i++;
	}
	printf("该整数的平方根的整数为：%d", i - 1);
	return 0;
}
