//程序调用自己的编程技巧称为递归
//题目：接收一个整型值（无符号），按照顺序打印他的每一位。例如：输入：1234，输出：1 2 3 4 
#include <stdio.h> 

void print(int n)
{
	if(n>9)
	{
		print(n/10);
	}
	printf("%d ",n%10);        //递归是要有限制条件的，不能陷入死递归当中
	                           //每一次的递归都要不断接近限制条件 
}
 
int main()
{
	unsigned int num=0;
	scanf("%d",&num);//1234
	print(num);
	//print(1234)
	//print(123) 4
	//print(12) 3 4
	//print(1) 2 3 4 
	
	return 0;
}








