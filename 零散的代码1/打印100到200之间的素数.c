#include <stdio.h>
#include <math.h>
//����������1��������������0 
int is_prime(int n)
{   int x=0;
    for(x=2;x<n;x++)
	{   
		if(n%x!=0)			
		    return 1;
    	
		return 0;
	}
//���λ�ã��ǵ�x=n��ʱ������forѭ��������λ��			
}
int main()
{   int i=0;
    for(i=100;i<=200;i++)
    {   //�ж�i�Ƿ�Ϊ���� 
	    if(is_prime(i)==1)
		{	    
	    	printf("%d ",i);
		}    
	}
    return 0;
}
