#include <stdio.h>
//����������
int Add(int x,int y);

int main()
{
	int a=10;
	int b=20;
	int sum=0;
	//��������
	sum=Add(a,b);
	printf("%d",sum);
	
	return 0;
}
//�����Ķ��� 
int Add(int x,int y)
{
	int z=0;
	z=x+y ;
	return z;
}
