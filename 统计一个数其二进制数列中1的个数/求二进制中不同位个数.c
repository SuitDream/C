//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////��Ŀ���ݣ�
////���ʵ�֣�
////����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�bitλ��ͬ��
////�������ӣ�1999 2299
////������ӣ�7
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