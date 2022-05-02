#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��Ŀ���ƣ��ݹ�ʵ��ndek�η�
//��ĿҪ�󣺱�дһ��������ʵ��n��k�η���Ҫ��ݹ���ʵ�֣�

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