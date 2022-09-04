//#include <string.h>
//#include <stdio.h>               //题目：编写函数不允许创建临时变量，求字符串的长度 
//int my_strlen(char*str)
//{
//	int cnt=0; 
//	for(cnt=0;*str!='\0';cnt++)//\0要用单引号   //这里用到了新变量cnt，不符题意。所以要用递归 
//	{
//		str++;
//	}
//	return cnt;
//}

//int main()
//{
//	char arr[]="bit";
//	
//	int len=my_strlen(arr);//数组传过去的是地址，用指针接收 
//	
//	printf("len=%d\n",len);
//	return 0;
//}
//递归的方法 
#include <stdio.h>
int my_strlen(char*str)
{
	if(*str!='\0')
	     return 1+my_strlen(str+1);
    else
         return 0;	
}
int main()
{
	char arr[]="bit";
	
	int len=my_strlen(arr);//数组传过去的是地址，用指针接收 
	
	printf("len=%d\n",len);
	return 0;
}









