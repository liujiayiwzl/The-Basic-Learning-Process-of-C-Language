/*
      题目：1.定义一个结构体表示学生信息
              名字，性别，年龄，身高，联系方式
            
            2.联系方式也是一个结构体
                手机号，邮箱
*/

#include<stdio.h>
#include<string.h>

//1.定义联系方式结构体
struct Message
{
    char phone[15];
    char email[20];
};

//2.定义学生信息，内含联系方式结构体
struct student
{
    char name[10];
    char gender;
    int age;
    double height;
    struct Message msg;//方式：结构体+定义名
};

int main()
{
    //3.定义学生变量
    struct student stu1;

    //4.逐个赋值
    strcpy(stu1.name, "wzl");
    stu1.gender = 'f';
    stu1.age = 18;
    stu1.height = 159.5;
    strcpy(stu1.msg.phone, "12345678");//嵌套结构体赋值方式：大结构体变量名.小结构体变量名.小结构体内部变量名
    strcpy(stu1.msg.email, "12345678@qq.com");

    //5.打印
    printf("学生1的信息为：\n");
    printf("姓名：%s\n", stu1.name);
    printf("年龄：%d\n", stu1.age);
    printf("性别：%c\n", stu1.gender);
    printf("身高：%f\n", stu1.height);

    printf("手机号：%s\n", stu1.msg.phone);
    printf("邮箱：%s\n\n", stu1.msg.email);


    printf("————————————————\n\n");


    //6.第二种初始化
    struct student stu2 = { "ljy",'m',18,185,{"87654321","222@qq.com"} };//内部嵌套赋值时需要再加一个大括号{}

    //7.打印
    printf("学生2的信息为：\n");
    printf("姓名：%s\n", stu2.name);
    printf("年龄：%d\n", stu2.age);
    printf("性别：%c\n", stu2.gender);
    printf("身高：%f\n", stu2.height);

    printf("手机号：%s\n", stu2.msg.phone);
    printf("邮箱：%s\n\n", stu2.msg.email);





    return 0;
}