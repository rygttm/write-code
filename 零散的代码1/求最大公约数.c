//1.���b=0���������aΪ���Լ��
//2. ���򣬼���a����b����������a����b����b�����Ǹ����� 
//   b    t
//12   18   12
//18   12   6
//12   6    0
//6    0
#include <stdio.h>
int main (){
   int a,b,t;   
   scanf ("%d %d",&a,&b);
   while (b!=0){
   	  t=a%b;
   	  a=b;
   	  b=t;
	  printf("a=%d,b=%d,t=%d\n",a,b,t);
	           }	
printf ("gcd=%d",a)	;
	return 0;
}
