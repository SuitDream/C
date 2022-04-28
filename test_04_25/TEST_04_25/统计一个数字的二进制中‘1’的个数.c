#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int count_bit_one1(unsigned int n)//法一：解决不了负数；负数输出都是0；但是也有解决方法——>这里通过unsigned int将形参强制转换成为一个无符号数；
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n = n / 2;
	}
	return count;
}
int count_bit_one2(int o)//法二
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (1 == ((o >> i) & 1))
			count++;
	}
	return count;
}
int main()
{ 
	int o = 0;
	/*int i = 0;*/
	/*int count = 0;*/              //注释部分为 不写外部函数的实行方法；
	scanf("%d", &o);
	int count = count_bit_one2(o);
	/*for (i = 0; i < 32; i++)
	{
		if (1 == ((o >> i) & 1))
			count++;
	}*/
	printf("%d\n", count);
	return 0;
}