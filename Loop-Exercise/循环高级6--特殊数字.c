/*
   找出一个范围内符合要求的数字
   要求：每一位加起来等于15
   例：15，78，96


   套路：1.外循环：获取范围内每一个数
         2.处理这个数字，每一位加起来之和等于十五
*/


#include <stdio.h>
int main()
{
    //输入自定义的范围
    int start;
    int end;
    int number;
    printf("请输入范围的起始值：");
    scanf("%d", &start);
    printf("请输入范围的结束值：");
    scanf("%d", &end);
    printf("请输入要求和的数字：");
    scanf("%d", &number);
    for (int i = start; i <= end; i++)//外循环获取范围
    {
        int sum = 0;
        int j = i;//用临时变量拆解数字，避免修改i
        while (j != 0)
        {
            int temp = j % 10;//拆开每个数
            j = j / 10;//去掉当前获取数字
            sum = sum + temp;
            break;
        }
       
        if (sum == number)
        {
            printf("%d\n",j);
        }
        
    }
    return 0;
}
