/*
   读取文件步骤：
             1.打开文件 ：fopen（）返回类型 FILE* ，要用指针类型接收

             2.读取数据 ：fgetc（接收指针的名字）  一次读一个字符，读不到返回-1
                          fgets（）                一次读一行，读不到返回null
                          fread（）                一次读多个

             3.关闭文件 ：fclose

         例： "C:\Users\liujiayi\Desktop\file.txt.txt"
*/

#include<stdio.h>
int main()
{
    //1.打开文件
    /*
         注意转义字符
         使用fopen时，后面还有个引号：
                                   r：只读模式
                                   w：只写模式
                                   a：追加写出模式
                                   rb：只读模式（二进制文件）
                                   wb：只写模式（二进制文件）
                                   ab：追加写出模式（二进制文件）
    */
    FILE* f1 = fopen("C:\\Users\\liujiayi\\Desktop\\file.txt","r");


    //2.使用单个读取数据fgetc  返回int型
    int c;
    while ((c=fgetc(f1)) != -1)
    {
        printf("%c ", c);
    }

    //3.关闭文件
    fclose(f1);

    return 0;
}