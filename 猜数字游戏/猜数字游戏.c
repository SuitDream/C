#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>     //������rand()��������srand������
#include <time.h>       //������time()������

void menu()
{
	printf("######################################\n");
	printf("#######   1.Play     0.Exit    #######\n");
	printf("######################################\n");
}
void game()
{
	int ret = 0;
	int guess = 0;
	//srand((unsigned int)time(NULL));//��Ҫ�������srand����ᵼ�����������������
	ret = rand()%100+1;            //rand()-�����������srand()-�����������������ʼ�㣻
	while (1)
	{
		printf("�������>��\n");
		scanf("%d", &guess);
		if (guess > ret)
			printf("�´��ˣ�\n");
		else if (guess < ret)
			printf("��С�ˣ�\n");
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;                  //time_t��time32_t����������time32_t��һ�������Σ�
	srand((unsigned int)time(NULL));//NULL��˼��һ����ָ�룻unsigned int - ǿ�ƶ���Ϊһ�����Σ�
	do                              //����������ʱ���������һ������仯����ֵ
	{                               //ʱ���-��ǰ�����ʱ��-���������ʼʱ�䣨1970.1.1.0��0:0��=��XXXX����
		menu();                     //time_t time(timen_t *timer);time����ŵ���һ��ָ��;
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//��������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}