
#include "game.h"

void Initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);//��ӡ�кţ�
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//��ӡ�кţ�
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void Setmine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')//�����ǧ����д���ˣ�0��Ӧ��ASCII��ֵΪ'\0';
		{
			board[x][y] = '1';
			count--;
		}
	}
}
//'1'-'0' = 1
//'3'-'0' = 3

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x][y - 1] + mine[x][y + 1]
		+ mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0';
}
void Put_mine(char show[ROWS][COLS], char mine[ROWS][COLS], int x, int y,int* win)
{
	if (show[x][y] == '*')
	{
		*win+=1;
		int count = get_mine_count(mine, x, y);
		if (count == 0)
		{
			show[x][y] = ' ';
			if (((x - 1) >= 1) && ((x - 1) <= 9) && ((y - 1) >= 1) && ((y - 1) <= 9))
				Put_mine(show, mine, x - 1, y - 1, win);
			if (((x - 1) >= 1) && ((x - 1) <= 9) && (y >= 1) && (y <= 9))
				Put_mine(show, mine, x - 1, y, win);
			if (((x - 1) >= 1) && ((x - 1) <= 9) && ((y + 1) >= 1) && ((y + 1) <= 9))
				Put_mine(show, mine, x - 1, y + 1, win);
			if ((x >= 1) && (x <= 9) && ((y - 1) >= 1) && ((y - 1) <= 9))
				Put_mine(show, mine, x, y - 1, win);
			if ((x >= 1) && (x <= 9) && ((y + 1) >= 1) && ((y + 1) <= 9))
				Put_mine(show, mine, x, y + 1, win);
			if (((x + 1) >= 1) && ((x + 1) <= 9) && ((y - 1) >= 1) && ((y - 1) <= 9))
				Put_mine(show, mine, x + 1, y - 1, win);
			if (((x + 1) >= 1) && ((x + 1) <= 9) && (y >= 1) && (y <= 9))
				Put_mine(show, mine, x + 1, y, win);
			if (((x + 1) >= 1) && ((x + 1) <= 9) && ((y + 1) >= 1) && ((y + 1) <= 9))
				Put_mine(show, mine, x + 1, y + 1, win);
		}
		else
		{
			show[x][y] = count + '0';
		}

	}
	//Put_mine�ĵݹ�������
	// 1.�����޵���
	// 2.���겻Խ��
	// 3.�õ�ַû���жϹ�
	//���Լ���˼����û�г�����
	/*if (x < 1 || x>9 || y < 1 || y>9)
	{
		goto endline;
	}
	if (show[x][y] == 32)
	{
		
		show[x][y] = 32;
		show[x - 1][y - 1] = get_mine_count(mine, x - 1, y - 1) + '0'-16;
		Put_mine(show, mine, x - 1, y - 1);

		show[x - 1][y] = get_mine_count(mine, x - 1, y) + '0'-16;
		Put_mine(show, mine, x - 1, y);

		show[x - 1][y + 1] = get_mine_count(mine, x - 1, y + 1) + '0'-16;
		Put_mine(show, mine, x - 1, y + 1);
		show[x][y - 1] = get_mine_count(mine, x, y - 1) + '0'-16;
		Put_mine(show, mine, x, y - 1);
		show[x][y + 1] = get_mine_count(mine, x, y + 1) + '0'-16;
		Put_mine(show, mine, x, y + 1);
		show[x + 1][y - 1] = get_mine_count(mine, x + 1, y - 1) + '0'-16;
		Put_mine(show, mine, x + 1, y - 1);
		show[x + 1][y] = get_mine_count(mine, x + 1, y) + '0'-16;
		Put_mine(show, mine, x + 1, y);
		show[x + 1][y + 1] = get_mine_count(mine, x + 1, y + 1) + '0'-16;
		Put_mine(show, mine, x + 1, y + 1);
	}
endline:
	;*/
}
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while(win<row*col-EASY_COUNT)
	{
		printf("������Ҫ�Ų��׵�����:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����Ϸ�
			if (mine[x][y] == '1')
			{
				printf("���ź������ܵ�������ڵ��Ʋã�\n");//��һ����������ף�
				Displayboard(mine, row, col);
				break;
			}
			else//���ף�ͳ��xy������Χ������
			{
				Put_mine(show, mine, x, y, &win);
				Displayboard(show, row, col);
				//int count = get_mine_count(mine, x, y);
				//show[x][y] = count + '0';
				////Displayboard(show, row, col);
				////win++;
				////��ǣ�
				//if (show[x][y] == '0')
				//{
				//	Put_mine(show, mine, x, y,&win);
				//}
				//Displayboard(show, row, col);
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ��������������ű�������\n");
		Displayboard(mine, row, col);
	}
}
//չ�����ܵ�ʱ��-�ݹ飻