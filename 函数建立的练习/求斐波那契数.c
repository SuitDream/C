#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int fib(int x)
{
	int a = 0;
	int b = 0;
	int tem = 0;
	int i = 1;
	for (a = 1, b = 0; i < x; i++)
	{
		if (i < 2)
			a = 1;
		else
		{
			tem = a;
			a = a + b;
		}
		b = tem;
	}
	return a + b;
}
int main()
{
	int q = 0;
	scanf("%d", &q);
	printf("%d", fib(q));
	return 0;
}