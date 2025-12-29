/*
   读取文件步骤：
             1.打开文件 ：fopen（）返回类型 FILE* ，要用指针类型接收

             2.读取数据 ：fgetc（接收指针的名字）  一次读一个字符，读不到返回-1
                          fgets（）                一次读一行（字符串），读不到返回null
                          fread（）                一次读多个

             3.关闭文件 ：fclose

         例： "C:\Users\liujiayi\Desktop\file.txt.txt"
*/

#include<stdio.h>
int main()
{
    //1.打开文件
  
    FILE* f2 = fopen("C:\\Users\\liujiayi\\Desktop\\file.txt", "r");

    //2.使用fgets读取一整行（字符串）
    /*
         细节：以换行符为一行
               读不到了返回null 

         fgets是把 文件中内容当作字符串 存到数组里面
         fgets使用： fgets(数组，数组长度，接收文件的变量名)
                    返回的是数组首地址，要使用指针类型接收
    */        



    char arr[100];//定义数组接收文件内容
    char* str;//定义指针接收返回的数组地址

    //fgets会逐行读取，每读一行打印一行
    while ( (str=fgets(arr, 100, f2)) != NULL)//读不到内容 返回NULL，则利用循环，读完一行若读不到NULL就换行
    {
        printf("%s", str);//打印数组中每一个内容（字符串）
    }

    //3.关闭文件
    fclose(f2);

    return 0;
}