#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
	char arr1[] = "welcome to SuiMengs' home!!!";
	char arr2[] = "############################";
	int left = 0;
	int right = strlen(arr1) - 1;//strlen- 计算字符长度；<string.h>
	for(; left<=right; left++,right--)
	{
			arr2[left] = arr1[left];
			arr2[right] = arr1[right];
			printf("%s\n", arr2);
			if (left < right-1)
			{
				Sleep(500);//调用函数为<windows.h>;单位ms；1s=1000ms；
				system("cls");//执行系统命令的一个函数；-cls-清空屏幕；<stdlib.h>
			}
			else
				break;
	}
		
	return 0;
}

