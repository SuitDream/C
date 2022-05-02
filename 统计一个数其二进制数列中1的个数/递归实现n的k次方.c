#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//题目名称：递归实现ndek次方
//题目要求：编写一个函数，实现n的k次方，要求递归来实现；

double Row(int n, int k)
{
	if (k < 0)
	{
		return (1.0 / (Row(n, -k)));
	}
	else if (k == 0)
		return 1;
	else
		return n * Row(n, k - 1);
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = Row(n, k);
	printf("n^k = %lf\n", ret);
	return 0;
}