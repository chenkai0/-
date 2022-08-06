#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 89;
	int b = 56;
	int r = 0;
	int m = 0;
	scanf("%d%d", &a, &b);
	while (a % b != 0)
	{
		r = a % b;
		a = b;
		b = r;
		m = a % b;
	}
	printf("%d", b);
	return 0;
}