//������������Ϸ
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"
void menu()
{
	printf("**************************\n");
	printf("******1.play   0.exit*****\n");
	printf("**************************\n");
}
//��Ϸ�������㷨ʵ��
void game()
{
	//������ά����-���ڴ���߳���������Ϣ
	char board[ROW][COL] = { 0 };//ʹ��������ݸտ�ʼȫ��Ϊ�ո�
	//��ʼ������
	initboard(board,ROW,COL);
	//��ӡ����
	displayboard(board, ROW, COL);
	//����
	char ret = 0;//���ڴ��IsWin�����ķ���ֵ
	while(1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		displayboard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = IsWin(board,ROW,COL);
		if (ret != 'C')
			break;//��Ϸ������������Ϸѭ��
		//��������
		ComputerMove(board, ROW, COL);
		displayboard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = IsWin(board,ROW,COL);
	    if (ret != 'C')
			break;//��Ϸ������������Ϸѭ��		
	}
	if (ret == '*')
		printf("���Ӯ\n");
	else if (ret == '#')
		printf("����Ӯ\n");
	else
		printf("ƽ��\n");

}
void test()//test����ֻ�ᱻִ��һ�Σ���srand��������test��
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}