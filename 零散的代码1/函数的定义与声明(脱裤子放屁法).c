#include <stdio.h>
//函数的声明
int Add(int x,int y);

int main()
{
	int a=10;
	int b=20;
	int sum=0;
	//函数调用
	sum=Add(a,b);
	printf("%d",sum);
	
	return 0;
}
//函数的定义 
int Add(int x,int y)
{
	int z=0;
	z=x+y ;
	return z;
}
