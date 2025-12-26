/*
     题目：定义一个结构体表示学生
     要求：姓名，年龄
           定义一个函数，修改学生的值
*/

//1.定义结构体
typedef struct
{
    char name[100];
    int age;
}S;

#include<stdio.h>
#include<string.h>
S method1(S xingcan_stu);
void method2(S* p_stu2);
int main()
{
    //2.定义学生初始信息
    S stu1;
    strcpy(stu1.name, "aaa");
    stu1.age = 0;
    printf("学生1初始信息：姓名：%s,年龄：%d\n", stu1.name, stu1.age);

    S stu2;
    strcpy(stu2.name, "bbb");
    stu2.age = 0;
    printf("学生2初始信息：姓名：%s,年龄：%d\n\n\n", stu2.name, stu2.age);



    /*  第一种方式：返回值  */
    //3.将初始信息传递函数,函数再返回值
    printf("第一种修改方式：返回修改的结构体1\n\n");
    stu1 = method1(stu1);    /*
                                 括号中 stu1 是把原参数传递给函数 S method1（S xingcan_stu1)
                                 左边 stu1 是调用函数，接收函数中返回的修改后的结构体stu1,然后把新值赋给stu1
                             */




    /*  第二种方式：指针  */
    //5.通过传递内存地址，函数中修改内存地址
    printf("第二种修改方式：返回修改整个地址中数据的值\n\n");
    method2(&stu2);//括号中：传递stu2的地址到函数 method2 中
                   //method2 调用完之后，将 stu2 地址中的数据直接修改，再返回整个函数







    return 0;
}





//4.第一种方式：定义函数接收初始值，返回修改值
/*
     函数定义方式：
                   返回值类型 函数名（传递过来的数据类型  自定义形参）
                       S      method1(S  xingcan_stu)
            这里的返回值类型 S 是结构体，传递的数据类型 S 也是结构体
            因此形参也当作结构体进行修改内容
*/

S method1(S xingcan_stu1)//main中 使用 method1(stu1) 传递的原参数拷贝给这里的形参 xingcan_stu1
{
    //在函数中修改原函数传递的值，使用xingcan_stu1修改
    //修改完形参stu1，通过 return xingcan_stu1 返回形参修改的值给main函数中那个 method1(stu1)，把新的值赋值回去

    printf("接收到学生1的初始值：姓名：%s,年龄：%d\n", xingcan_stu1.name, xingcan_stu1.age);
    
    //形参也当作结构体进行修改内容
    //将新数据输入scanf中就是直接修改了形参值
    printf("请输入要修改的学生姓名：");
    scanf("%s", xingcan_stu1.name);    
    printf("请输入要修改的学生年龄：");
    scanf("%d", &(xingcan_stu1.age));
    
    printf("在第一种方式修改后学生1的数据： 姓名：%s,年龄：%d\n\n\n", xingcan_stu1.name, xingcan_stu1.age);
    
    //返回修改后的结构体 xingcan_stu1
    return xingcan_stu1;

}






//6.第二种方式：传递指针，修改内存地址
/*
     函数定义方式：
                   返回值类型 函数名（传递过来的数据类型  自定义形参）
                     void     method2 （S*            p  ）  
            这里的返回值类型是 void 表示不用接收返回值，main中直接调用 method2(S* p)
            传递的数据类型是 结构体指针类型，是一个内存地址，指向 S 结构体的
            形参 p 存储传递过来的 stu2 的内存地址
*/

void method2(S* p_stu2)
{
    //使用地址 p_stu2 时需要解引用成原实际数据结构体 stu2
    printf("接收到学生2的初始值：姓名：%s,年龄：%d\n", (*p_stu2).name, (*p_stu2).age);

    printf("请输入要修改的学生姓名：");
    scanf("%s", (*p_stu2).name);//解引用后相当于 stu2.name
                                //字符数组不需要加 & 直接指到首地址
    printf("请输入要修改的学生年龄：");
    scanf("%d", &((*p_stu2).age));//1.(*p_stu2).age解引用成 stu2.age
                                  //2.由于age是整型，要在获取的整个结构体 （stu2.age）前加取址符 &


    printf("在第二种方式修改后学生2的数据： 姓名：%s,年龄：%d\n\n", (*p_stu2).name, (*p_stu2).age);



}

