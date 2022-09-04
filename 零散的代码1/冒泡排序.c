#include <stdio.h>
void bubble_sort(int *arr,int sz)//把int*arr换成int arr[]也行，都表示指针 
{
    //确定冒泡排序的趟数 
    int i=0;	
    for(i=0;i<sz-1;i++)
    {
    	//每一趟冒泡排序的内容（算法）
    	int flag=1;//用于假设这一趟要排序的数据已经有序 
    	int j=0;
    	for(j=0;j<sz-1-i;j++)//for循环的判断条件是需要作比较的数字对数 
    	{
    		if(arr[j]>arr[j+1])
    		{
    			int tmp=0;
    			tmp=arr[j+1];
    			arr[j+1]=arr[j];
    			arr[j]=tmp;
    			flag=0;//本趟要排序的数据未完全有序 
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
	//对arr进行排序，排成升序 
	int sz=sizeof(arr)/sizeof(arr[0]);
	int i=0;
    bubble_sort(arr,sz);//冒泡排序函数调用 
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}















