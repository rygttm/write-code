//ˮ�ɻ�����ָһ��Nλ��������N>=3��������ÿ��λ�ϵ����ֵ�N����֮�͵���������
//���磺153 = 1^3+ 5^3+ 3^3������Ҫ���д����,��������Nλˮ�ɻ�����
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
   //����Nλ���ڵ������� 
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
