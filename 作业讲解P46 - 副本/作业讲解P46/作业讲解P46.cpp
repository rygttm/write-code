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

//9.��������ʲô��
//int main()
//{
//	unsigned char a = 200; 
//	unsigned char b = 100;
//	unsigned char c = 0;
//	//unsigned char���ͷ�Χ��0-255
//	//00000000000000000000000011001000
//	//���ʹ浽char��a�����ضϣ�11001000
//	//00000000000000000000000001100100
//	//���ʹ浽char��b�����ضϣ�01100100
//
//	//a-11001000
//	//b-01100100
//	//00000000000000000000000011001000-�����������a
//	//00000000000000000000000001100100-�����������b
//	//00000000000000000000000100101100-a+b��Ľ��
//	//��a+b�Ľ���浽char��c�з����ض�
//	//00101100-c
//	c = a + b;//a+b������������
//	
//	printf("%d %d", a + b, c);
//	//a+b��ӡ�з��ŵ�ʮ���ƣ����λΪ����λ����Ϊa+b����������ԭ�뷴�벹����ͬ�������ڴ��е�a+b���з��ŵĲ���
//	return 0;
//	//��ӡ%d����Ϊ��c���ڴ��еĴ�����ʽ���з��ŵĲ���
//}
//������������
//�з�������λ������λ���޷�������λ��0

//����
//int main()
//{
//	int a = -1;
//	printf("%d\n", a);//��Ϊa���ڴ��еĴ洢��ʽ���з��ŵĲ��룬��ӡʱ��ת����ԭ����д�ӡ
//	printf("%u\n", a);//��Ϊa���ڴ��еĴ洢��ʽ���޷��ŵĲ��룬�޷�����ԭ�뷴�벹����ͬ�����ڴ�洢��ʽ���д�ӡ
//	return 0;
//}

//10:��32λ���ģʽ�������ϱ���b���ڣ�
//int main()
//{
//	unsigned int a = 0x1234;
//	//a������Էŵ���0x1234,�洢���ڴ�ʱ���Ὣʣ���ֽ���0���䣬0x00 00 12 34
//	//0001001000110100
//	//��������ڴ��еķ�����ʽΪ00 00 12 34          
//	unsigned char b = *(unsigned char*)&a;
//	//�ɵ͵�ַ��ߵ�ַ��ȡ����ȡ��00������ģʽ�½��ӦΪ0x00
//	printf("%c\n", b);
//	return 0;
//}

//11.
//int main()
//{
//	char a[1000] = { 0 };//�����ַ���������
//	//-128-->127
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}

//12.����Ļ�ϴ�ӡ�������
//    1
//   1 1
//  1 2 1
// 1 3 3 1
//1 4 6 4 1
//������������
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)//���ѭ����ӡ��
//	{
//		for (j = 0; j <=i; j++)//�ڲ�ѭ����ӡ��
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
//�����ѭ������ı��������ݣ������ѭ�������ӡ�������ݣ�ʵ��������ǵĴ�ӡ

//13.�����֣�����⣩
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ���:
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�

//��ʱ��֪ʶ�㲹�䣺 
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

//ǰ�᣺����˵�滰������˵�ٻ�
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

//14.�ҹ�����ʱ��ῼ
//�������⣺36ƥ��6���ܵ���û�м�ʱ����������ȷ����36ƥ�е�ǰ����
//�������ٱ�������
// 
//�������⣺25ƥ��5���ܵ���û�м�ʱ����������ȷ����25ƥ�е�ǰ����
//�������ٱ�������
// 
//�������⣺��һ���㣬���ʲ����ȣ�����ÿһ����ȼ���꣬ǡ����һ��Сʱ
//���������㣬����ȷ��һ��15���ӵ�ʱ���

//--˼ά��--������

//15��Ŀ���ƣ�
//������
//��Ŀ���ݣ�
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
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

//16.����ĵ�ַӦ�÷�������ָ������
//17.���ʲô��
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
//������ͬ���������ڴ��еĿռ��ǲ�ͬ��
//�����ַ����ǲ��ܸı�ģ�������û�б�Ҫ���ڴ������´�һ���ַ���,��������������ַ�������ȫ��ͬ��

//18.
//int*fun(int a,int b)    ��������
//int(*)fun(int a,int b)  �﷨�ʹ����ˣ�û������д��
//int(*fun)(int a,int b)  ����ָ��
//(int*)fun(int a,int b)  �����������͵�һ��д����ͬ

//19.
//int(*  (*F)(int ,int)   )(int)
//����ָ��Fָ��ĺ����Ĳ���������int������������һ������ָ�룬ָ��ĺ����Ĳ�����int������������int

//20.
//int(*(*p)[10])(int*)
//������һ��ָ�룬��ָ��ָ�������Ԫ�ظ���Ϊ10��ÿ��Ԫ�������Ǻ���ָ�룬ָ��ָ��ĺ���������int*������������int

//21.
//int main()
//{
//    int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//    int* ptr1 = (int*)(&aa + 1);
//    int* ptr2 = (int*)(*(aa + 1));
////aa+1�õ����ǵڶ�������ĵ�ַ���������õ��ڶ��е����������ڶ��е��������ִ�����ǵڶ�����Ԫ�صĵ�ַ
////*(aa+1)==arr[1]
//    printf("%d %d", *(ptr1 - 1), *(ptr2 - 1));
//    return 0;
//}

//22.��Ŀ���ƣ�
//�ַ�������
//��Ŀ���ݣ�
//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//1.������ⷨ��
//void left_move(char* arr, int k)
//{
//    assert(arr);//arr�ǿ�ָ��Ļ��Ǿ���0��arr���ǿ�ָ��Ļ��Ǿ��Ƿ�0������0�ͻᱨ��
//    int i = 0;
//    int len = strlen(arr);
//    for (i = 0; i < k; i++)
//    {
//        //����תһ���ַ�
//        char tmp = *arr;
//        //�Ѻ��������Ԫ��ͨͨŲ��ǰ��
//        int j = 0;
//        for (j = 0; j < len-1; j++)
//        {
//            *(arr + j) = *(arr + j + 1);
//        }
//        //�ѵ�һ��Ԫ�طŵ������
//        *(arr + len - 1) = tmp;
//    }
//}
//2.������ת��
//abcdef
//ba fedc
//���巴תcdefab
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
//    reverse(arr,arr+k-1);//�������
//    reverse(arr+k,arr+len-1);//�����ұ�
//    reverse(arr,arr+len-1);//��������
//}
//int main()
//{
//    char arr[] = "abdcef";
//    left_move(arr, 2);
//    printf("%s\n", arr);
//
//    return 0;
//}

//23.��Ŀ���ƣ�
//�ַ�����ת���
//��Ŀ���ݣ�
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
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
//    reverse(arr,arr+k-1);//�������
//    reverse(arr+k,arr+len-1);//�����ұ�
//    reverse(arr,arr+len-1);//��������
//}
//int is_left_move(char* s1, char* s2)
//{
//	//�����������н�����бȽϣ����Ƿ��������Ľ��
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);//ÿ������תһ����ѭ��������ת������ѭ��һ�αȽ�һ��
//        int ret = strcmp(s1, s2);
//        if (ret == 0)
//            return 1;
//	}
//    return 0;//forѭ������֮����Ȼû��һ����ȵģ���ôs2�Ͳ��������Ľ��
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

 















































































































































































































































































