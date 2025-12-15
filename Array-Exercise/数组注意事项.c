#include<stdio.h>
void printArr(int arr[], int len);
int main()
{
	/*
	    1.数组作为函数的参数，要注意什么？
		    - void里面传递是数组的首地址，要在函数中对数组遍历，需要把长度一起传递
			- main中：arr表示完整的数组，通过sizeof(arr) / sizeof(arr[0])计算长度
			- void中：arr只是指针变量，记录数组首地址

		长度计算：int len = sizeof(arr) / sizeof(arr[0]);


        2.数组索引越界
		     最小索引：0
			 最大索引：长度 - 1

        
		3.获取元素
		      变量 = 数组名[索引]    例：int num = arr[5];
			  printf("%d\n",arr[5]);
        
		4.修改元素
		       arr[5] = 10;

        5.查找内存地址     printf("%p\n",&变量名);
                main函数中printf("%p\n",&arr)  &arr表示整个数组的地址，但是总地址入口和第一个地址arr[0]一样，所以与下面结果一样
				void函数中printf("%p\n",arr)     arr是指针变量，传递的是首地址，所以是查找arr第一个地址
         
        6.- 从main函数传递到void里面的 （首地址）arr是一个  int*指针变量：64位中 占8个字节，写着内存地址
		  - main函数中，int arr[5]是一个  特殊的数组变量：包含5个int类型，占 4*5 = 20个字节

	*/


	// 1.定义数组
	int arr[] = { 1,2,3,4,5 };
	int len = sizeof(arr) / sizeof(arr[0]);//计算数组长度
	printArr(arr, len);//把数组和长度一起传过去，调用函数遍历数组
	return 0;
}

//函数接收数组和长度
void printArr(int arr[], int len)
{
	for (int i = 0; i < len; i++)//遍历数组
	{
		printf("%d\n", arr[i]);
	}
}