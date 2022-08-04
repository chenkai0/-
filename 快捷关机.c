#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char input1[] = { 0 };
	char input2[] = { 0 };
again1:
	printf("请输入y确认关机\n");
	scanf("%s", &input1);
	if (strcmp(input1, "y") == 0)
		system("shutdown -s -t 60");
	else
	{
		goto again1;
	}
again2:
	printf("你的电脑将在60秒后关机！ 请输入no取消关机！\n");
	scanf("%s", &input2);
	if (strcmp(input2, "no") == 0)
	{
		
		system("shutdown -a");

	}
	else
	{
		goto again2;
	}

	return 0;
}