/*
     练习：数组指针的细节
           arr参与运算的时候，会退化成第一个元素的指针，数组首地址

     特殊情况：
           sizeof 运算的时候，不会退化，arr是整体
           &arr获取地址的时候，不会退化，arr是整体
*/

#include<stdio.h>
int main()
{
    //1.定义数组
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int len = sizeof(arr) / sizeof(int);

    //2.sizeof运算的时候，不会退化，arr是整体
    printf("arr整体的字节：%zu\n", sizeof(arr));
    printf("arr+1的字节：%zu\n", sizeof(arr+1));
    printf("&arr+1的字节：%zu\n", sizeof(&arr+1));
    printf("&arr的字节：%zu\n", sizeof(&arr));

    //3.&arr获取地址的时候不会退化，记录是首地址，arr是整体  步长：数据类型 * 数组的长度
    //   arr参与计算记录的也是首地址                         步长：数据类型 int 4
    printf("数组首地址：%p\n", arr);
    printf("arr参与运算首地址＋1后，第二个元素的地址：%p\n", arr+1);  //指向第二个元素
    printf("&arr获取的是数组首地址：%p\n", &arr);
    printf("&arr+1后整个数组末尾的下一个地址：%p\n", &arr+1);


    return 0;
}