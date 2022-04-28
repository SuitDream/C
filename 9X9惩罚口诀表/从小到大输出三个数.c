//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//int mine(int a, int b, int c)
//{
//	if (a <= b && a <= c)
//		return a;
//	else if (b <= a && b <= c)
//		return b;
//	else(c <= a && c <= b);
//		return c;
//}
//int mine2(int d, int e, int f)
//{
//	if (d <= e && d >= f)
//		return d;
//	else if (d <= f && d >= e)
//		return d;
//	else if (e <= d && e >= f)
//		return e;
//	else if (e <= f && e >= d)
//		return e;
//	else if (f <= d && f >= e)
//		return f;
//	else(f <= e && f >= d);
//		return f;
//}
//int maxx(int g, int h, int i)
//{
//	if (g >= h && g >= i)
//		return g;
//	else if (h >= g && h >= i)
//		return h;
//	else(i >= g && i >= h);
//		return i;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	int j = 0;
//	int k = 0;
//	int l = 0;
//	printf("请输入需要比较大小的数字：-》");
//	scanf("%d%d%d", &x, &y, &z);
//	j = mine(x, y, z);
//	k = mine2(x, y, z);
//	l = maxx(x, y, z);
//	printf("%d\n", l);
//	printf("%d\n", k);
//	printf("%d\n", j);
//	return 0;
//}
//
////int main()
////{
////	int x = 0;
////	int y = 0;
////	int z = 0;
////	int o = 0;
////	printf("请输入需要比较大小的数字：-》");
////	scanf("%d%d%d", &x, &y, &z);
////	while (mine(x,y,z) == 0 )
////	{
////		if (x > y)
////		{
////			if (x > z)
////			{
////				printf("%d\n", x);
////				x = x * o;
////			}
////			else
////			{
////				printf("%d\n", z);
////				z = z * o;
////			}
////		}
////		else
////		{
////			if (y > z)
////			{
////				printf("%d\n", y);
////				y = y * o;
////			}
////			else
////			{
////				printf("%d\n", z);
////				z = z * o;
////			}
////		}
////	}
////	return 0;
////}