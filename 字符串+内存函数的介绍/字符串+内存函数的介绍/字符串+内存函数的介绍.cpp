#define _CRT_SRCURE_NO_WARNINGS 1
#pragma  warning (disable:4996) 

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <ctype.h>
//1.���ַ�������
//strlen
// 
//2.���Ȳ������Ƶ��ַ�������
//strcmp
//strcpy
//strcat
// 
//3.���������Ƶ��ַ�������
//strncpy
//strncat
//strncmp
// 
//4.�ַ�������
//strstr
//strtok
// 
//5.������Ϣ����
//strerror
//����Ķ����ַ�������
// 
//6.�ַ���������
// 
//7.�ڴ��������
//memcpy
//memset
//memcmp
//memmove

//ǰ�ԣ�c�����ж��ַ����ַ����Ĵ������Ƶ��������c���Ա�����û���ַ������͵ģ��ַ���ͨ�����ڳ����ַ���
//���ַ������С��ַ�����������Щ���������޸ĵ��ַ�������

//һ��strlen���������ַ������ȣ�
//���ܣ�strlen���Ǵ���Ԫ�ص�ַ��ʼ��������ֱ��\0ֹͣ

//1.�������ķ���
//2.�ݹ�ķ���
//3.ָ��-ָ��ķ���
//int my_strlen(const char* str)
//{
//	if (*str != 0)
//		return (1 + my_strlen(++str));
//	//str++����ȥ��ʼ�����ַ�I�ĵ�ַ����Ϊ��ʹ�ã��´�ʹ�òŻ�++�������´β�ʹ�ã�һֱ�ٴ���
//}
//int main()
//{
//	int len1 = my_strlen("I love you");
//	int len2 = strlen("love");
//	//�⺯��strlen����������size_t
//	//typedef unsigned __int64 size_t;���޷��������ض���Ϊsize_t
//	//size_t==unsigned int
//	printf("%d\n", len1);
//	return 0;
//}

//����strcpy�������ַ���������
//char* my_strcpy(char* dest, const char* src)//�⺯��strcpy�ķ���������char*
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//	//����Ŀ�Ŀռ����ʼ��ַ
//	
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//
//	//�⺯��strcpy���\0Ҳ������ȥ
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}
//�⺯��ʹ��ʱ��ע������
//1.Դ�ַ���������\0����
//char arr[] = { 'a','b','c' };
//2.Ŀ��ռ��㹻�󣬵��ܷŵ���Դ�ַ���

//����strcat�������ַ���׷�ӣ�
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//1.�ҵ�Ŀ�ĵ��ַ�����\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//2.׷��
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
//	//my_strcat�����������ʵ����strcat�⺯����ʵ��ԭ��
//	//�Լ�׷���Լ�ʱ��srcָ����Զ�޷�ָ��\0���������Զ�޷�ͣ��������ô����ͻ����
//	printf("%s\n", my_strcat(arr1, arr2));
//
//	return 0;
//}
//ע�⣺�ڽ�Դͷ���ַ���׷�ӵ�Ŀ�ĵ�ʱ��Ŀ�ĵصĿռ�Ҫ�㹻��
 
//�ģ�strcmp�������ַ����Ƚϣ�
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "sqwer";
//	//��һ���ַ�����Ϊ���ʽ����ʱ�����Ľ�������ַ��ĵ�ַ
//	if ("abcdef" == "sqwer")
////�������ַ����Ľ���ֱ���a��s�ĵ�ַ���ǿ϶��ǲ���ȵ�
//		printf("���");
//	else
//		printf("�����");
//	 
//	return 0;
//}
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "sqwer";
//	int ret = (strcmp(p1, p2));
////strcmp�ȵ������ַ���ascll��ֵ.������ַ���ascll��ֵ��ͬ���Ǿͱ���һ���ַ�
//	printf("ret=%d\n", ret);
//	return 0;
//}
//��һ���ַ������ڵڶ����ַ��������ش���0�����֣�vs����������1����ͬ�ı�����������ܲ�ͬ
//��һ���ַ���С�ڵڶ����ַ���������С��0�����֣�vs����������-1����ͬ�ı�����������ܲ�ͬ
//��һ���ַ������ڵڶ����ַ��������ص���0�����֣�vs����������0����ͬ�ı�����������ܲ�ͬ

//my_strcmp����ʵ��
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
////Ϊʲô˵�������������ǳ��Ȳ������Ƶ��ַ�����������Ȼarr1����Ĵ�С�������hello bit������Ȼ��
////���ն˿���hello bit����Ȼ�����Ѿ����ˣ�����Ӱ��strcpy����һ��Ҫ��\0������ȥ��ֻ�п�����\0��
////��������Ż�ֹͣ
//	printf("%s", arr1);
//	return 0;
////����strcpy�����ǲ���ȫ��
//}

//�壺strncpy����
//int main()
//{
//	char arr1[10] = "abcdefgh";
//	char arr2[] = "bit";
//
//	strncpy(arr1, arr2, 6);
//	//��arr2����ʱ����������׷��\0�Ž�ȥ
//	return 0;
//}

//����strncat����
//int main()
//{
//	char arr1[30] = "hello**************";
//	char arr2[] = "bit";
//	strncat(arr1, arr2, 6);
//	//����������ֱ��ַ��������Ǿ�ֻ���ַ�������ȥ���ٲ���\0��������
//	return 0;
//}
//
//int main()
//{
//	char arr1[30] = "hello**************";
//	char arr2[] = "bit";
//	strncat(arr1, arr2, 2);
//	//����������ֱ��ַ����̣��Ǿ�ֻ����Ӧ��С���ַ�������ȥ���ٲ���\0��������
//	return 0;
//}

//��:strncmp����-�ַ����Ƚ�
//int main()
//{
//	const char*p1 = "abcdzf";
//	const char* p2 = "abcqwer";
//	/*int ret=strcmp(p1, p2);*/
//	int ret = strncmp(p1, p2, 5);
//	//d>q,ֻҪ�㴫���ڵ���4�����֣����ؽ������-1��Ҳ����С��0������
//	printf("ret=%d\n", ret);
//	return 0;
//}

//�ˣ�strsrt����-�����ַ����ĺ���
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
//		s2 = p2;//һ���Ҳ�����������������һ���ַ�Ϊ������½����ж�
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
//			return cur;//�ҵ��ִ�
//		}
//		cur++;
//	}
//	return NULL;//�Ҳ����Ӵ�
//}
//int main()
//{
//	const char* p1 = "abbbcdef";
//	const char* p2 = "bbc";
//	const char* ret=my_strstr(p1, p2);
//	//��������ַ����������ַ���ַ����֮���ؿ�ָ��
//	if (ret == NULL)
//		printf("�ִ�������\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}
//NULL-��ָ��
//Null/NUL�Ƕ���\0����˼

//�ţ�strtok����
//int main()
//{
//	//192.168.31.121
//	//192 168 31 121
//	char arr[] = "wang.ya.nan2022@outlook.com";
//	const char* p = "@.";
//	//wang ya nan2022 outlook com
////char* strtok(char* str, const char* sep);
////sep�����Ǹ��ַ����������������ָ������ַ�����
//	strtok(arr, p);
//
//
//	return 0;
//}
//strtok�Ĺ���ԭ�����ȥ�зָ������ַ������У��ҷָ�����Ȼ��ѷָ����ĳ�\0���ٰ��ַ��ָ���ǰ����ַ���ַ���з���
//1.strtok�����ĵ�һ��������ΪNULL���������ҵ�str��һ���ָ�����strtok���������������ַ�����λ��
//2.strtok�����ĵ�һ������ΪNULL����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ�����
//3.����ַ����в����ڸ���ı�ǣ��򷵻�NULLָ��
//int main()
//{
//	char arr[] = "wang.ya.nan2022@outlook.com";
//	const char* p = "@.";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);//��arr������buf��и�buf���ַ�������
//
//	char* ret = strtok(buf, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
////strtok��ѷָ����ҵ����Ұ����޸�Ϊ\0���ڰ����ַ���ַ���أ����Դ�ӡ�ַ���%sʱ��ֻ�ܴ�ӡһ����
//	return 0;
//}
//������strtok����������д��
//int main()
//{
//	char arr[] = "wang.ya.nan2022@outlook.com";
//	const char* p = "@.";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);//��arr������buf��и�buf���ַ�������
//
//	char* ret = NULL;
//	for (ret = strtok(buf, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	//1.forѭ����һ���ֵĴ���ֻ�ᱻ����һ�Σ��ܺý���ˣ��Һ�������ָ����ظ�����
//	//2.forѭ��ִ�����ʼ���Ĳ��ֺ󣬻�һֱѭ���ڶ����ֺ͵������ֵĲ�������
//	return 0;
//}

//ʮ��strerror����-������Ϣ����
//���ش���������Ӧ�Ĵ�����Ϣ
//int main()
//{
//	//ÿһ���������Ӧ��Ӧ�Ĵ�����Ϣ
//	char* str = strerror(errno);
//	//errno��һ��ȫ�ֵĴ�����ı���
//	//��c���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//	printf("%s\n", str);
//	 
//	return 0; 
//}

//ʮһ���ַ�ת������
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

//ʮ�����ڴ溯��-memcpy-���ֺ������Բ���������������-�����͡����͡��ṹ������
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
	//void* memcpy(void* dest, const void* src, size_t count);�����������ǿ����ֽ���
	int arr1[] = { 1,2,3,4,5 };
	int arr2[5] = { 0 };
	//strcpy(arr2, arr1);
//1.�������뽫arr1�������ݿ�����arr2ʱ��strcpy�������������ģ���������Ӵ��ڿ��Ļ����ǿ��Դ�1��ȥ��
//2.01000000 02000000 03000000 04000000 05000000-�ڴ���arr1������С�˴洢ģʽ�����������
//��strcpy���01��ȡ����Ȼ���ٶ�ȡ00Ҳ����\0��ô�Ϳ���ֹͣ��

	struct s arr3[] = { {"����"},{20} };
	struct s arr4[] = { "����",{30} };
	my_memcpy(arr2, arr1, sizeof(arr1));
	my_memcpy(arr4, arr3, sizeof(arr3));
	return 0;
}

















































































































































































