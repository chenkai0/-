#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("******************************\n");
	printf("****��ѡ�� ��0 ��ʼ��Ϸ*******\n");
	printf("****         1 ������Ϸ*******\n");
	printf("******************************\n");


}




void game()
{
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);//��ʼ������
	DisplayBoard(board, ROW, COL);//��ӡ���̣�����״��
	while (1)
	{
		char win = 0;
		PlayerMove(board, ROW, COL);//�������
		DisplayBoard(board, ROW, COL);
		win = Iswin(board, ROW, COL);
		if (win != 'A')
		{
			if (win == 'P')
			{
				printf("��Ϸ���������Ӯ����\n");
				break;
			}
			else if (win == 'C')
			{
				printf("��Ϸ����������Ӯ����\n");
				break;
			}
			else if (win == 'Q')
			{
				printf("��Ϸ������ƽ�֣���\n");
				break;
			}
		}

		ComputerMove(board, ROW, COL);//��������
		DisplayBoard(board, ROW, COL);
		win = Iswin(board, ROW, COL);
		if (win != 'A')
		{
			if (win == 'P')
			{
				printf("��Ϸ���������Ӯ����\n");
				break;
			}
			else if (win == 'C')
			{
				printf("��Ϸ����������Ӯ����\n");
				break;
			}
			else if (win == 'Q')
			{
				printf("��Ϸ������ƽ�֣���\n");
				break;
			}
		}


	}
}



int main()
{
	srand((unsigned int)time(NULL));

	int input = 0;

	do
	{
		int cc = 0;
		menu();
		printf("�����룺>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			game();

			break;
		case 1:

			break;
		default:
			printf("����������������룡��\n");
		}









		//ѡ������滻

		/*if (input == 0)
		{
			game();
		}
		else if (input != 0 && input != 1)
		{
			printf("����������������룡��");
		}
		else if (input == 1)
		{
			break;
		}*/

	} while (input != 1);


	return 0;
}