/*
         已知正确的账户和密码，模拟用户登录
            给三次机会，给出相应提示
*/

#include<stdio.h>
#include<string.h>
int main()
{
    //1.定义正确的账号密码
    char* rightUsername = "wzl";
    char* rightPassword = "ljy";

    //2.键盘录入两个字符串，表示输入的账号密码
    //3.利用循环模拟登录次数
    for (int i = 1; i <= 3; i++)//登陆三次
    {
        printf("请输入您的账号：\n");
        char username[100];
        scanf("%s", username);
        printf("请输入您的密码：\n");
        char password[100];
        scanf("%s", password);
        printf("%s\n", username);
        printf("%s\n", password);

        //比较字符串strcmp
        if (!strcmp(username, rightUsername) && !strcmp(password, rightPassword))
        {
            printf("登陆成功\n");
            break;
        }
        else
        {
            if (i == 3)
            {
                printf("错误已达三次，账户锁定！\n");
            }
            else
            {
                printf("登陆失败，还剩下%d次机会\n", 3 - i);
            }
        }
    }




    return 0;

}