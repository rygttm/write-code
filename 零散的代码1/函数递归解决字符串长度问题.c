//#include <string.h>
//#include <stdio.h>               //��Ŀ����д��������������ʱ���������ַ����ĳ��� 
//int my_strlen(char*str)
//{
//	int cnt=0; 
//	for(cnt=0;*str!='\0';cnt++)//\0Ҫ�õ�����   //�����õ����±���cnt���������⡣����Ҫ�õݹ� 
//	{
//		str++;
//	}
//	return cnt;
//}

//int main()
//{
//	char arr[]="bit";
//	
//	int len=my_strlen(arr);//���鴫��ȥ���ǵ�ַ����ָ����� 
//	
//	printf("len=%d\n",len);
//	return 0;
//}
//�ݹ�ķ��� 
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
	
	int len=my_strlen(arr);//���鴫��ȥ���ǵ�ַ����ָ����� 
	
	printf("len=%d\n",len);
	return 0;
}









