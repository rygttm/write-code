#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
//debug通常称为调试版本，它包含调试信息，并且不做任何优化，便于程序员调试程序
//release称为发布版本，他往往进行了各种优化，使得程序在代码大小和运行速度上都是最优的，以便用户很好的使用
//debug版本的文件大小要大于release版本，因为它其中包含了调试信息，而release版本是不能进行调试的
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//	system("pause");
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	//debug版本下代码无法执行
//	//release版本下代码执行结果为打印13个hehe
//	return 0;
//}

//快捷键:
//F5:启动调试，经常用来直接调到下一个断点处,和F9配合使用的(程序执行逻辑上的下一个断点)
//F9:创建断点，取消断点。可以在程序的任意位置设置断点，这样就可以使得程序在想要的位置随意停止执行
//进而一步步执行下去
 
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d", 10 - i);
//	}
//	return 0;
//	 
//}
//F10:逐过程,通常用来处理一个过程，一个过程可以是一次函数调用，或者是一条语句
//F11:逐语句，就是每一次执行一条语句，但是这个快捷键可以帮助我们代码执行进入函数内部
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//
//	return 0;
//}
//fn+shift+f11跳出被调用函数
//fn+shift+f5停止调试
//fn+shift+f9快速监视

//int main()
//{
//	{
//		int tmp = 0;
//		printf("tmp=%d", tmp);
//	}
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//
//	return 0;
//}
//自动窗口会自动把当前语句上下的变量进行监视
//局部变量窗口只会观察当前语句中的局部变量,上面大括号中的tmp出了括号后局部变量窗口将不再对他进行监视
//内存窗口可以观察变量当前在内存中的储存情况

//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//
//	return 0;
//}

//一些调试的实例	
//实例一:求1！+2！+3！…+n！不考虑溢出
//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;//ret值改变后重新计算阶乘的时候，就不是从1开始乘了
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//实例二:
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	 
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//main函数内部创建了i和arr，i和arr都是局部变量，都在栈中开辟了一块空间而栈的使用习惯是先使用高地址
//空间,再使用低地址空间，所以i的地址要比arr高，而数组随着下标的增长，地址是由低到高变化的，所以
//再数组越界访问时就有可能遇到i，那么就有可能越界访问将i改变成0，那么完全有可能导致程序死循环
//《c陷阱和缺陷》

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%p\n", &i);
//	printf("%p\n", arr);
//	return 0;
//}
//debug版本下i的地址肯定要比arr高的
//release版本下，进行优化过后arr的地址却要比i高了

//示范写出一段优秀的代码:模拟实现strcpy函数
//void my_strcpy(char* dest , char* src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;//拷贝\0字符
//}
//\0的ascll码值为数字0
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL) 
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}
//虽然它可以运行了，但其实它规避了没有拷贝成功这个问题
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	 
//}

//void my_strcpy(char* dest, const char* src)//因为*src是不可以改变的
//{              //源头数据不可以被修改，目的地数据一定会被修改，所以dest不可以加const
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	while (*dest++ = *src++)//所以如果你将等号两端不小心写反了的话，程序也是会给你报错的
//	{
//		;
//	}
//
//}
//char* my_strcpy(char* dest, const char* src)//因为*src是不可以改变的
//{     //源头数据不可以被修改，目的地数据一定会被修改，所以dest不可以加const
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	while (*dest++ = *src++)//所以如果你将等号两端不小心写反了的话，程序也是会给你报错的
//	{//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
//		;
//	}
//	return ret;
//}
////加上char*返回目的地的地址
//int main()
//{
//	//strcpy字符串拷贝
//	char arr1[] = { "##########" };
//	char arr2[] = { "I Love You" };
//	//返回目的地的地址了
//	printf("%s", my_strcpy(arr1, arr2));//把一个函数的返回值作为另外一个函数的参数叫链式访问
//
//	return 0;
//}
//将arr2打印过去时会把\0打印上，printf打印时读到\0结束打印

//int main()
//{
//    int num = 10;
//	const int* p = &num;
//	//const修饰的是*p，加上后不能通过解引用操作改变num的值，不能改变*p
//	//const放在*右边，不能改变的是指针变量p
//	const int* const p = &num;//*p不能改p也不能改，凉皮吃不成，男朋友也换不了
//	*p = 20;
//	printf("%d", num);
//	return 0;
//}

//常见的coding技巧
//1.使用assert2.尽量使用const3.添加必要的注释

//练习写出一段优秀的代码：模拟实现strlen函数的功能
//int my_strlen(const char* str)//字符串数组的内容是不能被改变的
//{
//	assert(str != NULL);//保证了指针的有效性
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = { "I Love You" };
//	int ret=my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}

//常见错误：
//1.链接错误  无法解析的外部符号+函数名，去找这个函数名，要么没定义函数，要么名字定义错了	
//2.运行错误  这种错误最难搞，借助调试逐步定位解决问题
//3.编译错误  也称语法错误，凭借经验即可解决这种问题























































































































































































