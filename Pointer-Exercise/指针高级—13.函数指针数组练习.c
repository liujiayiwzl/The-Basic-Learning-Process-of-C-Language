/*
      定义加减乘除四个函数
      用户键盘录入三个数字
      前两个表示参与运算的数字
      第三个表示调用的函数
      1：加法
      2：减法
      3：乘法
      4：除法


      细节：只有形参完全相同，且返回值类型一样的函数，才能放到同一个函数指针数组当中
*/

#include<stdio.h>
int add(int num1, int num2);
int substract(int num1, int num2);
int mutiply(int num1, int num2);
int divide(int num1, int num2);
int main()
{
    //2.在主函数中，定义一个数组装四个函数指针
    /*
            arr[4]：    优先级最高，arr是一个包含4个元素的数组
          (*arr[4])：    说明数组每个元素是指针
       （*p[4]）(int,int)：说明这个指针是函数指针，指向接受两个int参数的函数
               int：     说明函数返回值是int
    */
    int(*arr[4])(int, int) = { add,substract,mutiply,divide };

    //3.键盘录入三个数据
    int num1, num2;
    printf("请输入两个数字参与计算：");
    scanf("%d %d", &num1, &num2);      //第一次出现，存储 num1，2

    int choose;
    printf("请输入一个数字表示要进行的计算：\n");
    printf("1：加法\n");
    printf("2：减法\n");
    printf("3：乘法\n");
    printf("4：除法\n\n");
    
    scanf("%d", &choose);
    if (choose < 1 || choose>4)
    {
        printf("请输入1-4之间有效数字！\n");
        return 1;
    }
        

    //4.根据用户选择，调用不同函数
    int res = (arr[choose - 1])(num1, num2);  // 第二次出现：传递num1，num2的值 到调用的一个函数中

    //5.输出打印
    printf("得到结果：%d\n", res);

    return 0;
}

//1.先把四则运算写出来
                              //第三次出现：函数接收传递的 num1，num2 在函数中计算完返回给调用处赋值
int add(int num1, int num2)
{
    return num1 + num2;
}

int substract(int num1, int num2)
{
    return num1 - num2;
}

int mutiply(int num1, int num2)
{
    return num1 * num2;
}

int divide(int num1, int num2)
{
    //除0保护
    if (num2 == 0)
    {
        printf("除数不能为0！\n");
        return 0;
    }
    return num1 / num2;
}