//测试三子棋游戏
#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h> - 这里将stdio.h放到game.h中，
//即只要引了game.h就相当于引了stdio.h
#include "game.h"

void menu()
{
	printf("*************************\n");
	printf("****  1.Play 0.Exit  ****\n");
	printf("*************************\n");
}
//游戏整个的算法实现
void game()
{
	char ret = 0;
	//建立一个数组-存放玩家和电脑走出的棋盘信息；
	char board[ROW][COL] = {0};//起始时希望棋盘上数组都是空格；
	system("cls");
	Initboard(board, ROW, COL);//初始化棋盘；
	DisplayBoard(board, ROW, COL);//打印棋盘；
	while (1)
	{
		PlayerMove(board, ROW, COL);//玩家下棋
		system("cls");
		DisplayBoard(board, ROW, COL);//打印棋盘
		//判断玩家是否赢；
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//电脑下棋
		system("cls");
		DisplayBoard(board, ROW, COL);
		//片段电脑是否赢；
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家胜！\n");
	}
	else if (ret == '#')
	{
		printf("电脑胜！\n");
	}
	else
	{
		printf("平局！\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//只启动一次
	do
	{
		menu();
		printf("!!Please select!!:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,请重新选择!\n");
			break;
		}
	} while (input);
}
int main()
{

	test();
	return 0;
}