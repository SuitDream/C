#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int count_bit_one1(unsigned int n)//��һ��������˸����������������0������Ҳ�н����������>����ͨ��unsigned int���β�ǿ��ת����Ϊһ���޷�������
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
int count_bit_one2(int o)//����
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
	/*int count = 0;*/              //ע�Ͳ���Ϊ ��д�ⲿ������ʵ�з�����
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