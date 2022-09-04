//水仙花数是指一个N位正整数（N>=3），它的每个位上的数字的N次幂之和等于它本身。
//例如：153 = 1^3+ 5^3+ 3^3。本题要求编写程序,计算所有N位水仙花数。
#include <stdio.h>
int main()
{  int n;
   scanf("%d",&n);
   int first=1;
   int i=1;
   while(i<n){
   	  first*=10;
   	  i++;
   }
   //printf("first=%d",first);
   i=first;
   //遍历N位以内的所有数 
   while(i<first*10){
   	     int t=i;
		 int sum=0;
   	  do{   int d=t%10;
		    t/=10;
			int p=d;
			int j=1;
			while (j<n)
			{p=p*d;
			 j++;
			} 
   	    	sum += p;  	    	
		 }while(t>0);	  	    	  
	  if(sum==i){		 
	  printf("%d\n",i);	  
      }
	   i++;
   }
return 0;	
}
