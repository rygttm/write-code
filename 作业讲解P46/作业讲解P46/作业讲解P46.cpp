#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>
//1.дһ�����������ַ���������
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
//	//scanf("%s", arr);//scanf�ٶ����ո�ʱ����ֹͣ
//	fgets(arr,20,stdin);
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}
//û��Ҫ���ַ�����Ԫ�ظ�������Ϊ������strlenȥ���ַ�������
//assertһ������ȷ�ϱ����ú�����������ȷ��

//2.�������
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰn��֮�ͣ�����a��һ������
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = a;
//	for (i = 0; i < n; i++)//ǰn��м��ѭ���Ӽ���ô
//	{
//
//		sum += a;
//		a = a * 10 + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//3.ˮ�ɻ�������ӡ1-100000֮�������������
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ֲ������
//		//1.����n��λ��
//		int n = 1;
//		int sum = 0;//��ѭ���ڲ�����sum=0
//		int tmp = i;//i��ֵ���ܱ��ı䣬������Ҫ���һ��
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//123
//		//123%10!=0  n++
//		//123/10
//		//12%10!=0  n++
//		tmp = i;
//		//2.����i��ÿһλ��n�η�֮��
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);//ǿ������ת������double��Ϊint
//			tmp /= 10;
//		}
//		//3.�ж�i�Ƿ������ĺ���ȣ�����������
//		if (i == sum)
//			printf("%d ", i);
//	}
//	return 0;
//}

//4.��ӡ����
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************  //�ܹ�13��
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
//int main()
//{
//	//��ӡ�ϰ벿��
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//�����ӡ�ϰ벿�ֵ���������������
//	for (i = 0; i < line; i++)
//	{
//		//���沿�ִ�ӡÿһ�е�����
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
//	//��ӡ�°벿��
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

//5.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
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

//6.ģ��ʵ�ֿ⺯��strcpy
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

//7.ģ��ʵ�ֿ⺯��strlen
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

//8.��������ʹ����ȫ����λ��ż��ǰ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
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
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//	//����߿�ʼ��ż��
//	while (left < right)
//	{
//		while ((left<right)&&(arr[left] % 2 == 1))//�������ȫ��������left++һֱ���У���Խ�����
//		{
//			left++;
//		}
//		//���ұ߿�ʼ������
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
//�㷨˼�룺 
//1.����߿�ʼ��һ��ż��
//2.���ұ߿�ʼ��һ������
//3.�����ǽ��н���










































































































































































































































































































































