/*
题目：珠穆朗玛峰高度为8844430毫米
纸张厚度0.1毫米
问题：要折多少次纸能超过珠穆朗玛峰高度？

思路：利用循环折叠纸张，超过珠峰高度，循环结束
*/

#include <stdio.h>
int main()
{
	int height = 8844430;
	double paper = 0.1;
	int count = 0;

	while (paper <= height)
	{
		paper *= 2;
		count++;
	}
	printf("%d", count);
	return 0;
}
