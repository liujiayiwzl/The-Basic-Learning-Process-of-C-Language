/*
   1的1次方 + 2的2次方 + ...+10的10次方，结果是多少
   提示：用longlong
*/

#include <stdio.h>
int main()
{
	long long res = 0;
	for (int i = 1; i <= 10; i++)
	{
		long long pow = 1;
		for (int j = 1; j <= i; j++)
		{
			pow = pow * i;
		}
		res = res + pow;
	}
	printf("结果是：%lld\n", res);
	return 0;
}

