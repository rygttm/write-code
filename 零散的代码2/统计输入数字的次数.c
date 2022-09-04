#include <stdio.h>

int main(void)//void加不加都行 
{    int x;
     int number[10];
     int i;
     
     for(i=0;i<10;i++){
     	number[i]=0;
	 }
	 scanf("%d",&x);
	 while(x!=-1){
	 	  if(x>=0&&x<=9){
	 	  	number[x]++;
	 	  	scanf("%d",&x);
		  }
	 }
	 for(i=0;i<10;i++){
	 	printf("%d:%d\n",i,number[i]);//；离开循环后不准用i做数组元素的下标， 
	 }                                //:i已经等于数组的无效下标了 
	 	 
	 return 0;
}

