#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void InitBoard(char board[ROW][COL], int row, int col) //��ʼ������
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

void DisplayBoard(char board[ROW][COL], int row, int col) //��ӡ���飨�����̣�
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



void PlayerMove(char board[ROW][COL], int row, int col) //�������
{
	while (1)
	{
		int x = 0, y = 0;
		printf("����ߣ����������꣺ ");
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
				printf("��λ���ѱ�ռ�ã�����������\n");
			}

		}
		else
		{
			printf("����������������룡\n");
		}
	}

}

void ComputerMove(char board[ROW][COL], int row, int col) //��������
{
	printf("������  \n");
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

char Iswin(char board[ROW][COL], int row, int col) //�ж���Ӯ ������PΪ���Ӯ������CΪ����Ӯ������QΪƽ��
{
	int i = 0, j = 0;
	//����
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			if (board[i][0] == '*')
			{
				return 'P';

			}
			else if (board[i][0] == '#')
			{
				return 'C';
			}
		}
	}
	//����
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			if (board[0][i] == '*')
			{
				return 'P';

			}
			else if (board[0][i] == '#')
			{
				return 'C';
			}
		}
	}
	//�Խ�
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		if (board[0][0] == '*')
		{
			return 'P';

		}
		else if (board[0][0] == '#')
		{
			return 'C';
		}
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		if (board[0][2] == '*')
		{
			return 'P';

		}
		else if (board[0][2] == '#')
		{
			return 'C';
		}
	}
	//ƽ��
	if (1 == Isfull(board, ROW, COL))
	{
		return 'Q';
	}
	return 'A';




	////int add =0;
	/////*
	//for (i = 0; i < row; i++)
	//{
	//	for (j = 0; j < col; j++)
	//	{
	//		if (board[i][j] = '*')
	//		{
	//			board[i][j] = 10000;
	//		}
	//		else if(board[i][j]='#')
	//		{
	//			board[i][j] = 11;
	//		}
	//		
	//	}*/
	//	
	//}
	////�����ж�
	//int heng = COL;
	//for (i = 0; i < row; i++)
	//{
	//	for (j = 0; j < col; j++)
	//	{
	//		add += board[i][j];
	//	}
	//	if (add%10000== heng)
	//	{
	//		return 'P';
	//		
	//	}
	//	else if(add%heng==11)
	//	{
	//		return 'C';
	//	}
	//	

	//}
	////�����ж�
	//int lie = ROW;
	//for (i = 0; i < col; i++)
	//{
	//	for (j = 0; j < row; j++)
	//	{
	//		add += board[i][j];
	//	}
	//	if (add % 10000 == lie)
	//	{
	//		return 'P';

	//	}
	//	else if (add % lie == 11)
	//	{
	//		return 'C';
	//	}

	//}

}