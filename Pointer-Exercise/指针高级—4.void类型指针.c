/*
    void类型指针
*/

#include<stdio.h>
void swap(void* p1, void* p2, int len);
int main()
{
    //1.定义两个变量
    int a = 10;
    short b = 20;

    //2.定义两个指针
    int* p4 = &a;
    short* p5 = &b;

    //3.输出打印
    printf("%d\n", *p4);
    printf("%d\n", *p5);


    /*
       4.     
          不同类型指针不能相互赋值
          void类型可以打破这个
          void没有任何类型，好处是可以接受任意类型指针记录的内存地址
    */
    void* p6 = p4;
    void* p7 = p5;
    
    //缺点：void指针，无法获取变量里的数据，也不能进行加减运算
    //printf("%p\n",p3+1)  错误

    //5.调用函数交换数据
    long long c = 100L;
    long long d = 200L;

    swap(&c, &d, 8);//传入 c和d 的地址和长度

    printf("c=%lld,d=%lld\n", c, d);


    return 0;
}

/*
     函数：用来交换两个变量记录的数据
     修改函数更具有通用性
*/
void swap(void* p1, void* p2, int len)
{
    //把void类型，转成char类型指针
    char* pc1 = p1;
    char* pc2 = p2;

    char temp = 0;

    //以字节为单位，一个字节一个字节交换
    for (int i = 0; i < len; i++)
    {
        temp = *pc1;
        *pc1 = *pc2;
        *pc2 = temp;

        pc1++;
        pc2++;
    }
}


