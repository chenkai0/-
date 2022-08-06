#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
void menu()
{
	printf("***************************\n");
	printf("*****  1、开始游戏   ******\n");
	printf("*****  2、退出游戏   ******\n");
	printf("说明：开始游戏后请直接输入你所猜的数字！！\n");

	printf("***************************\n");

	printf("\n");

}
//void youxi()
//{
//	int shuzi = 0;
//	int a=0;
//	shuzi = rand()%100+1;
//	while (1)
//	{
//		
//		scanf("%d", &a);
//		if (a > shuzi)
//		{
//			printf("猜大了！ 请重新输入\n");
//		}
//		else if (a < shuzi)
//		{
//			printf("猜小了！ 请重新输入\n");
//		}
//		else if (a == shuzi)
//		{
//			printf("恭喜你，猜对了！！\n");
//			printf("\n");
//				break;
//		}
//		
//	}
//	
//}
//int main()
//{
//	
//	int in = 0;
//	int a = 0;
//	srand((unsigned int)time(NULL));
//	
//	while (1)
//	{
//		menu();
//		printf("请选择： ");
//		scanf("%d", &in);
//		if (in == 1)
//		{
//			printf("游戏开始 输入你所猜的数字\n");
//			youxi();
//		}
//		else if (in == 2)
//		{
//			break;
//		}
//		else
//		{
//			printf("输入错误，请重新输入！\n");
//		}
// return 0;
//	}*/



	/*do{
		menu();
		printf("请输入数字： ");
		scanf("%d", &in);
		switch (in)
		{

		case 1:
			printf("输入你所猜的数字\n");
			youxi();
			break;
		case 2:
			printf("tuichu");
			break;
		default:
			printf("输入错误，请重新输入！");

			break;

		}
	} while (in != 2);*/





int main()
{

	int in = 0;
	int a = 0;
	int shuzi = 0;

	shuzi = rand() % 10 + 1;
	srand((unsigned int)time(NULL));

	while (1)
	{
		menu();
		printf("请选择： ");
		scanf("%d", &in);
		if (in == 1)
		{
			printf("游戏开始 输入你所猜的数字\n");
			while (1)
			{

				scanf("%d", &a);
				if (a > shuzi)
				{
					printf("猜大了！ 请重新输入\n");
				}
				else if (a < shuzi)
				{
					printf("猜小了！ 请重新输入\n");
				}
				else if (a == shuzi)
				{
					printf("恭喜你，猜对了！！\n");
					printf("\n");
					break;
				}

			}
		}
		else if (in == 2)
		{
			break;
		}
		else
		{
			printf("输入错误，请重新输入！\n");
		}
	}
	return 0;
}