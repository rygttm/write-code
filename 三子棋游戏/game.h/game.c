#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void initboard(char board[ROW][COL], int row, int col)
{
	
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' '; 
		}
	}
}
void displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//1.打印一行的数据
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");			
		}
		printf("\n");
		//2.打印分割行
		if (i < row - 1)
		{
			for (j = 0; j < col ; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}

}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:>\n");
	while (1)
	{
		printf("请输入要走的坐标:>\n");
		scanf("%d %d", &x, &y);
		//判断输入坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}

		}
		else
		{
			printf("坐标非法，请重新输入:>\n");
		}		
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		//判断电脑走的坐标是否被占用
		if (board[x][y] == ' ')
		{
			board[x][y] = '&';
			break;
		}

	}

}

//返回1表示棋盘满了
//返回0表示棋盘没满
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[j][i] == ' ')
				return 0;//没满
		}
	}
	return 1;//满了
}

char IsWin(char board[ROW][COL], int row, int col)
{
	//判断赢的条件，即为横三竖三斜三
	//横三行
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1]&& board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}
	//竖三列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}
	//两个对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		return board[0][0];
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
		return board[1][1];
	//判断是否平局
	if(1==IsFull(board,row,col))//IsFull函数用于判断游戏是否继续或者平局
		return 'Q';
	else
		return 'C';

}



















