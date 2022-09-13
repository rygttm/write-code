#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>
//1.写一个函数逆序字符串的内容
//void reverse(char* ptr)
//{
//	assert(ptr!=NULL);
//
//	int len = strlen(ptr);
//	char* left = ptr;
//	char* right = ptr + len - 1;
//	while (left<right)
//	{
//		char tmp = *right;
//		*right = *left;
//		*left = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s", arr);//scanf再读到空格时，会停止
//	fgets(arr,20,stdin);
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}
//没必要传字符串的元素个数，因为可以用strlen去求字符串长度
//assert一般用于确认被调用函数参数的正确性

//2.计算求和
//求Sn=a+aa+aaa+aaaa+aaaaa的前n项之和，其中a是一个数字
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = a;
//	for (i = 0; i < n; i++)//前n项，有几项，循环加几次么
//	{
//
//		sum += a;
//		a = a * 10 + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//3.水仙花数：打印1-100000之间的所有自幂数
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//分步骤进行
//		//1.计算n的位数
//		int n = 1;
//		int sum = 0;//在循环内部定义sum=0
//		int tmp = i;//i的值不能被改变，所以需要借存一下
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//123
//		//123%10!=0  n++
//		//123/10
//		//12%10!=0  n++
//		tmp = i;
//		//2.计算i的每一位的n次方之和
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);//强制类型转换，将double变为int
//			tmp /= 10;
//		}
//		//3.判断i是否和上面的和相等，若相等则输出
//		if (i == sum)
//			printf("%d ", i);
//	}
//	return 0;
//}

//4.打印菱形
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************  //总共13行
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
//int main()
//{
//	//打印上半部分
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//输入打印上半部分的行数，输入奇数
//	for (i = 0; i < line; i++)
//	{
//		//里面部分打印每一行的内容
//		int j = 0;
//		for (j = 0; j < line - 1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2*i+1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <1+i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//5.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int empty = 0;
//	int total = 0;
//	total = money;
//	empty = money;
//
//	while (empty>=2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total=%d\n", total);
//	return 0;
//}

//6.模拟实现库函数strcpy
//char* my_strcpy(char* dest,  const char* source)
//{	
//	assert(dest && source);
//	char* ret = dest;
//	while (*dest++ = *source++)
//	{
//		;
//	}
//	return ret;
//	 
//}
//int main()
//{
//	char arr1[] = "I LOVE YOU";
//	char arr2[] = "************";
//	 
//	printf("%s\n", my_strcpy(arr2, arr1));
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//7.模拟实现库函数strlen
//int my_strlen(char* start, char* end)
//{
//	assert(start && end);
//	return end - start;
//}
//int main()
//{
//	char arr[] = "ILOVEYOU";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	 
//	printf("%d", my_strlen(arr, arr + sz - 1));
//	return 0;
//}

//8.调整数组使奇数全部都位于偶数前面
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void move(int*arr,int sz)
//{
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	//从左边开始找偶数
//	while (left < right)
//	{
//		while ((left<right)&&(arr[left] % 2 == 1))//如果数组全是奇数，left++一直进行，会越界访问
//		{
//			left++;
//		}
//		//从右边开始找奇数
//		while ((left < right)&&(arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[right];
//			arr[right] = arr[left];
//			arr[left] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	print(arr, sz);
//	return 0;
//}
//算法思想： 
//1.从左边开始找一个偶数
//2.从右边开始找一个奇数
//3.把他们进行交换

//9.输出结果是什么？
//int main()
//{
//	unsigned char a = 200; 
//	unsigned char b = 100;
//	unsigned char c = 0;
//	//unsigned char类型范围是0-255
//	//00000000000000000000000011001000
//	//整型存到char型a发生截断，11001000
//	//00000000000000000000000001100100
//	//整型存到char型b发生截断，01100100
//
//	//a-11001000
//	//b-01100100
//	//00000000000000000000000011001000-整型提升后的a
//	//00000000000000000000000001100100-整型提升后的b
//	//00000000000000000000000100101100-a+b后的结果
//	//把a+b的结果存到char型c中发生截断
//	//00101100-c
//	c = a + b;//a+b发生整型提升
//	
//	printf("%d %d", a + b, c);
//	//a+b打印有符号的十进制，最高位为符号位，因为a+b是正数，则原码反码补码相同，存在内存中的a+b是有符号的补码
//	return 0;
//	//打印%d就认为，c在内存中的储存形式是有符号的补码
//}
//整型提升规则：
//有符号数高位补符号位，无符号数高位补0

//举例
//int main()
//{
//	int a = -1;
//	printf("%d\n", a);//认为a在内存中的存储形式是有符号的补码，打印时再转换成原码进行打印
//	printf("%u\n", a);//认为a在内存中的存储形式是无符号的补码，无符号则原码反码补码相同，以内存存储形式进行打印
//	return 0;
//}

//10:在32位大端模式处理器上变量b等于？
//int main()
//{
//	unsigned int a = 0x1234;
//	//a里面可以放得下0x1234,存储到内存时，会将剩余字节用0补充，0x00 00 12 34
//	//0001001000110100
//	//大端下在内存中的放置形式为00 00 12 34          
//	unsigned char b = *(unsigned char*)&a;
//	//由低地址向高地址读取，读取到00，则大端模式下结果应为0x00
//	printf("%c\n", b);
//	return 0;
//}

//11.
//int main()
//{
//	char a[1000] = { 0 };//定义字符数据类型
//	//-128-->127
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}

//12.在屏幕上打印杨辉三角
//    1
//   1 1
//  1 2 1
// 1 3 3 1
//1 4 6 4 1
//………………
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)//外层循环打印行
//	{
//		for (j = 0; j <=i; j++)//内层循环打印列
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//		
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10 - i; j++)
//		{
//			printf(" ");
//		}
//		 
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//上面的循环负责改变数组内容，下面的循环负责打印数组内容，实现杨辉三角的打印

//13.猜凶手（编程题）
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

//临时的知识点补充： 
//int main()
//{
//	int a = 'a';
//	char b = 'b';
//	short c = 'c';
//	long d = 'd';
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	printf("%d\n", d);
//	return 0;
//}

//前提：好人说真话，凶手说假话
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer=%c", killer);
//		}
//			 
//	}
//	
//	return 0;
//}

//14.找工作的时候会考
//赛马问题：36匹马，6个跑道，没有计时器，请赛马确定，36匹中的前三名
//请问最少比赛几次
// 
//赛马问题：25匹马，5个跑道，没有计时器，请赛马确定，25匹中的前三名
//请问最少比赛几次
// 
//烧香问题：有一根香，材质不均匀，但是每一根香燃烧完，恰好是一个小时
//给你两根香，帮我确定一个15分钟的时间段

//--思维题--智力题

//15题目名称：
//猜名次
//题目内容：
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1 )&&
//							((b == 2) + (e == 4) == 1 )&&
//							((c == 1) + (d == 2) == 1 )&&
//							((c == 5) + (d == 3) == 1 )&&
//							((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}

//16.数组的地址应该放在数组指针里面
//17.输出什么？
//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    const char* str3 = "hello bit.";
//    const char* str4 = "hello bit.";
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//
//    return 0;
//}
//两个不同的数组在内存中的空间是不同的
//常量字符串是不能改变的，所以是没有必要在内存中重新存一份字符串,所以上面的两个字符串是完全相同的

//18.
//int*fun(int a,int b)    函数声明
//int(*)fun(int a,int b)  语法就错误了，没有这种写法
//int(*fun)(int a,int b)  函数指针
//(int*)fun(int a,int b)  函数声明，和第一种写法相同

//19.
//int(*  (*F)(int ,int)   )(int)
//函数指针F指向的函数的参数是两个int，返回类型是一个函数指针，指向的函数的参数是int，返回类型是int

//20.
//int(*(*p)[10])(int*)
//定义了一个指针，该指针指向的数组元素个数为10，每个元素类型是函数指针，指针指向的函数参数是int*，返回类型是int

//21.
//int main()
//{
//    int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//    int* ptr1 = (int*)(&aa + 1);
//    int* ptr2 = (int*)(*(aa + 1));
////aa+1拿到的是第二行数组的地址，解引用拿到第二行的数组名，第二行的数组名又代表的是第二行首元素的地址
////*(aa+1)==arr[1]
//    printf("%d %d", *(ptr1 - 1), *(ptr2 - 1));
//    return 0;
//}

//22.题目名称：
//字符串左旋
//题目内容：
//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//1.暴力求解法：
//void left_move(char* arr, int k)
//{
//    assert(arr);//arr是空指针的话那就是0，arr不是空指针的话那就是非0，等于0就会报错
//    int i = 0;
//    int len = strlen(arr);
//    for (i = 0; i < k; i++)
//    {
//        //左旋转一个字符
//        char tmp = *arr;
//        //把后面的所有元素通通挪到前面
//        int j = 0;
//        for (j = 0; j < len-1; j++)
//        {
//            *(arr + j) = *(arr + j + 1);
//        }
//        //把第一个元素放到最后面
//        *(arr + len - 1) = tmp;
//    }
//}
//2.三步翻转法
//abcdef
//ba fedc
//整体反转cdefab
//void reverse(char* left, char* right)
//{
//    assert(left && right);
//    
//    while (left<right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//void left_move(char* arr, int k)
//{
//    assert(arr);
//    int len = strlen(arr);
//    assert(k <= len);
//    reverse(arr,arr+k-1);//逆序左边
//    reverse(arr+k,arr+len-1);//逆序右边
//    reverse(arr,arr+len-1);//逆序整体
//}
//int main()
//{
//    char arr[] = "abdcef";
//    left_move(arr, 2);
//    printf("%s\n", arr);
//
//    return 0;
//}

//23.题目名称：
//字符串旋转结果
//题目内容：
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
//void reverse(char* left, char* right)
//{
//    assert(left && right);
//    
//    while (left<right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//void left_move(char* arr, int k)
//{
//    assert(arr);
//    int len = strlen(arr);
//    assert(k <= len);
//    reverse(arr,arr+k-1);//逆序左边
//    reverse(arr+k,arr+len-1);//逆序右边
//    reverse(arr,arr+len-1);//逆序整体
//}
//int is_left_move(char* s1, char* s2)
//{
//	//拿逆序后的所有结果进行比较，看是否是逆序后的结果
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);//每次左旋转一个，循环几次旋转几个，循环一次比较一下
//        int ret = strcmp(s1, s2);
//        if (ret == 0)
//            return 1;
//	}
//    return 0;//for循环走完之后，依然没有一个相等的，那么s2就不是逆序后的结果
//}
//int main()
//{
//	 char arr1[] = "abcdef";
//	 char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("yes\n");
//	else
//		printf("no\n");
//	return 0;
//}

 















































































































































































































































































