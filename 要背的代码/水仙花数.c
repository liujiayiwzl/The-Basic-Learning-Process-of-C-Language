//水仙花数是 3 位数，各位数字立方和等于自身

#include<stdio.h>
int main()
{
	//1.定义 个 十 百 位
	int ge;
	int shi;
	int bai;

	//2.遍历100到999
	for (int num = 100; num <= 999; num++)
	{
		ge = num % 10;       //num对10取余，求出个位数字
		shi = num / 10 % 10;//对10取整得到十位和百位，再取余得到十位
		bai = num / 10 / 10;//取两次整得到百位

		int sum = ge * ge * ge + shi * shi * shi + bai * bai * bai;

		if (sum == num)//判断相等
		{
			printf("%d是水仙花数\n", num);
		}
	}
	return 0;
}