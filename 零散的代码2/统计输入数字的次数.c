#include <stdio.h>

int main(void)//void�Ӳ��Ӷ��� 
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
	 	printf("%d:%d\n",i,number[i]);//���뿪ѭ����׼��i������Ԫ�ص��±꣬ 
	 }                                //:i�Ѿ������������Ч�±��� 
	 	 
	 return 0;
}

