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










































































































































































































































































































































