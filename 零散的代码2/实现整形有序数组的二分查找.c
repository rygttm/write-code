#include <stdio.h>
int binary_search(int* arr,int k,int sz)//�����ڴ��ε�ʱ�򣬽�������ȥ�����е�һ��Ԫ�صĵ�ַ��������ָ�������յ�ַ 
{
	//�㷨��ʵ��
	//int sz=sizeof(arr)/sizeof(arr[0]);   sizeof�����ָ��Ĵ�С��Ϊ8������������������Ԫ�صĴ�С 
	int left = 0;
	int right =sz-1;
	//int mid =(left+right)/2;//�м�Ԫ�ص��±�
	//printf("%d",sz);      ��������ֵ����⣬ͨ����ӡ����� 
	int mid=0;    
	while(left<=right)    //����������ڣ���������߼����� 
	{	 int mid =(left+right)/2;//midҪ��β�����ֲ��ң�����Ҫ��whileѭ����� 
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
	//���ֲ���
	//��һ�����������в��Ҿ����ĳ����
	//����ҵ�������������±꣬�Ҳ�������-1
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int k=7;
	int sz=sizeof(arr)/sizeof(arr[0]);
	int ret = binary_search(arr,k,sz);
	
	if(ret==-1)
	{
		printf("�Ҳ���ָ��������\n");
	}
	 else
	 {
	 	printf("�ҵ��ˣ��±���%d\n",ret);
	 }
		
	return 0;
}







