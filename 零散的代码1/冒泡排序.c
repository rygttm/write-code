#include <stdio.h>
void bubble_sort(int *arr,int sz)//��int*arr����int arr[]Ҳ�У�����ʾָ�� 
{
    //ȷ��ð����������� 
    int i=0;	
    for(i=0;i<sz-1;i++)
    {
    	//ÿһ��ð����������ݣ��㷨��
    	int flag=1;//���ڼ�����һ��Ҫ����������Ѿ����� 
    	int j=0;
    	for(j=0;j<sz-1-i;j++)//forѭ�����ж���������Ҫ���Ƚϵ����ֶ��� 
    	{
    		if(arr[j]>arr[j+1])
    		{
    			int tmp=0;
    			tmp=arr[j+1];
    			arr[j+1]=arr[j];
    			arr[j]=tmp;
    			flag=0;//����Ҫ���������δ��ȫ���� 
			}		
		}
		if(flag==1)
		{
			break;
		}
	}
     
}

int main()
{
	int arr[]={9,8,7,6,5,4,3,2,1,0};
	//��arr���������ų����� 
	int sz=sizeof(arr)/sizeof(arr[0]);
	int i=0;
    bubble_sort(arr,sz);//ð������������ 
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}















