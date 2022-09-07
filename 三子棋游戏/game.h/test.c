//测试三子棋游戏
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"
void menu()
{
	printf("**************************\n");
	printf("******1.play   0.exit*****\n");
	printf("**************************\n");
}
//游戏的整个算法实现
void game()
{
	//创建二维数组-用于存放走出的棋盘信息
	char board[ROW][COL] = { 0 };//使数组的内容刚开始全部为空格
	//初始化棋盘
	initboard(board,ROW,COL);
	//打印棋盘
	displayboard(board, ROW, COL);
	//下棋
	char ret = 0;//用于存放IsWin函数的返回值
	while(1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		displayboard(board, ROW, COL);
		//判断玩家是否赢
		ret = IsWin(board,ROW,COL);
		if (ret != 'C')
			break;//游戏结束，跳出游戏循环
		//电脑下棋
		ComputerMove(board, ROW, COL);
		displayboard(board, ROW, COL);
		//判断电脑是否赢
		ret = IsWin(board,ROW,COL);
	    if (ret != 'C')
			break;//游戏结束，跳出游戏循环		
	}
	if (ret == '*')
		printf("玩家赢\n");
	else if (ret == '#')
		printf("电脑赢\n");
	else
		printf("平局\n");

}
void test()//test函数只会被执行一次，将srand函数放在test下
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}