#include <stdio.h>
void Add(int*p)
{
	(*p)++;
}

int main()
{
	int num=0;
	//ÿ����һ�κ�����ʹ��num��ֵ����1
	Add(&num);
	printf("%d\n",num) ;//1
	
	Add(&num);
	printf("%d\n",num) ;//2
	
	Add(&num);
	printf("%d\n",num) ;//3
	
	Add(&num);
	printf("%d\n",num) ;//4 
	
	return 0;
}
