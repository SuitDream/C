#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	for (j=1; j<10; j++)
	{
		for (i = 1; i <= j; i++)
		{
				printf("%d * %d = %-2d; ", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}