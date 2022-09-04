#include <stdio.h>
#include <math.h>
//是素数返回1，不是素数返回0 
int is_prime(int n)
{   int x=0;
    for(x=2;x<n;x++)
	{   
		if(n%x!=0)			
		    return 1;
    	
		return 0;
	}
//这个位置，是当x=n的时候，跳出for循环来到的位置			
}
int main()
{   int i=0;
    for(i=100;i<=200;i++)
    {   //判断i是否为素数 
	    if(is_prime(i)==1)
		{	    
	    	printf("%d ",i);
		}    
	}
    return 0;
}
