/*
      键盘录入一个字符串
         统计大写，小写，数字字符出现的次数
*/

#include<stdio.h>
#include<string.h>
int main()
{
    //1.键盘录入字符串
    printf("请输入您的字符串：\n");
    char str[100];
    scanf("%s", str);

    //2.统计次数

    int smallCount = 0;
    int bigCount = 0;
    int numberCount = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        char c = str[i];
        if (c >= 'a' && c <= 'z')
        {
            smallCount++;
        }
        else if(c>='A'&&c<='Z')
        {
            bigCount++;
        }
        else if (c >= '0' && c <= '9')
        {
            numberCount++;
        }
    }

    printf("小写出现次数：%d\n", smallCount);
    printf("大写出现次数：%d\n", bigCount);
    printf("数字出现次数：%d\n", numberCount);


    return 0;

}