#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
void menu()
{
	printf("***************************\n");
	printf("*****  1����ʼ��Ϸ   ******\n");
	printf("*****  2���˳���Ϸ   ******\n");
	printf("˵������ʼ��Ϸ����ֱ�����������µ����֣���\n");

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
//			printf("�´��ˣ� ����������\n");
//		}
//		else if (a < shuzi)
//		{
//			printf("��С�ˣ� ����������\n");
//		}
//		else if (a == shuzi)
//		{
//			printf("��ϲ�㣬�¶��ˣ���\n");
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
//		printf("��ѡ�� ");
//		scanf("%d", &in);
//		if (in == 1)
//		{
//			printf("��Ϸ��ʼ ���������µ�����\n");
//			youxi();
//		}
//		else if (in == 2)
//		{
//			break;
//		}
//		else
//		{
//			printf("����������������룡\n");
//		}
// return 0;
//	}*/



	/*do{
		menu();
		printf("���������֣� ");
		scanf("%d", &in);
		switch (in)
		{

		case 1:
			printf("���������µ�����\n");
			youxi();
			break;
		case 2:
			printf("tuichu");
			break;
		default:
			printf("����������������룡");

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
		printf("��ѡ�� ");
		scanf("%d", &in);
		if (in == 1)
		{
			printf("��Ϸ��ʼ ���������µ�����\n");
			while (1)
			{

				scanf("%d", &a);
				if (a > shuzi)
				{
					printf("�´��ˣ� ����������\n");
				}
				else if (a < shuzi)
				{
					printf("��С�ˣ� ����������\n");
				}
				else if (a == shuzi)
				{
					printf("��ϲ�㣬�¶��ˣ���\n");
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
			printf("����������������룡\n");
		}
	}
	return 0;
}