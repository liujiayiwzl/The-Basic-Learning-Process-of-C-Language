/*字符串常见函数*/

#include<stdio.h>
#include<string.h>
int main()
{
	char* str1 = "wzl";
	char str2[100] = "wzl";
	char str3[5] = { 'w','z','l','l','\0' };

	printf("初始值：\nstr1:wzl\nstr2:wzl\nstr3:wzll\nstr4:WZLLOVELJY\n\n");





	/*   1.strlen：获取字符串长度    */
	printf("————————strlen（长度）————————\n");
	//细节一：计算长度时，不计算结束标记
	//细节二：windows中，中文占两个字节
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int len3 = strlen(str3);

	printf("str1长度：%d\n", len1);
	printf("str2长度：%d\n", len2);
	printf("str3长度：%d\n\n", len3);




	/*    2.strcat拼接字符串     */
	printf("————————strcat（拼接）————————\n");
	//细节一：把第二个字符串中全部内容，拼接到第一个字符串末尾
	//        前提一：第一个字符串可以被修改
	//        前提二：第一个字符串剩余空间可以容纳拼接的字符串              
	strcat(str2, str3);
	printf("拼接后str2：%s\n", str2);
	printf("拼接后str3(不变)：%s\n\n", str3);



	/*     3.strcpy拷贝字符串        */
	printf("————————strcpy（拷贝）————————\n");
	//细节一：把第二个字符串中全部内容，拷贝到第一个字符串中，把第一个字符串完全覆盖
	//        前提一：第一个字符串可以被修改
	//        前提二：第一个字符串剩余空间可以容纳第二个字符串全部内容
	strcpy(str2, str3);
	printf("拷贝后str2：%s\n", str2);
	printf("拷贝后str3(不变)：%s\n\n", str3);





	/*      4.strcmp比较字符串           */
	printf("————————strcmp（比较）————————\n");
	//细节：在比较的时候，要求顺序和内容完全一致，输出0，完全一致
	//          完全一样：0
	//          有一个不一样：！0
	int res1 = strcmp(str1, str2);
	int res2 = strcmp(str2, str3);
	printf("str1与str2比较结果：%d\n", res1);
	printf("str2(拷贝后)与str3比较结果：%d\n\n", res2);





	/*        5.strlwr（变小号）      */
	printf("————————strlwr（变小号）————————\n");
	//细节：
	//      只能转换英文大小写
	char str4[] = "WZLLOVELJY";
	
	_strlwr(str4);
	printf("str4转换小写后：%s\n\n", str4);




	/*       6.strupr变大号     */
	printf("————————strupr（变大号）————————\n");
	//细节：
	//      只能转换英文大小写

	_strupr(str4);
	printf("str4转换大写后：%s\n", str4);


	return 0;
}