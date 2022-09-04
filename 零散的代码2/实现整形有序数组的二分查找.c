#include <stdio.h>
int binary_search(int* arr,int k,int sz)//数组在传参的时候，仅仅传过去数组中第一个元素的地址，所以用指针来接收地址 
{
	//算法的实现
	//int sz=sizeof(arr)/sizeof(arr[0]);   sizeof求的是指针的大小（为8），并不是数组所有元素的大小 
	int left = 0;
	int right =sz-1;
	//int mid =(left+right)/2;//中间元素的下标
	//printf("%d",sz);      检查代码出现的问题，通过打印来检查 
	int mid=0;    
	while(left<=right)    //必须包含等于，否则出现逻辑错误 
	{	 int mid =(left+right)/2;//mid要多次参与二分查找，所以要在while循环里边 
	        if(arr[mid]<k)
			 {
			    left=mid+1;
			 }
		    else if (arr[mid]>k)
		    {
		    	right=mid-1;
			}
			else
			{ 
			    return mid;
			}
    }
	return -1;
} 

int main()
{
	//二分查找
	//在一个有序数组中查找具体的某个数
	//如果找到返回这个数的下标，找不到返回-1
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int k=7;
	int sz=sizeof(arr)/sizeof(arr[0]);
	int ret = binary_search(arr,k,sz);
	
	if(ret==-1)
	{
		printf("找不到指定的数字\n");
	}
	 else
	 {
	 	printf("找到了，下标是%d\n",ret);
	 }
		
	return 0;
}







