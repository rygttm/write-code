#include <stdio.h>
void Add(int*p)
{
	(*p)++;
}

int main()
{
	int num=0;
	//每调用一次函数，使得num的值增加1
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
