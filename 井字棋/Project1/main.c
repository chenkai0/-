#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("******************************\n");
	printf("****请选择 ：0 开始游戏*******\n");
	printf("****         1 结束游戏*******\n");
	printf("******************************\n");


}




void game()
{
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);//初始化数组
	DisplayBoard(board, ROW, COL);//打印棋盘（带形状）
	while (1)
	{
		int win = 0;
		PlayerMove(board, ROW, COL);//玩家下棋
		DisplayBoard(board, ROW, COL);
		win = Iswin(board, ROW, COL);
		if (win != 8)
		{
			if (win == 1)
			{
				printf("游戏结束，玩家赢！！\n");
				break;
			}
			else if (win == 0)
			{
				printf("游戏结束，电脑赢！！");
				break;
			}
			else if (win == 2)
			{
				printf("游戏结束，平局！！");
				break;
			}
		}

		ComputerMove(board, ROW, COL);//电脑下棋
		DisplayBoard(board, ROW, COL);
		win = Iswin(board, ROW, COL);
		if (win != 8)
		{
			if (win == 1)
			{
				printf("游戏结束，玩家赢！！\n");
				break;
			}
			else if (win == 0)
			{
				printf("游戏结束，电脑赢！！");
				break;
			}
			else if (win == 2)
			{
				printf("游戏结束，平局！！");
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
		printf("请输入：>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			game();

			break;
		case 1:

			break;
		default:
			printf("输入错误，请重新输入！！\n");
		}









		//选择语句替换

		/*if (input == 0)
		{
			game();
		}
		else if (input != 0 && input != 1)
		{
			printf("输入错误，请重新输入！！");
		}
		else if (input == 1)
		{
			break;
		}*/

	} while (input != 1);


	return 0;
}