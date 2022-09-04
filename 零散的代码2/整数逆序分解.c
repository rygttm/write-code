#include <stdio.h>
int main(){
	int x;
	scanf ("%d",&x);
	int t=0;
    	while (x>0)
		{
	    int h=x%10;
     	t=t*10+h;
    	x=x/10;}

	int k=0;
	    while (t>0){
		k=t%10;
		printf ("%d ",k);
		t=t/10;
	}	
	
	return 0;
}
