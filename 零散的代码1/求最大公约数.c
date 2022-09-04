//1.如果b=0计算结束，a为最大公约数
//2. 否则，计算a除以b的余数，让a等于b，让b等于那个余数 
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
