#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
#include <string.h>
//1.��һ������������1�ĸ���
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
//	printf("����������:>\n");
//	scanf("%d", &i);
//	ret = find(i);
//	printf("1�ĸ���Ϊ��%d\n", ret);
//	return 0;
//}
//2.��������в�ͬλ�ĸ���
//���ʵ�֣�����int�����Ķ����Ʊ���У��ж��ٸ�λ��bit����ͬ
//int get_different_bit(int m, int n)
//{
//	int i = 0;
//    i = m ^ n;//��mn��λ������ý����1�ĸ�����Ϊ���ٸ���ͬ�ı���λ
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
//	scanf("%d%d", &m, &n);//scanf""������ֻ����%d��ǧ��Ҫ����������
//	ret=get_different_bit(m, n);
//	printf("%d\n", ret);
//	return 0;
//}
//3.��ӡ�����Ƶ�����λ��ż��λ
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//void print(int m)
//{
//	int i = 0;
//	//��ӡż��λ
//	printf("��ӡż��λ:>");
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
//	//��ӡ����λ
//	printf("��ӡ����λ:>");
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
//4.�����������������ݣ�����������ʱ����
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
//��Ȼ���ý�����ʱ�����������ּ�����ܻᵼ��Խ��:
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
//5.��ʹ���±�ķ�ʽ����ӡ�������ݣ���ָ����ʵ�ִ�ӡ
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
//6.��������ݹ麯�������ú���Fun��2��������ֵ�Ƕ���
//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
//��һ�Σ�n==2������2*Fun��3��
//�ڶ��Σ�n==3������2*Fun��4��
//�����Σ�n==4������2*Fun��5��
//�����Σ�n==5������2
//����Ϊ16
//7.�ݹ����һ�����������������������������ʱ���ݹ�㲻�ڼ���
//8.�ݹ���̫������ջ��������
//9.����9��ӡ9*9�ĳ˷��ھ�������12��ӡ12*12�ĳ˷��ھ���
//void print_table(int n)
//{
//	int i = 0;
//	//����ѭ��Ϊ��
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		//����ѭ��Ϊÿ��Ҫ��ӡ������
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i * j);
//			 
//		}
//		printf("\n");
//	}
//}
////d��ʾ���������3��ʾ���������ռ3���ַ���λ�á�
////- �ű�ʾ���뷽ʽ��������롣����� + �Ż��߲�д����ʾ�Ҷ��롣
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}
//10.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//void output(int n)
//{
//	 
//	if (n > 9)
//	{
//		output(n / 10);//1234����9����ô���ȴ�ӡ123������1234/10������output������123��ӡ����
//	}                  //Ȼ���ٽ�1234%10����4��ӡ�����������������
//	printf("%d ", n%10 );
//}
////print(1234)
////print(123) 4   ����ܰ�123��ӡ����Ļ�ϣ�ֻҪ��%10�Ϳ����ɵõ�4
////print(12) 3 4  ����ܰ�12 ��ӡ����Ļ�ϣ�ֻҪ��%10�Ϳ����ɵõ�3
////print(1) 2 3 4 ����ܰ�1  ��ӡ����Ļ�ϣ�ֻҪ��%10�Ϳ����ɵõ�2
//int main()
//{
//	int n = 0;
//	printf("����������:>");
//	scanf("%d", &n);
//	output(n);
//
//	return 0;
//}
//�ݹ��ǽ�һ�����͸���������ת��Ϊһ����ԭ�������ƵĹ�ģ��С�����������
//����벻ͨ�����Զ໭������ͬ�ı����ú������������ݹ黭�ɶ����ͬ�ĺ���һ��һ���ĵ��ã�
//һ��һ�㻭ͼ���У�˼���߼���

//11.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//�ǵݹ鷽ʽ
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
//�ݹ鷽ʽ
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
//�ݹ��㷨�Ĺؼ�˼������ֹ�����͵ݹ�Ĺ���
//��1��n�ĺ�(�ݹ���ʵ��)
//ת��Ϊn+n-��1�ĺ�
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
//	printf("��Ϊ:%d", ret);
//}
//12.strlen��ģ��ʵ���õݹ�ͷǵݹ鷽ʽ�ֱ�ʵ��
 
//int my_strlen(char* arr)
//{
//	int cnt = 0;
//	for (cnt = 0; *arr != '\0'; arr++)//+1��ʵû�и�ֵ������ָ��ָ��λ��û�иı�
//	{                                 //��++���и�ֵ������ָ��ָ��λ����������һ���ֽ�
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
//�ݹ鷽ʽ
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
//13.�ַ������򣨵ݹ�ʵ�֣����ַ��������ݽ�����������
//ָ��-ָ��
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
//int my_strlen(char* arr)//û��ʹ�ÿ⺯��strlen
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;//��������������Ҫһ���м����tmp
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
//sizeof������Ƿ���ռ��ʵ���ֽ�����strlen������ǿռ����ַ��ĸ�����������\0��
//���ַ��������ַ�����
//1.������ 2.�����ݹ� 3.ָ��-ָ�����ַ�����
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')��������ѭ������ʱ��end�Ѿ�ָ��\0�����ַ�ˣ���ôend-start�����Ϊ����Ԫ�ظ���
//	{
//		end++;
//	}
//	return end - start;
//}
//��Ŀ���õݹ鷽�����������⣬����ѭ��������βԪ�صķ�ʽ
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
//����af+����bcde
//����bcde=����be+����cd
 
//����Ϊ�Ȱ�a�ݴ浽tmp��ٰ�\0֮ǰ���Ǹ�Ԫ�طŵ���Ԫ��λ�ã�Ȼ���Ȱ����Ԫ�ص�λ�û���\0
//�����м��ַ���ʱ��ֻ�贫��Ԫ��+1�ĵ�ַ���ɣ���Ϊ���Ԫ�ص�λ�ñ�����\0��
// ����ٰ�tmp��a��ֵ�������Ԫ�ص�λ�ã�Ҳ����\0��λ��
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}
//14.дһ���ݹ麯��DigitSum��n��������һ���Ǹ����������������������֮��
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
//15.��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
//double Pow(int n, int k)
//{
//	//����˼·:n��k�η�����n��n��k-1�η�
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
//16.����쳲���������
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//1.�ݹ鷨
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
//2.�ǵݹ鷨
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
//		return b; //����˼��,ÿһ�ֽ�a��ֵ��ֵ���м����tmp���ٰ���һ��b��ֵ���¸�ֵ��a��
//		          //��ô���ٴη���a+tmp��ֵʱ��Ϊ쳲���������һ����������ǵ�����
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




































































