#include <stdio.h>
//year�����귵��1���������귵��0 
int is_leap_year(int i)
{
	if(i%4==0)
	  return 1;
    return 0;
}



int main ()
{
	int year=0;	
	for(year=1000;year<=2000;year++)
	{//�ж�year�Ƿ�Ϊ����
	     if(is_leap_year(year)==1)
	       printf("%d ",year);
	 
	}	
	return 0;
}
