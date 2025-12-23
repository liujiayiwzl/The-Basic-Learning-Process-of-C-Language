#include<stdio.h>
void method1();
int method2(int num1, int num2);
int main()
{
	//1.定义指针指向两个函数
	/*
	       定义指针：类型（*p）= arr 这是把函数入口地址给到指针p
		   
		   调用函数：先解引用（*p）（实参，实参） / p（实参，实参）
		   
	*/
	void(*p1)() = method1;
	int (*p2)(int,int) = method2;




	//2.利用函数指针调用函数
	p1();
	int num = (*p2)(10, 20);
	printf("%d\n", num);

	return 0;
}



void method1()
{
	printf("method1\n");
}

int method2(int num1, int num2)
{
	printf("method2\n");
	return num1 + num2;
}

