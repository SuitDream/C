#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>     //引用了rand()函数；和srand函数；
#include <time.h>       //引用了time()函数；

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
	//srand((unsigned int)time(NULL));//不要多次启动srand，这会导致生成数不够随机；
	ret = rand()%100+1;            //rand()-生成随机数；srand()-设置随机数的生成起始点；
	while (1)
	{
		printf("请猜数字>：\n");
		scanf("%d", &guess);
		if (guess > ret)
			printf("猜大了！\n");
		else if (guess < ret)
			printf("猜小了！\n");
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;                  //time_t是time32_t的重命名；time32_t是一个长整形；
	srand((unsigned int)time(NULL));//NULL意思是一个空指针；unsigned int - 强制定义为一个整形；
	do                              //这里利用了时间戳来定义一个随机变化的数值
	{                               //时间戳-当前计算机时间-计算机的起始时间（1970.1.1.0：0:0）=（XXXX）秒
		menu();                     //time_t time(timen_t *timer);time里面放的是一个指针;
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//猜数字游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}