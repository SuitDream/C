//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////题目内容：
////编程实现：
////两个int（32位）整数m和n的二进制表达中，有多少个bit位不同；
////输入例子：1999 2299
////输出例子：7
//
//int count_differ(int i, int j)
//{
//	int x = i ^ j;
//	int count = 0;
//	while (x)
//	{
//		x = x & (x - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int i = 1999;
//	int j = 2299;
//	int count = count_differ(i, j);
//	printf("%d\n", count);
//	return 0;
//}