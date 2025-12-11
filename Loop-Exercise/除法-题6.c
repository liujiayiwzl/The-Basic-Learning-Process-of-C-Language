/*
题目：不使用除法，取余，将两个数相除得到商和余
*/

#include <stdio.h>
int main()
{
	
	int dividend;//被除数
	printf("请输入被除数：\n");
	scanf("%d", &dividend);
	int divisor;//除数
	printf("请输入除数：\n");
	scanf("%d", &divisor);
	

	if (divisor == 0)
	{
		printf("除数不能为0！");
		return 0;
	}


	int shang=0;
	int yu=dividend;
	while (yu-divisor >= 0)
	{
		shang++;
		yu = yu - divisor;
	}
	printf("商为：%d，余数为：%d\n", shang, yu);
	return 0;
}
