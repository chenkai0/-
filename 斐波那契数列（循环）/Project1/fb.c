#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	printf("输入查看第几个斐波那契数列\n");
	scanf("%d", &n);
	int as = fib(n);
	printf("%d\n", as);
	return 0;
}