//��������Լ��ı�̼��ɳ�Ϊ�ݹ�
//��Ŀ������һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�����磺���룺1234�������1 2 3 4 
#include <stdio.h> 

void print(int n)
{
	if(n>9)
	{
		print(n/10);
	}
	printf("%d ",n%10);        //�ݹ���Ҫ�����������ģ������������ݹ鵱��
	                           //ÿһ�εĵݹ鶼Ҫ���Ͻӽ��������� 
}
 
int main()
{
	unsigned int num=0;
	scanf("%d",&num);//1234
	print(num);
	//print(1234)
	//print(123) 4
	//print(12) 3 4
	//print(1) 2 3 4 
	
	return 0;
}








