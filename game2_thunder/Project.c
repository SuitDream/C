
#include "game.h"
void menu()
{
	printf("|+++++++++++++THE   THUNDER!++++++++++++|\n");
	printf("| ++++++++++++  1.start  ++++++++++++++ |\n");
	printf("|  +++++++++++  0.exit   +++++++++++++  |\n");
	printf("|   +++++�����ң�����Ǵű�����++++++   |\n");
}
void game()
{
	//printf("saolei\n");//����
	//�׵���Ϣ�洢:1.���úõ��׵���Ϣ��2.�Ų�������׵���Ϣ��
	char mine[ROWS][COLS] = { 0 };//11*11
	char show[ROWS][COLS] = { 0 };
	Initboard(mine, ROWS, COLS, '0');//��ʼ��
	Initboard(show, ROWS, COLS, '*');
	//Displayboard(mine, ROW, COL);//��ӡ����
	Displayboard(show, ROW, COL);
	Setmine(mine,ROW, COL);//������
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
			printf("�˳���Ϸ!\n");
			break;
		default:
			printf("ѡ�����,������ѡ��\n");
			break;
		}
	} while (a);
}
int main(a)
{
	test();
	return 0;
}