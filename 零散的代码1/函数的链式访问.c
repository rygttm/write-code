#include <stdio.h>
int main()
{
	
	printf("%d",printf("%d",printf("%d",43)));
	   //printf函数的返回值是字符的个数，先打印43，然后返回的是2，因为43的字符串的长度为2 ，然后返回1，因为2的长度为1 
	return 0;
}


//链式访问就是，把一个函数的返回值，作为另一个函数的参数 
