#define _CRT_SRCURE_NO_WARNINGS 1
#pragma  warning (disable:4996) 

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <ctype.h>
//1.求字符串长度
//strlen
// 
//2.长度不受限制的字符串函数
//strcmp
//strcpy
//strcat
// 
//3.长度受限制的字符串函数
//strncpy
//strncat
//strncmp
// 
//4.字符串查找
//strstr
//strtok
// 
//5.错误消息报告
//strerror
//上面的都是字符串函数
// 
//6.字符操作函数
// 
//7.内存操作函数
//memcpy
//memset
//memcmp
//memmove

//前言：c语言中对字符和字符串的处理很是频繁，但是c语言本身是没有字符串类型的，字符串通常放在常量字符串
//或字符数组中。字符串适用于那些对它不做修改的字符串函数

//一：strlen函数（求字符串长度）
//功能：strlen就是从首元素地址开始往后数，直到\0停止

//1.计数器的方法
//2.递归的方法
//3.指针-指针的方法
//int my_strlen(const char* str)
//{
//	if (*str != 0)
//		return (1 + my_strlen(++str));
//	//str++串过去的始终是字符I的地址，因为先使用，下次使用才会++，但你下次不使用，一直再传递
//}
//int main()
//{
//	int len1 = my_strlen("I love you");
//	int len2 = strlen("love");
//	//库函数strlen返回类型是size_t
//	//typedef unsigned __int64 size_t;将无符号整型重定义为size_t
//	//size_t==unsigned int
//	printf("%d\n", len1);
//	return 0;
//}

//二：strcpy函数（字符串拷贝）
//char* my_strcpy(char* dest, const char* src)//库函数strcpy的返回类型是char*
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//	//返回目的空间的起始地址
//	
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//
//	//库函数strcpy会把\0也拷贝过去
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}
//库函数使用时的注意事项
//1.源字符串必须以\0结束
//char arr[] = { 'a','b','c' };
//2.目标空间足够大，得能放的下源字符串

//三：strcat函数（字符串追加）
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//1.找到目的地字符串的\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//2.追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	//my_strcat函数的设计其实就是strcat库函数的实现原理
//	//自己追加自己时，src指针永远无法指向\0，程序就永远无法停下来，那么程序就会崩溃
//	printf("%s\n", my_strcat(arr1, arr2));
//
//	return 0;
//}
//注意：在将源头的字符串追加到目的地时，目的地的空间要足够大
 
//四：strcmp函数（字符串比较）
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "sqwer";
//	//当一个字符串作为表达式存在时，他的结果是首字符的地址
//	if ("abcdef" == "sqwer")
////这两个字符串的结果分别是a和s的地址，那肯定是不相等的
//		printf("相等");
//	else
//		printf("不相等");
//	 
//	return 0;
//}
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "sqwer";
//	int ret = (strcmp(p1, p2));
////strcmp比的是首字符的ascll码值.如果首字符的ascll码值相同，那就比下一个字符
//	printf("ret=%d\n", ret);
//	return 0;
//}
//第一个字符串大于第二个字符串，返回大于0的数字，vs编译器返回1，不同的编译器结果可能不同
//第一个字符串小于第二个字符串，返回小于0的数字，vs编译器返回-1，不同的编译器结果可能不同
//第一个字符串等于第二个字符串，返回等于0的数字，vs编译器返回0，不同的编译器结果可能不同

//my_strcmp函数实现
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else 
//		return -1;
//
//}
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "sqwer";
//	int ret = my_strcmp(p1, p2);
//	if (ret == 0)
//		printf("p1=p2");
//	else if (ret > 0)
//		printf("p1>p2");
//	else
//		printf("p1<p2");
//	 
//	return 0;
//}

//int main()
//{
//    char arr1[5] = "abcd";
//	const char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
////为什么说以上三个函数是长度不受限制的字符串函数，虽然arr1数组的大小不够存放hello bit，但依然能
////在终端看到hello bit，虽然程序已经挂了，但不影响strcpy函数一定要把\0拷贝过去，只有拷贝完\0，
////这个函数才会停止
//	printf("%s", arr1);
//	return 0;
////所以strcpy函数是不安全的
//}

//五：strncpy函数
//int main()
//{
//	char arr1[10] = "abcdefgh";
//	char arr2[] = "bit";
//
//	strncpy(arr1, arr2, 6);
//	//当arr2不够时，后面内容追加\0放进去
//	return 0;
//}

//六：strncat函数
//int main()
//{
//	char arr1[30] = "hello**************";
//	char arr2[] = "bit";
//	strncat(arr1, arr2, 6);
//	//如果传的数字比字符串长，那就只把字符串传过去，再补个\0就完事了
//	return 0;
//}
//
//int main()
//{
//	char arr1[30] = "hello**************";
//	char arr2[] = "bit";
//	strncat(arr1, arr2, 2);
//	//如果传的数字比字符串短，那就只把相应大小的字符串传过去，再补个\0就完事了
//	return 0;
//}

//七:strncmp函数-字符串比较
//int main()
//{
//	const char*p1 = "abcdzf";
//	const char* p2 = "abcqwer";
//	/*int ret=strcmp(p1, p2);*/
//	int ret = strncmp(p1, p2, 5);
//	//d>q,只要你传大于等于4的数字，返回结果都是-1，也就是小于0的数字
//	printf("ret=%d\n", ret);
//	return 0;
//}

//八：strsrt函数-查找字符串的函数
//const char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	const char* s1 = p1;
//	const char* s2 = p2;
//	const char* cur = p1;
//	 
//	if (*p2=='\0')
//	{
//		return NULL;
//	}
//	while (*cur )
//	{
//		s1 = cur;
//		s2 = p2;//一次找不到，还得重新以下一个字符为起点重新进行判断
//		while ((*s1!='\0')&&(*s2 != '\0') && (*s1  == *s2 ))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return NULL;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//找到字串
//		}
//		cur++;
//	}
//	return NULL;//找不到子串
//}
//int main()
//{
//	const char* p1 = "abbbcdef";
//	const char* p2 = "bbc";
//	const char* ret=my_strstr(p1, p2);
//	//如果有子字符串返回首字符地址，反之返回空指针
//	if (ret == NULL)
//		printf("字串不存在\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}
//NULL-空指针
//Null/NUL是都是\0的意思

//九：strtok函数
//int main()
//{
//	//192.168.31.121
//	//192 168 31 121
//	char arr[] = "wang.ya.nan2022@outlook.com";
//	const char* p = "@.";
//	//wang ya nan2022 outlook com
////char* strtok(char* str, const char* sep);
////sep参数是个字符串，定义了用作分隔符的字符集合
//	strtok(arr, p);
//
//
//	return 0;
//}
//strtok的工作原理就是去有分隔符的字符集合中，找分隔符，然后把分隔符改成\0，再把字符分隔符前面的字符地址进行返回
//1.strtok函数的第一个参数不为NULL，函数将找到str第一个分隔符，strtok函数将保存它在字符串的位置
//2.strtok函数的第一个参数为NULL，函数将在同一个字符串中被保存的位置开始，查找下一个标记
//3.如果字符串中不存在更多的标记，则返回NULL指针
//int main()
//{
//	char arr[] = "wang.ya.nan2022@outlook.com";
//	const char* p = "@.";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);//将arr拷贝到buf里，切割buf的字符串即可
//
//	char* ret = strtok(buf, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
////strtok会把分隔符找到并且把他修改为\0，在把首字符地址返回，所以打印字符串%s时，只能打印一部分
//	return 0;
//}
//下面是strtok函数的正宗写法
//int main()
//{
//	char arr[] = "wang.ya.nan2022@outlook.com";
//	const char* p = "@.";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);//将arr拷贝到buf里，切割buf的字符串即可
//
//	char* ret = NULL;
//	for (ret = strtok(buf, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	//1.for循环第一部分的代码只会被调用一次，很好解决了，我后续传空指针的重复步骤
//	//2.for循环执行完初始化的部分后，会一直循环第二部分和第三部分的步骤内容
//	return 0;
//}

//十：strerror函数-错误信息函数
//返回错误码所对应的错误信息
//int main()
//{
//	//每一个错误码对应相应的错误信息
//	char* str = strerror(errno);
//	//errno是一个全局的错误码的变量
//	//当c语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
//	printf("%s\n", str);
//	 
//	return 0; 
//}

//十一：字符转换函数
//int tolower(int c)
//int toupper(int c)

//int main()
//{
//	char ch = tolower('Q');
//	putchar(ch);
//	printf("\n");
//	char arr[] = "I Am a Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;	
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//十二：内存函数-memcpy-这种函数可以操作任意类型数据-浮点型、整型、结构体类型
struct s
{
	char name[30];
	int age;
};
void* my_memcpy(void* dest, const void* src, int num)
{
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest =(char*)dest+1;
		src = (char*)src + 1;
		++(char*)dest;
		++(char*)src;
		
	}
	return ret;
}
int main()
{
	//void* memcpy(void* dest, const void* src, size_t count);第三个参数是拷贝字节数
	int arr1[] = { 1,2,3,4,5 };
	int arr2[5] = { 0 };
	//strcpy(arr2, arr1);
//1.当我们想将arr1数组内容拷贝到arr2时，strcpy函数是做不到的，但如果监视窗口看的话，是可以传1过去的
//2.01000000 02000000 03000000 04000000 05000000-内存中arr1数组以小端存储模式存放数组内容
//但strcpy会把01读取到，然后再读取00也就是\0那么就拷贝停止了

	struct s arr3[] = { {"张三"},{20} };
	struct s arr4[] = { "李四",{30} };
	my_memcpy(arr2, arr1, sizeof(arr1));
	my_memcpy(arr4, arr3, sizeof(arr3));
	return 0;
}

















































































































































































