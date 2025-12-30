/*
    练习：利用代码拷贝文件

    要求：把桌面上file文件拷贝到“我做出的应用”文件夹中

    纯文本文件： r w a
    Windows记事本能读懂就是纯文本文件
    txt md lrc

    二进制文件： rb wb ab
       b：binary

      文件： "C:\Users\liujiayi\Desktop\file.txt"
     文件夹："C:\Users\liujiayi\Desktop\我做出来的应用"
*/

#include<stdio.h>
int main()
{
    //1.读取文件file    （纯文本文件读取  用r）
    FILE*file1=fopen("C:\\Users\\liujiayi\\Desktop\\file.txt", "rb");//以二进制形式打开

    //2.在文件夹中写入    （二进制文件用wb）
    FILE*file2=fopen("C:\\Users\\liujiayi\\Desktop\\我做出来的应用\\kaobei.txt", "wb");

    //3.利用循环读取数据，将数据写入目的地
    char arr[1000];
    int n;//接收fread返回值
   /*
        fread内部参数：1.数据存储的目标地址：缓冲区arr
                       2.每个数据单元大小：1字节  
                       3.最多读取单元数：1000
                       4.读取源文件指针file1
   */

    while ((n = fread(arr, 1, 1000, file1)) != 0)//不断读取数据，读多少返回多少，读完了返回0，未到0一直读
    {
        fwrite(arr, 1, n, file2);
    }
    /*
        fwrite内部参数：1.要写入的数据地址来源（arr）   
                        2.每个数据单元大小：1字节（与fread一致）
                        3.要写入的单元数：n（实际读取的字节数）
                        4.写入的目标文件指针
    */


    //4.关闭文件
    fclose(file1);
    fclose(file2);


    return 0;
}