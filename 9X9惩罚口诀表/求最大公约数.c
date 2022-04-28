//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 1;
//	int t = 0;
//	scanf("%d %d", &a, &b);                 //穷举法
//	while ((i <= a) && (i <= b))
//	{
//		if ((a % i == 0) && (b % i == 0))
//		{
//			t = i;
//		}
//		i++;
//	}
//	printf("最大公约数为： %d\n", t);
//}
//
////int main()
////{
////	int a = 0;
////	int b = 0;
////	scanf("%d %d", &a, &b);//相减法
////	while (a != b)
////	{
////		if (a > b)
////			a = a - b;
////		if (a < b)
////			b = b - 1;
////	}
////	printf("最大公约数：%d\n", a);
////	return 0;
////}
//
////int main()
////{
////	int a = 0;
////	int b = 0;
////	scanf("%d %d", &a, &b);//辗转相除法；
////	while((a%b) != 0)
////	{
////		int c = a % b;
////		a = b;
////		b = c;
////	}
////	printf("%d\n", b);
////	return 0;
////}

