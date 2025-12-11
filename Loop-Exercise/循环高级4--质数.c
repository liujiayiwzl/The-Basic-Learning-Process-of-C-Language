/*
     输入一个数，获取所有小于等于n质数的数量
     质数：只能被1和它本身整除
     抽丝剥茧法：复杂-->简单

     1：判断是否是质数
     2：添加范围
     3：统计
*/

#include <stdio.h>
int main()
{
    //输入自定义的范围
    int start;
    int end;
    printf("请输入统计质数的起始值：\n");
    scanf("%d", &start);
    printf("请输入统计质数的结束值：\n");
    scanf("%d", &end);

    //检验输入的范围是否合理，起始值>=2且起始值<=结束值
    if (start < 2)
    {
        printf("质数起始值不能小于二，已自动将起始值设置为2！\n");
        start = 2;
    }
    if (start > end)
    {
        printf("起始值不能大于结束值，程序退出！\n");
        return 1;
    }


    //定义一个变量，统计2-100有多少个质数
    int countA = 0;


    for (int i = start; i <= end; i++)
    {

        int count = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;//找到一个数字能被i整除
                break;//后面其他数字没有必要再次判断了
            }
        }


        if (count == 0)
        {
            countA++;
        }
    }
        printf("在%d和%d之间，一共有%d个质数\n",start,end,countA);
    return 0;
}
