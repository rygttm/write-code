#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//����
void initboard(char board[ROW][COL], int row, int col);
void displayboard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);


//IsWin����Ҫ����������Ϸ״̬
//���Ӯ������Ӯ��ƽ�֣���Ϸ������
// '*'      '#'    'Q'    'C'
char IsWin(char board[ROW][COL], int row, int col);








