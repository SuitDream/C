//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////题目名称：打印二进制的奇数位和偶数位
////题目内容：获取一个整数的二进制序列中所有的奇数位和偶数位；分别打印二进制徐陈列；
//
//void print(int s)
//{
//	int i = 0;
//	printf("偶数位：");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", ((s >> i) & 1));
//	}
//	printf("\n");
//	printf("奇数位：");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", ((s >> i) & 1));
//	}
//}
//
//int main()
//{
//	int s = 0;
//	scanf("%d", &s);
//	print(s);
//	return 0;
//}