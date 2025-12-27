///*
//     题目：将三个学生信息用结构体表示
//           将结构体存入数组并遍历
//*/
//
//
////1.定义结构体存入学生信息
//struct student
//{
//    char name[100];
//    int age;
//};
//
//
//#include<stdio.h>
//int main()
//{
//    //2.使用结构体，直接赋值学生
//    struct student p1 = { "wzl",18 };
//    struct student p2 = { "ljy",18 };
//
//    //3.定义数组存入结构体
//    /*
//        数组格式：数据类型 + 数组名
//        结构体数据类型就是定义的struct  ______
//    */
//
//    struct student stuarr[2] = {p1,p2};
//    
//
//    //遍历数组
//    for (int i = 0; i < 2; i++)
//    {
//        struct student temp = stuarr[i];//定义一个struct类型的变量接收数组的索引值
//        printf("学生的姓名：%s\n 学生的年龄：%d\n\n", temp.name, temp.age);//利用循环将数组中两个内容打印
//    }
//
//    return 0;
//}