//������������Ϸ
#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h> - ���ｫstdio.h�ŵ�game.h�У�
//��ֻҪ����game.h���൱������stdio.h
#include "game.h"

void menu()
{
	printf("*************************\n");
	printf("****  1.Play 0.Exit  ****\n");
	printf("*************************\n");
}
//��Ϸ�������㷨ʵ��
void game()
{
	char ret = 0;
	//����һ������-�����Һ͵����߳���������Ϣ��
	char board[ROW][COL] = {0};//��ʼʱϣ�����������鶼�ǿո�
	system("cls");
	Initboard(board, ROW, COL);//��ʼ�����̣�
	DisplayBoard(board, ROW, COL);//��ӡ���̣�
	while (1)
	{
		PlayerMove(board, ROW, COL);//�������
		system("cls");
		DisplayBoard(board, ROW, COL);//��ӡ����
		//�ж�����Ƿ�Ӯ��
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//��������
		system("cls");
		DisplayBoard(board, ROW, COL);
		//Ƭ�ε����Ƿ�Ӯ��
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���ʤ��\n");
	}
	else if (ret == '#')
	{
		printf("����ʤ��\n");
	}
	else
	{
		printf("ƽ�֣�\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//ֻ����һ��
	do
	{
		menu();
		printf("!!Please select!!:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,������ѡ��!\n");
			break;
		}
	} while (input);
}
int main()
{

	test();
	return 0;
}