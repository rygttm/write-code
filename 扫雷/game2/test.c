#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"

void menu()
{
	printf("*************************\n");
	printf("********  1.play  *******\n");
	printf("********  0.exit  *******\n");
	printf("*************************\n");
}

void game()
{
	//�׵���Ϣ�Ĵ洢
	//1.���úõ��׵���Ϣ�洢
	char mine[ROWS][COLS] = { 0 };//11*11������
	
	//2.�Ų�����׵���Ϣ�洢
	char show[ROWS][COLS] = { 0 };
	//��������Ϣ��ʼ��
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine,ROW,COL);	
	//ɨ��
	FindMine(mine,show,ROW,COL);//��mine�е��׵���Ϣ�ҵ����ŵ�show������
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>\n");
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
			printf("ѡ�����������ѡ��:>");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}