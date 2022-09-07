#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//声明
void initboard(char board[ROW][COL], int row, int col);
void displayboard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);


//IsWin函数要返回四种游戏状态
//玩家赢，电脑赢，平局，游戏继续。
// '*'      '#'    'Q'    'C'
char IsWin(char board[ROW][COL], int row, int col);








