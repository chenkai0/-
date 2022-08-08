#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void InitBoard(char board[ROW][COL], int row, int col) //初始化数组
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}

}

void DisplayBoard(char board[ROW][COL], int row, int col) //打印数组（含棋盘）
{
	int i = 0, j = 0, t = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}

		}
		printf("\n");
		for (j = 0; j < col; j++)
		{
			if (i < row - 1)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}

		}

		printf("\n");
	}
}



void PlayerMove(char board[ROW][COL], int row, int col) //玩家下棋
{
	while (1)
	{
		int x = 0, y = 0;
		printf("玩家走，请输入坐标： ");
		scanf("%d%d", &x, &y);
		if (x > 0 && x <= ROW && y > 0 && y <= COL)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该位置已被占用，请重新输入\n");
			}

		}
		else
		{
			printf("输入错误，请重新输入！\n");
		}
	}

}

void ComputerMove(char board[ROW][COL], int row, int col) //电脑下棋
{
	printf("电脑走  \n");
	while (1)
	{
		int x = 0, y = 0;
		x = rand() % ROW;
		y = rand() % COL;

		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}


}


int Isfull(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}

	}
	return 1;
}

int Iswin(char board[ROW][COL], int row, int col) //判断输赢 ：返回1为玩家赢，返回0为电脑赢，返回2为平局
{
	int i = 0, j = 0;

	int count1 = 0, count2 = 0;
	int heng = COL;
	int lie = ROW;
	int add = 0;
	//横向判断
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == '*')
			{
				count1 += 10000;
			}
			else if (board[i][j] == '#')
			{
				count2 += 11;
			}

		}
		if (count1 / 10000 == heng)
		{
			return 1;

		}
		else if (count2 / 11 == heng)
		{
			return 0;
		}
	}
	count1 = 0;
	count2 = 0;
	//列向判断
	for (i = 0; i < col; i++)
	{
		for (j = 0; j < row; j++)
		{
			if (board[i][j] == '*')
			{
				count1 += 10000;
			}
			else if (board[i][j] == '#')
			{
				count2 += 11;
			}

		}
		if (count1 / 10000 == lie)
		{
			return 1;

		}
		else if (count2 / 11 == lie)
		{
			return 0;
		}
	}
	count1 = 0;
	count2 = 0;
	//斜向判断 1
	for (i = 0; i < row; i++)
	{
		if (board[i][i] == '*')
		{
			count1 += 10000;
		}
		else if (board[i][i] == '#')
		{
			count2 += 11;
		}
	}
	if (count1 / 10000 == lie)
	{
		return 1;

	}
	else if (count2 / 11 == lie)
	{
		return 0;
	}
	//斜向判断 2
	count1 = 0;
	count2 = 0;
	for (i = 0; i < row; i++)
	{
		int m = col - 1;
		if (board[i][m] == '*')
		{
			count1 += 10000;
		}
		else if (board[i][m] == '#')
		{
			count2 += 11;
		}
		m--;
	}
	if (count1 / 10000 == lie)
	{
		return 1;

	}
	else if (count2 / 11 == lie)
	{
		return 0;
	}
	count1 = 0;
	count2 = 0;
	//判断平局
	if (1 == Isfull(board, ROW, COL))
	{
		return 2;
	}
	return 8;




}
