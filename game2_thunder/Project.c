
#include "game.h"
void menu()
{
	printf("|+++++++++++++THE   THUNDER!++++++++++++|\n");
	printf("| ++++++++++++  1.start  ++++++++++++++ |\n");
	printf("|  +++++++++++  0.exit   +++++++++++++  |\n");
	printf("|   +++++相信我，你就是磁暴步兵++++++   |\n");
}
void game()
{
	//printf("saolei\n");//测试
	//雷的信息存储:1.布置好的雷的信息；2.排查出来的雷的信息；
	char mine[ROWS][COLS] = { 0 };//11*11
	char show[ROWS][COLS] = { 0 };
	Initboard(mine, ROWS, COLS, '0');//初始化
	Initboard(show, ROWS, COLS, '*');
	//Displayboard(mine, ROW, COL);//打印棋盘
	Displayboard(show, ROW, COL);
	Setmine(mine,ROW, COL);//布置雷
	Displayboard(mine, ROW, COL);
	Findmine(mine, show, ROW, COL);
	

}
void test()
{
	int a = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("Please select:->");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("选择错误,请重新选择！\n");
			break;
		}
	} while (a);
}
int main(a)
{
	test();
	return 0;
}