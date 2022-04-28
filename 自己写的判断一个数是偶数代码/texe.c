#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int num = 0;
	scanf("%d", &num);
	while (num > 2)
	{
		num = num - 2;
	}
	if(num == 2)
		printf("oushu\n");
	if (num == 1)
		printf("jishu\n");
	return 0;
}