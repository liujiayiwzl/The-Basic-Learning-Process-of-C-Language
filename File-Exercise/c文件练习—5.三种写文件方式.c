/*
       1.打开文件：fopen（"文件名","打开的模式"）返回类型 FILE* ，要用指针类型接收
        注意转义字符
            使用fopen时，后面还有个引号（打开模式）：
                                    r：只读模式
                                    w：只写模式
                                    a：追加写出模式
                                    rb：只读模式（二进制文件）
                                    wb：只写模式（二进制文件）
                                    ab：追加写出模式（二进制文件）

        2.写数据：fputc ：一次写一个字符，返回写出的字符
                  fputs ：一次写一个字符串，成功返回非负数，一般忽略返回值
                  fwrite：一次读多个，返回写出的个数

         3.关闭文件 fclose

         例："C:\\Users\\liujiayi\\Desktop\\file.txt"
*/

#include<stdio.h>
#include<string.h>
int main()
{
    //1.打开文件
    FILE* opf = fopen("C:\\Users\\liujiayi\\Desktop\\file.txt", "w");// w只写模式

    //2.写数据
     
    //fputc ('字符'，文件返回指针名)：一次写一个字符，返回写出的字符
    char c = fputc('w', opf);//用字符接收返回值
    printf("%c\n", c);


    //fputs（“字符串”，文件指针名）：一次写一个字符串，成功返回非负数，一般忽略返回值
    //                   若写出失败，则有EOF错误
    char arr[10] = "zl";//定义字符数组
    int n = fputs(arr, opf);//arr可直接写字符串，用整型变量接收返回值非负数
    printf("%d\n", n);//返回非负数


    //fwrite(待写入数据的内存地址，单个数据的字节数，写入的长度，文件指针名)：一次读多个，返回写出的个数
    char arr1[] = "love";             //arr1是这一个字符串的内存地址
    int num = fwrite(arr1, 1, strlen(arr1), opf);//4就是返回写出的字节个数
    printf("%d", num);                //返回4



    //3.关闭文件
    fclose(opf);

    return 0;
}