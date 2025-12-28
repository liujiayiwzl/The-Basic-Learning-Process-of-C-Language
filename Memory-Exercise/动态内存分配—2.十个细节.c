/*
     1.malloc创建空间的单位是字节
     2.malloc返回void类型指针，没有步长，无法获取空间中的数据，需要强转
     3.malloc返回的仅仅是首地址，没有总大小，最好定义一个变量记录总大小
     4.malloc申请的空间不会消失，不能释放会导致内存泄漏
     5.malloc申请过多，会产生虚拟内存
     6.malloc需要先赋值再使用
     7.free释放完后，空间的数据叫做脏数据，可能被清空，可能被修改成其他值
     8.calloc就是比malloc多了个初始化过程
     9.realloc修改后，地址可能变，可能不变，但是数据不会丢失
     10.realloc修改后，无需释放原来空间，函数底层会进行处理
*/
#include<stdio.h>
#include<stdlib.h>
void method(int* p_xingcan, int size_xingcan);
int main()
{
    //1.malloc函数
    /*  
        1.malloc创建空间的单位是字节
        2.malloc返回void类型指针，没有步长，无法获取空间中的数据，需要强转
        3.malloc返回的仅仅是首地址，没有总大小，最好定义一个变量记录总大小
            (只知道函数返回的地址，不知道要返回多少个数据）
    */

    int size = 10;//用变量保存大小
    int* p1 = (int*)malloc(size * sizeof(int));/*
                                                    malloc前面加上（int* ）强转，可省略
                                                    用size就知道返回几个int的字节了
                                               */  


    //2.给动态内存赋值
    for (int i = 0; i < size; i++)//用size就知道要赋值的内存长度
    {
        *(p1 + i) = i + 1;
    }
   
    //利用函数method遍历
    printf("p1数据：");
    method(p1, size);//传递p1地址和长度


    //3.扩容只用改size
    size = 20;
    int* p2 = (int*)realloc(p1, size * sizeof(int));

    //遍历（并未赋值p2）
    printf("p2第一种遍历：并未赋值，原始for循环遍历：\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", p2[i]);
    }

    printf("\n");
    
    //给p2赋值
    for (int i = 10; i < size; i++)
    {
        *(p2 + i) = i + 1;
    }

    //第二种遍历（已赋值）
    printf("p2第二种遍历：使用定义的函数method遍历已赋值的p2\n");
    method(p2, size);




    //4.释放
    /*
        free(p1); 释放p1是错误的，根据10.realloc修改后，无需释放原来空间，函数底层会进行处理
                   可知，p1修改完已被释放，无需重复释放
    */
    free(p2);

}


//2.函数里面遍历
/*
      将空间地址和长度传递给函数
      在函数中，遍历空间
      不用函数，如果扩容，就像main中要重复写循环
      而使用函数，只用修改长度值，再调用函数即可
*/
void method(int* p_xingcan, int size_xingcan)
{
    //函数中遍历
    for (int i = 0; i < size_xingcan; i++)
    {
        printf("%d ", p_xingcan[i]);
    }
    printf("\n");
}