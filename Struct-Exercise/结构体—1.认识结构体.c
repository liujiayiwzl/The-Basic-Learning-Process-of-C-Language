/*
      结构体：自定义的数据类型
      有很多数据组成的整体
      每一个数据都是结构体成员

      书写的位置：
              函数里面：局部位置，函数内用
              函数外面：全局位置，都可以用
*/

#include<stdio.h>
#include<string.h>


//定义女朋友结构体：包含姓名，年龄，性别，身高
struct girlfriend
{
    char name[100];//字符数组存储字符串
    int age;
    char gender[10];
    double height;
};    //末尾分号不能忘

int main()
{
    //使用结构体 1 ：直接赋值
    struct girlfriend gf1 = { "wzl",18,"female" ,158.0};

    //使用结构体 2 ：逐个赋值
    /*
            结构体中的数据赋值：
                        得用 [.] 操作符
                        例 : gf1.age=18   (仅限整型变量）
                        字符串类型 得用strcpy（ name ，“aaa”）赋值
    */


    struct girlfriend gf2;
    strcpy(gf2.name, "xly");//字符串修改是赋值，得用strcpy函数
    gf2.age = 17;
    strcpy(gf2.gender,"f");
    gf2.height = 167.5;

    //3.访问并打印结构体
    printf("女朋友1：\n");
    printf("姓名：%s\n 年龄：%d\n 性别：%s\n 身高：%f\n\n", gf1.name, gf1.age, gf1.gender, gf1.height);

    printf("女朋友2：\n");
    printf("姓名：%s\n 年龄：%d\n 性别：%s\n 身高：%f\n", gf2.name, gf2.age, gf2.gender, gf2.height);



    return 0;
}