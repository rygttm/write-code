#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <search.h>
//һ������ָ������
//1.ָ��Ĵ�С��4��8���ֽڣ���32λ������64λ������
//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//arr����Ԫ�ص�ַ�ֽڴ�С�ڱ�������Ϊ8���ֽڣ�����sz=2��
//	printf("%d", sz);
//	//sizeofʵ�����ǻ�ȡ���������ڴ��еĴ���ռ䣬���ֽ�Ϊ��λ
//  //strlen�Ǽ����ַ�����
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}

//2.ָ���������͵ģ�ָ������;�����ָ��+-�����Ĳ�����ָ������ò�����ʱ���ܹ����ʿռ��С

//�����ַ�ָ��
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);//arr��ŵľ�����Ԫ�ص�ַ
//	printf("%s\n", pc);//pc��ŵ�Ҳ����Ԫ�ص�ַ�����Դ�ӡ���Ӧ��ͬ
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef";//"abcdef"��һ�������ַ���
//	//����д�����ǽ��ַ�����Ԫ�صĵ�ַ�浽p���棬ͨ��p����Ԫ�ص�ַ�����ǿ����ҵ������ַ���
//	//*p = 'w';//�����ַ����ǲ������ı��
//	printf("%s\n", p);
//	printf("%c\n", *p);//%c��ӡһ���ַ�
//	printf("%s\n", p);//����Ԫ�ص�ַ����ȥ���ɴ�ӡ�����ַ���������
//	return 0;
//}

//һ�������⣺
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";//������ͬ�����飬���ڴ���һ�������������ͬ�Ŀռ�
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";//��Ϊ�ǳ����ַ����������޸ģ������ڴ���ֻ����һ��
//	//if (arr1 == arr2)//����������Ԫ�ص�ַ	
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");
//	//}
//	if (p1 == p2)//ָ��ռ���ͬ	
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//ָ������������
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	int* parr[4];//�������ָ������� - ָ������
//	char* pch[5];//����ַ�ָ������� - ָ������
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

//��ϰһ�£�
//int* arr1[10];//����ָ�������
//char* arr2[4];//һ���ַ�ָ�������
//char** arr3[5];//�����ַ�ָ�������


//��������ָ�� - ָ��
//int main()
//{
//	//arr����Ԫ�ص�ַ
//	//&arr[0]����Ԫ�ص�ַ
//	//&arr������ĵ�ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	//int*p1[10];p1�Ⱥ�[]��ϣ������Ǵ��ָ�������
//	//int(*p2)[10];*p2�Ⱥͣ�����ϣ�˵��p2��һ��ָ�����������ָ����Ǵ�СΪ10�����͵����飬���Խ�����ָ��
//	//�����p��������ָ�룬ָ�������ÿ��Ԫ��
//	//����ָ����ָ�������ָ��
//	return 0;
//}
//
//int main()
//{
//	char* arr[5];//������һ���ַ�ָ������
//	char*(*pa)[5] = &arr;//*paӦ��ָ���ַ�ָ������
//	//pa��ָ����������֣�*��������pa�Ǹ�ָ�룬[5]��������paָ���������5��Ԫ�صģ�
//	//char*��������paָ��������Ԫ���������ַ�ָ��char*
//	return 0;
//}

//����ָ���ʹ��
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
//		printf("%d ",*(*pa+i));//*pa==arr��pa�ŵ���&arr,�����ò������൱�ڰ�&���ŵ�����
//	}
//	return 0;
//}
//�������ַ��������ʺ���������ָ��������ͨ���±���ʺ�ָ������ü��ɽ������

//����ָ���һ��ʹ�ó�����
//�������������ʽ
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
////����������ָ�����ʽ
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			//*(p+i)��ʵ�õ�������һ�е���Ԫ�صĵ�ַ
//			//+i��ʾ������������һ�е�Ԫ��
//			//printf("%d ", (*(p + i))[j]);//*(p+i)�õ���һ�е���������p�ŵľ���&arr��*p��Ϊarr
//			printf("%d ", p[i][j]);
//��ά����Ƚ�����*��p+i����ʵ�൱��p[i],*(p[i]+j)�൱��p[i][j]
//   	}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	//arr����������������Ԫ�ص�ַ����sizeof��arr����&arr��
//	print2(arr, 3, 5);
//	//��arr�����һά���飬ÿһ����һ��Ԫ�أ���ôarr���ǵ�һ�еĵ�ַ
//	return 0;
//}


//int arr[5];//arr����������ʣ�µ�int��[5]����������
//int* parr1[10];//parr1����������ʣ�µ����������ͣ���������һ����СΪ10��Ԫ�ص�ָ������
//int(*parr2)[10];//parr2��һ��ָ�룬ָ��int�͵�����
//int(*parr3[10])[5];//parr3��һ�����飬��������10��Ԫ�أ�ÿ��Ԫ�ض�������ָ�룬������ָ�룬ָ���	
//������5��Ԫ�أ�ÿ��Ԫ����int
// 
//int arr[10],arr[10]�����飬ÿ��Ԫ����int�͵�.�����int(*     )[5]�����������ÿ��Ԫ�ص�����

//�ܽ᣺
//��Ԫ�ص�ַ����ͨ�����ַ�ʽ���ﵽ��ӡ��������������
//1.ͨ����Ԫ�ص�ַ+���ֱ�����Ȼ���ٽ����ò���
//2.��Ԫ�ص�ַ�൱������������ô�Ϳ���ͨ���±���ʵķ�ʽ������������������

//�ܽ᣺
//1.����������������������������Ԫ�ص�����
//2.ָ��������־������ͣ�����ָ��ȥ�����֣�ʣ�µľ�������

//�ģ����������ָ�����
//1.һά���鴫��
//void test(int arr[])//ok? yes �������������ֿ���ʡ�ԣ�д��Ҳû��ϵ������Ҫд�������󵼱��ˣ�
//{}
//void test(int arr[10])//ok? yes
//{}
//void test(int*arr)//ok? yes
//{}
//void test2(int*arr[20])//ok? yes �������������ֿ���ʡ�ԣ�д��Ҳû��ϵ
//{}
//void test2(int**arr)//ok? yes ����ȥһ��ָ��ĵ�ַ���ö���ָ�����
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}

//2.��ά���鴫��
//void test(int arr[3][5])//ok? yes
//{}
//void test(int arr[][])//ok? no
//{}
//void test(int arr[][5])//ok? yes
//{}
//void test(int *arr)//ok? no!no!no!
//{}
//void test(int*arr[5])//ok? no!no!no,����ȥ���ǵ�ַ��Ӧ����ָ�������գ��������������
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

//3.һ��ָ�봫��
//void print(int* p, int sz)//���յ�ַ����ָ��������
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
//	//һ��ָ��p(��߷�����Ԫ�ص�ַ)����������print
//	return 0;
//}

//˼������һ�������Ĳ���������һ��ָ���ʱ�򣬺����ܽ���ʲô�����أ�
//1.���Խ��ձ����ĵ�ַ
//2.Ҳ���Խ��մ�ű�����ַ��һ��ָ��

//4.����ָ�봫��
//void test(int** ptr)
//{
//	printf("num=%d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);//�����һ��ָ���ַ�Ķ���ָ�룬�ö���ָ�����
//	test(&p);//��һ��ָ��ĵ�ַ���ö���ָ�����
//	return 0;
//}

//˼������һ�������Ĳ��������Ƕ���ָ���ʱ�򣬺����ܽ���ʲô�����أ�
//1.���Խ���һ��ָ��ĵ�ַ
//2.���Խ��մ��һ��ָ���ַ�Ķ���ָ��
//3.���Խ���ָ�����������������ʱ���������������д�ŵ�һ��ָ��ĵ�ַ

//�壺����ָ��
//����ָ�� - ָ�������ָ��
//����ָ�� - ָ������ָ��

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	//&arr - ��������ĵ�ַ
//	//arr - ��Ԫ�صĵ�ַ
//	printf("%d\n", Add(a, b));
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	//���ִ�ӡ��ʽ�ĵ�ַ��ͬ��˵��&������ �� ������ ���Ǻ����ĵ�ַ
//	int(*p)(int, int) = &Add;
//	//����ָ��p���Ǵ�ź�����ַ��һ��ָ��
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
//	p("I LOVE YOU");*��û�������
//
//	return 0;
//}

//�Ķ�������Ȥ�Ĵ��룺
//1.(*(void (*)())0))();
////void(*)()��һ������ָ�����ͣ���0ǿ��ת��Ϊ ����ָ�����ͣ���ô0���Ǻ����ĵ�ַ��
////Ȼ�����0��ַ���ĸú�����Ҳ���ǽ��н����ò����������д��ݲ������������ұ��ǣ���
////���䣺����ָ��ָ����� �޷������� �޺������� �� ����
//2.void(*signal(int, void(*)(int)))(int);
////����һ���������� Ϊ���� �� ����ָ�� ���͵�signal������������������ķ��������Ǻ���ָ������
////�����������signal������һ������
////�����������м򻯣�
//typedef void(*pfun_t)��int��+ void(*signal(int, void(*)(int)))(int) ==  pfunt signal(int, pfunt)
//typedf unsigned int uint;//���ֲ�ͬ�����¶��庯�����ķ�ʽ



//#������ں���ָ������#
//int (*p)(int a, int b);  //p��һ��ָ������ָ�������������������Ϊ����
//int* p(int a, int b);     //p�Ǻ�������������������Ϊ����ָ��
//����ָ��������õ���;֮һ�ǰ�ָ����Ϊ�������ݵ�����������

// int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*p)(int, int) = &Add;//p��Add��һ����
//	printf("%d\n", p(2, 3));
//	//��Ϊp��Addһ������ôд������Ҳ����
//	printf("%d\n", Add(2, 3));//ԭ���������õ�д��
//
//	printf("%d\n", (*p)(2, 3));
//	return 0;
//}

//��������ָ������
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
//	//pa���Դ��Add,mul,div,sub�����У�������Ҫһ������ָ�����飬����Ϊ4��ָ������ַ��ָ��
//	int(*parr[4])(int, int) = { Add,sub,mul,div };
//	//ȥ���������ͷ������ʣ�µľ�������Ԫ�����ͣ���ô���;��Ǻ���ָ��
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}

////����⣺
//char*my_strcpy(char*dest,const char*src)
////1.дһ������ָ��pf���ܹ�ָ��my_strcpy
////2.дһ������ָ������pfArr���ܹ����4��my_strcpy�����ĵ�ַ
//
//char*(*pf)(char*,const char*)
//char*(*pfArr[4])(char*,const char*)
//

//����ָ�������ʹ�ð���
//void menu()
//{
//	printf("####################\n");
//	printf("### 1.add  2.sub#####\n");
//	printf("### 3.mul  4.div#####\n");
//	printf("##### 0.exit ########\n");
//	printf("#####################\n");
//}
//int add(int x, int y)
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
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>\n");
//		scanf("%d", &input);
//		 
//		switch (input)
//		{
//		case 1:
//			printf("����������������:>\n");
//			scanf("%d %d", &x, &y); 
//			printf("%d\n", add(x, y));	 
//			break;
//		case 2:
//			printf("����������������:>\n");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", sub(x, y));
//			break;
//		case 3:
//			printf("����������������:>\n");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", mul(x, y));
//			break;
//		case 4:
//			printf("����������������:>\n");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", div(x, y));
//			break;
//		case 0:	
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����,����ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//##���ʵ�ֹ��ܽ϶�ʱ��ʹ��case���ͻ�ȽϷ��ӣ��������ǿ�����������
// void menu()
//{
//printf("####################\n");
//printf("### 1.add  2.sub#####\n");
//printf("### 3.mul  4.div#####\n");
//printf("##### 0.exit ########\n");
//printf("#####################\n");
//}
//int add(int x, int y)
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
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			int(*parr[])(int, int) = { 0,add,sub,mul,div };
//			//�����Ѻ���ָ���������ת�Ʊ�
//			printf("%d\n", parr[input](x, y));
//		}
//		else if (input == 0)
//		{
//			printf("�˳�����\n");
//		}
//		else
//		{
//			printf("ѡ�����,������ѡ��\n");
//		}
//	} while (input);
//	return 0;
//}

//�ߣ�ָ����ָ�������ָ��
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//��������������������ָ�룬�ͱ������ָ��
//
//	int(*pfarr[4])(int, int);//pfarr��һ������ָ������
//	int(*(*ppfarr)[4])(int, int) = &pfarr;//������ͬ��������������ָ�룬��Ϊָ����ָ�������ָ��
//	//ppfarr��һ������ָ�룬ָ��ָ���������4��Ԫ�أ�ÿ��Ԫ���Ǻ���ָ��int(*)(int ,int )
//	//ȥ��*p��*pָ��ķ������ʣ�µľ���ָ��������Ԫ������
//	return 0;
//}

//�ܽ᣺��Ҫд��ָ����ָ�������ָ�룬��ʵֻҪ���������滻Ϊ��ָ�룩����

//�ˣ�5������ı���
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int* arr[10] = { NULL };
//	//ָ������
//	int* (*p)[10] = &arr;
//	//����ָ�� ����ָ��pָ�������Ԫ�ض���int*
//	int(*pf)(int, int) = Add;
//	//����ָ�� ����ָ��pָ��ĺ�����������Ϊ����int��������������Ϊint
//	int(*pa[])(int, int) = { Add };
//	//����ָ������ ȥ�����������������ʣ�µľ�������Ԫ�����ͣ�����Ϊ����ָ��
//	int(*(*parr)[])(int, int) = &pa;
//	//ָ����ָ�������ָ�� parrָ��������СΪ[],Ԫ������Ϊ����ָ��
//	return 0;
//}

//�ţ��ص�������ͨ������ָ����õĺ�����
//����ͨ��Calc�������ջص�������ַ�������õ�ַ���ʻص�������ͨ�����ַ�������ʵ�ֶ���
//����������һ��������ʵ��

//�������scanf��printf���������case����г��֣����������ε����⣬��ô���Ǳ���Է�װһ������
//��ʵ��case�еĹ���
//void menu()
//{
//	printf("####################\n");
//	printf("### 1.add  2.sub#####\n");
//	printf("### 3.mul  4.div#####\n");
//	printf("##### 0.exit ########\n");
//	printf("#####################\n");
//}
//int add(int x, int y)
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
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������:>\n");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>\n");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			Calc(add);
//			break;
//		case 2:
//			Calc(sub);
//			break;
//		case 3:
//			Calc(mul);
//			break;
//		case 4:
//			Calc(div);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����,����ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//�ص�������������
//void print( const char* str)
//{
//	printf("%s\n", str);
//}
//void test(void(*p)( const char*))
//{
//	p("I LOVE YOU");//���ַ������ַ���ַ����ȥ��
//}
//int main()
//{
//	test(print);
//	return 0;
//}
//print������δ�������е��ã�����ͨ��test��������ָ��print�����ĵ�ַ����ͨ��ָ��print������ָ��
//���е���print������
//���ֻ��Ʊ���Ϊ�����ص��Ļ��ƣ�print��������Ϊ�ص�����

//�ص�����������ʹ�ó�����
//qsort - ���������������͵�����
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	void* pf = &a;//������ָ��
//	//void* ���͵�ָ�� ���Խ����������͵ĵ�ַ
//	//void*����ָ���ǲ����Խ��н����õģ���Ϊ�޷�ȷ��������ʱ�ܹ����ʼ����ֽ�
//	//void*����ָ�벻�ܽ���+-�����Ĳ���
//	//�����ǿ���ͨ��ǿ������ת���ķ�ʽ����������Ĳ���
//	return 0;
//}

//�Լ�ʵ��ð����������
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
{
	//�Ƚϵ�ʱ��֪��Ԫ�����ͣ�����cmpָ��ָ��ĺ����Ĳ���������void* void*
	int i = 0;
	//ð�����������
	for (i = 0; i < sz - 1; i++)
	{
		//ÿһ�˱ȽϵĶ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�صıȽ�
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			//�ص�����cmpʱ������ֵ����0�������Ԫ�ؽ���
			{
				//����Ԫ��
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
struct stu
{
	char name[20];
	int age;
};

void print1(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void print2(float f[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
}

int cmp_int( void* elem1,  void* elem2)
{
	return *(int*)elem1 - *(int*)elem2;//����ֵ����0���ͽ��н���
}
int cmp_float( void* elem1, void* elem2)
{
	return ((int)(*(int*)elem1 - *(int*)elem2));
}
int cmp_stu_by_age( void* elem1,  void* elem2)
{
	return ((struct stu*)elem1)->age - ((struct stu*)elem2)->age;
}
void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, 4, cmp_int);
	print1(arr, sz);
}
void test2()
{
	float f[] = { 9.0,8.0,7.0,6.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	bubble_sort (f, sz, 4, cmp_float);
	print2(f, sz);
}
void test3()
{
	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",40} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	
}
int main()
{
	test1();
	printf("\n");	
	test2();
	test3();
	return 0;
}

//qsort����
//��һ�����������������Ԫ�صĵ�ַ
//�ڶ��������������������Ԫ�ظ���
//�����������������������ÿ��Ԫ�صĴ�С-��λ���ֽ�
//���ĸ��������Ǻ���ָ�룬���յ���Ҫ�Ƚ�����Ԫ�صĺ����ĵ�ַ���������ʹ�����Լ�ʵ�֣�
//            ����ָ��ָ��ĺ��������������Ǵ��Ƚϵ�����Ԫ�صĵ�ַ





































































































































































































































