/*
题目：键盘录入两个数字
      在这两个数字的范围中
      既能被6整除又能被8整除的数有多少个
*/
#include <stdio.h>
int main()
{
    int num1;
    int num2;
    printf("请输入两个整数：\n");
    scanf("%d %d", &num1, &num2);
    
    if (num1 > num2)
    {
        int num3 = num1;
        num1 = num2;
        num2 = num3;
    }

    int count = 0;

    for(int i = num1;i <= num2;i++)
    { 
        if (i % 6 == 0 && i % 8 == 0)
            count++;
    }
    printf("在这两个数字的范围中,既能被6整除又能被8整除的数有%d个\n", count);
    return 0;
}
