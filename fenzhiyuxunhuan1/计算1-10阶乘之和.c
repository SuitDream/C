//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//int jc(int x)
//{
//	int z = 1;
//	if (x == 0 || x == 1)
//		z = 1;
//	else
//		z = jc(x - 1) * x;
//		return z;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		n = n + jc(i);
//	}
//	printf("%d\n", n);
//	return 0;
//}
////int main()
////{
////	int n = 0;
////	int m = 1;
////	int sum = 0;
////	for (n = 10; n !=1; n--)
////	{
////		for (m=1; n!=1; n--)
////		{
////			m = m * n;
////		}
////		sum = sum + m;
////     }
////	printf("%d\n", sum);
////	return 0;
////}