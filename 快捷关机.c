#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char input1[] = { 0 };
	char input2[] = { 0 };
again1:
	printf("������yȷ�Ϲػ�\n");
	scanf("%s", &input1);
	if (strcmp(input1, "y") == 0)
		system("shutdown -s -t 60");
	else
	{
		goto again1;
	}
again2:
	printf("��ĵ��Խ���60���ػ��� ������noȡ���ػ���\n");
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