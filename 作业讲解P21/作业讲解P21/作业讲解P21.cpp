#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
#include <string.h>
//1.求一个数二进制中1的个数
//int find(int i)
//{
//	int num = 0;
//	while (i)
//	{
//		num++;
//		i=i& (i - 1);
//	}
//	return num;
//}
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	printf("请输入数字:>\n");
//	scanf("%d", &i);
//	ret = find(i);
//	printf("1的个数为：%d\n", ret);
//	return 0;
//}
//2.求二进制中不同位的个数
//编程实现：两个int整数的二进制表达中，有多少个位（bit）不同
//int get_different_bit(int m, int n)
//{
//	int i = 0;
//    i = m ^ n;//让mn按位异或，所得结果中1的个数即为多少个不同的比特位
//	int count = 0;
//	while (i)
//	{
//		count++;
//		i = i & (i - 1);
//	}
//	return count;
//}
//int main()
//{
//	int ret = 0;
//	int m = 0;
//	int n = 0;	 
//	scanf("%d%d", &m, &n);//scanf""的里面只能有%d，千万不要加其他东西
//	ret=get_different_bit(m, n);
//	printf("%d\n", ret);
//	return 0;
//}
//3.打印二进制的奇数位和偶数位
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//void print(int m)
//{
//	int i = 0;
//	//打印偶数位
//	printf("打印偶数位:>");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		if ( (1 & (m >> i)) == 0)
//		{
//			printf("0");
//		}
//		if ( (1 & (m >> i)) == 1)
//		{
//			printf("1");
//		}
//	}
//	printf("\n");
//	//打印奇数位
//	printf("打印奇数位:>");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		if ( (1 & (m >> i)) == 0)
//		{
//			printf("0");
//		}
//		if ( (1 & (m >> i)) == 1)
//		{
//			printf("1");
//		}
//	}
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}
//4.交换两个变量的内容，不允许创建临时变量
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	return 0;
//}
//虽然不用借助临时变量，但这种计算可能会导致越界:
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	return 0;
//}
//5.不使用下标的方式来打印数组内容，用指针来实现打印
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i <sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}
//6.根据下面递归函数，调用函数Fun（2），返回值是多少
//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
//第一次：n==2，返回2*Fun（3）
//第二次：n==3，返回2*Fun（4）
//第三次：n==4，返回2*Fun（5）
//第三次：n==5，返回2
//则结果为16
//7.递归存在一个限制条件，当满足这个限制条件时，递归便不在继续
//8.递归层次太深，会出现栈溢出的情况
//9.输入9打印9*9的乘法口诀表，输入12打印12*12的乘法口诀表
//void print_table(int n)
//{
//	int i = 0;
//	//外面循环为行
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		//里面循环为每行要打印的内容
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i * j);
//			 
//		}
//		printf("\n");
//	}
//}
////d表示输出整数，3表示输出的数字占3个字符的位置。
////- 号表示对齐方式。是左对齐。如果是 + 号或者不写，表示右对齐。
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}
//10.递归方式实现打印一个整数的每一位
//void output(int n)
//{
//	 
//	if (n > 9)
//	{
//		output(n / 10);//1234大于9，那么就先打印123（即将1234/10，利用output函数将123打印了先
//	}                  //然后再将1234%10，将4打印出来，即可完成需求
//	printf("%d ", n%10 );
//}
////print(1234)
////print(123) 4   如果能把123打印在屏幕上，只要再%10就可轻松得到4
////print(12) 3 4  如果能把12 打印在屏幕上，只要再%10就可轻松得到3
////print(1) 2 3 4 如果能把1  打印在屏幕上，只要再%10就可轻松得到2
//int main()
//{
//	int n = 0;
//	printf("请输入整数:>");
//	scanf("%d", &n);
//	output(n);
//
//	return 0;
//}
//递归是将一个大型复杂问题层层转换为一个与原问题相似的规模较小的问题来求解
//如果想不通，可以多画几个相同的被调用函数，将函数递归画成多个相同的函数一个一个的调用，
//一点一点画图运行，思考逻辑。

//11.递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//非递归方式
//void output(int n)
//{
//	int i = 1;
//	int num = 1;
//	for (i = 2; i <= n; i++)
//	{
//		num = num * i;
//	}
//	printf("%d", num);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	output(n);
//	return 0;
//}
//递归方式
//int output(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n * output(n - 1);
//}
//int main()
//{
//	int ret = 0;
//	int n = 0;
//	scanf("%d", &n);
//	ret=output(n);	 
//	printf("%d", ret);
//	return 0;
//}
//递归算法的关键思想是终止条件和递归的规律
//求1到n的和(递归来实现)
//转化为n+n-到1的和
//int count(int i)
//{
//	if (i == 1)
//		return 1;
//	else
//		return i + count(i - 1);
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret=count(i);
//	printf("和为:%d", ret);
//}
//12.strlen的模拟实现用递归和非递归方式分别实现
 
//int my_strlen(char* arr)
//{
//	int cnt = 0;
//	for (cnt = 0; *arr != '\0'; arr++)//+1其实没有赋值操作，指针指向位置没有改变
//	{                                 //而++具有赋值操作，指针指向位置依次增加一个字节
//		cnt++;
//	}
//	return cnt;
//}
//int main()
//{
//	char arr[] = {"bit"};
//	int len = my_strlen(arr);
//	printf("len=%d", len);
//	return 0;
//}
//递归方式
//int my_strlen(char* arr)
//{
//	if (*arr == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(arr + 1);
//	
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len=%d", len);
//	return 0;
//}
//13.字符串逆序（递归实现）将字符数组内容进行逆序排列
//指针-指针
//int my_strlen(char* arr)
//{
//	char* start = arr;
//	char* end = arr;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int my_strlen(char* arr)//没有使用库函数strlen
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;//交换两个变量需要一个中间变量tmp
//	int tmp = 0;
//	while (left<=right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}
//sizeof计算的是分配空间的实际字节数，strlen计算的是空间中字符的个数（不包括\0）
//求字符串的三种方法：
//1.计数器 2.函数递归 3.指针-指针求字符个数
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')当不满足循环条件时，end已经指向\0这个地址了，那么end-start结果即为数组元素个数
//	{
//		end++;
//	}
//	return end - start;
//}
//题目让用递归方法解决这个问题，不用循环交换首尾元素的方式
//int my_strlen(char* arr)
//{
//	char* start = arr;
//	char* end = arr;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if(my_strlen(arr+1)>=2)
//		reverse_string(arr + 1);	
//	arr[len - 1] = tmp;
//}
//abcdef 
//交换af+逆序bcde
//逆序bcde=交换be+逆序cd
 
//步骤为先把a暂存到tmp里，再把\0之前的那个元素放到首元素位置，然后先把最后元素的位置换成\0
//逆序中间字符串时，只需传首元素+1的地址即可，因为最后元素的位置被换成\0了
// 最后再把tmp中a的值放入最后元素的位置，也就是\0的位置
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}
//14.写一个递归函数DigitSum（n），输入一个非负整数，返回组成他的数字之和
//int DigitSum(unsigned int n)
//{	 
//	if (n > 9)
//		return  n % 10 + DigitSum(n / 10);
//	else
//		return n;
//}
// 
//int main()
//{
//	unsigned int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = DigitSum(n);
//	printf("ret=%d", ret);
//	return 0;
//}
//15.编写一个函数实现n的k次方，使用递归实现
//double Pow(int n, int k)
//{
//	//基本思路:n的k次方等于n×n的k-1次方
//	if (k <0)
//	{
//		return  (1.0 / (Pow(n, -k)));
//	}
//	else if(k==0)
//		return 1;	
//	else
//		return n * Pow(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, & k);
//	double ret = Pow(n, k);
//	printf("ret=%lf", ret);
//	return 0;
//}
//16.计算斐波那契数列
//递归和非递归分别实现求第n个斐波那契数
//1.递归法
//int fib(int n)
//{
//	if (n >= 3)
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", fib(n));
//	return 0;
//}
//2.非递归法
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	if (n >= 3)
//	{
//		int i = 3;
//		for (i = 3; i <= n; i++)
//		{
//			int  tmp = 0;
//			tmp = a;
//			a = b;
//			b = tmp + a;
//		}
//		return b; //迭代思想,每一轮将a的值赋值给中间变量tmp，再把上一轮b的值重新赋值给a，
//		          //那么你再次返回a+tmp的值时即为斐波那契的下一个数，这就是迭代法
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", fib(n));
//	return 0;
//}




































































