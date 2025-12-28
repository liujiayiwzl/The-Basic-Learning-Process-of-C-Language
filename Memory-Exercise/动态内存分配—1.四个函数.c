#include <stdio.h>
#include <stdlib.h>  // 动态内存函数的头文件

int main() {
    /*
    动态内存分配核心函数说明：
               malloc  - 申请连续的内存空间，不初始化数据
               calloc  - 申请内存空间 + 自动将数据初始化为0
               realloc - 修改已分配的内存空间大小
               free    - 释放动态申请的内存，避免内存泄漏
    注：所有动态内存函数都需要包含 stdlib.h 头文件
    */

    // 1. 利用malloc函数申请一片连续空间
    // 需求：存储10个int类型的整数，计算所需字节数：10 * sizeof(int)
    // malloc返回void*，需强制转换为int*类型,返回首地址
    int* p = malloc(10 * sizeof(int));

    printf("malloc申请的内存首地址：%p\n", p);



    // 2. 给动态内存赋值（两种方式等价）
    for (int i = 0; i < 10; i++) 
    {
        // 方式1：指针偏移法 *(p + i)
        *(p + i) = (i + 1) * 10;  // 赋值：10 20 30 ... 100

        // 方式2：数组下标法 p[i]（本质是*(p + i)的语法糖）
        //p[i] = (i + 1) * 10;
    }


    // 3. 遍历动态内存中的数据
    printf("遍历动态数组的内容：");
    for (int i = 0; i < 10; i++) 
    {
        printf("%d ", *(p + i));  // 两种遍历方式：*(p+i) 或 p[i]
    }
    printf("\n");



    // 4. 演示realloc修改内存大小（扩展为20个int）
    int* p2 = realloc(p, 20 * sizeof(int));
   
    p = p2;  // 扩容成功，更新指针指向新内存
    
    printf("扩容后遍历20个元素：");
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", p[i]);   // 两种遍历方式：*(p+i) 或 p[i]
    }
    printf("\n");



    // 5. 演示calloc函数（申请+初始化）
    int* q = calloc(5, sizeof(int));  // 5个int，初始化为0
   
    printf("calloc初始化的5个元素：");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", q[i]);  // 输出全为0
    }
    printf("\n");



    // 6. 释放动态内存（必须做！否则内存泄漏）
    free(p);  // 释放malloc/realloc申请的内存
    free(q);  // 释放calloc申请的内存
    p = NULL; // 置空指针，避免野指针
    q = NULL;

    return 0;
}