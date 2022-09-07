#define _CRT_SECUER_NO_WARNINGS 1
#include <stdio.h>
//一：回忆指针内容
//1.指针的大小是4或8个字节，在32位机器或64位机器下
//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//arr是首元素地址字节大小在本机器上为8个字节，所以sz=2；
//	printf("%d", sz);
//	//sizeof实际上是获取了数据在内存中的储存空间，以字节为单位
//  //strlen是计算字符个数
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}

//2.指针是有类型的，指针的类型决定了指针+-整数的步长，指针解引用操作的时候能够访问空间大小

//二：字符指针
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);//arr存放的就是首元素地址
//	printf("%s\n", pc);//pc存放的也是首元素地址，所以打印结果应相同
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef";//"abcdef"是一个常量字符串
//	//这种写法就是将字符串首元素的地址存到p里面，通过p（首元素地址）我们可以找到整个字符串
//	//*p = 'w';//常量字符串是不允许被改变的
//	printf("%s\n", p);
//	printf("%c\n", *p);//%c打印一个字符
//	printf("%s\n", p);//将首元素地址放上去即可打印整个字符串的内容
//	return 0;
//}

//一道面试题：
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";//两个不同的数组，在内存中一定开辟两块儿不同的空间
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";//因为是常量字符串，不能修改，所以内存中只储存一份
//	//if (arr1 == arr2)//数组名是首元素地址	
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");
//	//}
//	if (p1 == p2)//指向空间相同	
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//指针数组是数组
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	int* parr[4];//存放整型指针的数组 - 指针数组
//	char* pch[5];//存放字符指针的数组 - 指针数组
//	return 0;
//}

//int main()
//{
//	int a = 10;	
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7, };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//复习一下：
//int* arr1[10];//整型指针的数组
//char* arr2[4];//一级字符指针的数组
//char** arr3[5];//二级字符指针的数组


//三：数组指针 - 指针
//int main()
//{
//	//arr是首元素地址
//	//&arr[0]是首元素地址
//	//&arr是数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	//int*p1[10];p1先和[]结合，所以是存放指针的数组
//	//int(*p2)[10];*p2先和（）结合，说明p2是一个指针变量，变量指向的是大小为10个整型的数组，所以叫数组指针
//	//上面的p就是数组指针，指向数组的每个元素
//	//数组指针是指向数组的指针
//	return 0;
//}
//
//int main()
//{
//	char* arr[5];//定义了一个字符指针数组
//	char*(*pa)[5] = &arr;//*pa应该指向字符指针数组
//	//pa是指针变量的名字，*告诉我们pa是个指针，[5]告诉我们pa指向的数组是5个元素的，
//	//char*告诉我们pa指向的数组的元素类型是字符指针char*
//	return 0;
//}

//数组指针的使用
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}*/
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*(*pa+i));//*pa==arr，pa放的是&arr,解引用操作后相当于把&符号抵消了
//	}
//	return 0;
//}
//上面这种方法并不适合用于数组指针解决，普通的下标访问和指针解引用即可解决问题

//数组指针的一般使用场景：
//参数是数组的形式
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
////参数是数组指针的形式
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			//*(p+i)其实得到的是这一行的首元素的地址
//			//+i表示的是跳过整整一行的元素
//			//printf("%d ", (*(p + i))[j]);//*(p+i)拿到这一行的数组名，p放的就是&arr，*p则为arr
//			printf("%d ", p[i][j]);
//二维数组比较特殊*（p+i）其实相当于p[i],*(p[i]+j)相当于p[i][j]
//   	}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	//arr就是数组名就是首元素地址（除sizeof（arr），&arr）
//	print2(arr, 3, 5);
//	//把arr想像成一维数组，每一行是一个元素，那么arr就是第一行的地址
//	return 0;
//}


//int arr[5];//arr是数组名，剩下的int和[5]是数组类型
//int* parr1[10];//parr1是数组名，剩下的是数组类型，所以他是一个大小为10个元素的指针数组
//int(*parr2)[10];//parr2是一个指针，指向int型的数组
//int(*parr3[10])[5];//parr3是一个数组，该数组有10个元素，每个元素都是数组指针，该数组指针，指向的	
//数组有5个元素，每个元素是int
// 
//int arr[10],arr[10]是数组，每个元素是int型的.上面的int(*     )[5]是这个数组中每个元素的类型

//总结：
//首元素地址可以通过两种方式来达到打印出整个数组内容
//1.通过首元素地址+数字遍历，然后再解引用操作
//2.首元素地址相当于数组名，那么就可以通过下标访问的方式来获得整个数组的内容

//总结：
//1.数组除掉方块儿和数组名就是数组元素的类型
//2.指针除掉名字就是类型，数组指针去掉名字，剩下的就是类型

//四：数组参数、指针参数
//1.一维数组传参
//void test(int arr[])//ok? yes 方块儿里面的数字可以省略，写错也没关系（但不要写错容易误导别人）
//{}
//void test(int arr[10])//ok? yes
//{}
//void test(int*arr)//ok? yes
//{}
//void test2(int*arr[20])//ok? yes 方块儿里面的数字可以省略，写错也没关系
//{}
//void test2(int**arr)//ok? yes 传过去一级指针的地址，用二级指针接收
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}

//2.二维数组传参
//void test(int arr[3][5])//ok? yes
//{}
//void test(int arr[][])//ok? no
//{}
//void test(int arr[][5])//ok? yes
//{}
//void test(int *arr)//ok? no!no!no!
//{}
//void test(int*arr[5])//ok? no!no!no,传过去的是地址，应该用指针来接收，而不是数组接收
//{}
//void test(int(*arr)[5])//ok? yes!yes!yes!
//{}
//void test(int**arr)//ok? no!no!no!
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}

//3.一级指针传参
//void print(int* p, int sz)//接收地址，用指针来接收
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	//一级指针p(里边放着首元素地址)，传给函数print
//	return 0;
//}

//思考：当一个函数的参数部分是一级指针的时候，函数能接收什么参数呢？
//1.可以接收变量的地址
//2.也可以接收存放变量地址的一级指针

//4.二级指针传参
//void test(int** ptr)
//{
//	printf("num=%d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);//传存放一级指针地址的二级指针，用二级指针接收
//	test(&p);//传一级指针的地址，用二级指针接收
//	return 0;
//}

//思考：当一个函数的参数部分是二级指针的时候，函数能接收什么参数呢？
//1.可以接收一级指针的地址
//2.可以接收存放一级指针地址的二级指针
//3.可以接收指针数组的数组名，此时数组名代表数组中存放第一个指针的地址

//五：函数指针
//数组指针 - 指向数组的指针
//函数指针 - 指向函数的指针

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	//&arr - 整个数组的地址
//	//arr - 首元素的地址
//	printf("%d\n", Add(a, b));
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	//两种打印方式的地址相同，说明&函数名 和 函数名 都是函数的地址
//	int(*p)(int, int) = &Add;
//	//函数指针p就是存放函数地址的一个指针
//	int ret = (*p)(2, 3);
//	printf("ret=%d\n", ret);//ret==5
//	return 0;
//}

//void print(const char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*p)(const char*) = &print;
//	(*p)("I LOVE YOU");
//
//	return 0;
//}

//阅读两端有趣的代码：
//1.(*(void (*)())0))();
////void(*)()是一个函数指针类型，将0强制转换为 函数指针类型，那么0就是函数的地址，
////然后调用0地址处的该函数，也就是进行解引用操作，不进行传递参数，所以最右边是（）
////补充：函数指针指向的是 无返回类型 无函数参数 的 函数
//2.void(*signal(int, void(*)(int)))(int);
////调用一个函数参数 为整型 和 函数指针 类型的signal函数，并且这个函数的返回类型是函数指针类型
////所以上面就是signal函数的一次声明
////将上面代码进行简化：
//typedef void(*pfun_t)（int）+ void(*signal(int, void(*)(int)))(int) ==  pfunt signal(int, pfunt)
//typedf unsigned int uint;//两种不同的重新定义函数名的方式



//#加深对于函数指针的理解#
//int (*p)(int a, int b);  //p是一个指向函数的指针变量，函数返回类型为整型
//int* p(int a, int b);     //p是函数名，函数返回类型为整型指针
//函数指针变量常用的用途之一是把指针作为参数传递到其他函数。

// int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*p)(int, int) = &Add;//p和Add是一回事
//	printf("%d\n", p(2, 3));
//	//因为p和Add一样，那么写成上面也可以
//	printf("%d\n", Add(2, 3));//原本函数调用的写法
//
//	printf("%d\n", (*p)(2, 3));
//	return 0;
//}

//六：函数指针数组
//int Add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int(*pa)(int, int) = Add;
//	//pa可以存放Add,mul,div,sub都可行，所以需要一个函数指针数组，内容为4个指向函数地址的指针
//	int(*parr[4])(int, int) = { Add,sub,mul,div };
//	//去掉数组名和方块儿，剩下的就是数组元素类型，那么类型就是函数指针
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}

////编程题：
//char*my_strcpy(char*dest,const char*src)
////1.写一个函数指针pf，能够指向my_strcpy
////2.写一个函数指针数组pfArr，能够存放4个my_strcpy函数的地址
//
//char*(*pf)(char*,const char*)
//char*(*pfArr[4])(char*,const char*)
//
























































































































































































































































