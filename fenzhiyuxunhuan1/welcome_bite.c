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
	int right = strlen(arr1) - 1;//strlen- �����ַ����ȣ�<string.h>
	for(; left<=right; left++,right--)
	{
			arr2[left] = arr1[left];
			arr2[right] = arr1[right];
			printf("%s\n", arr2);
			if (left < right-1)
			{
				Sleep(500);//���ú���Ϊ<windows.h>;��λms��1s=1000ms��
				system("cls");//ִ��ϵͳ�����һ��������-cls-�����Ļ��<stdlib.h>
			}
			else
				break;
	}
		
	return 0;
}

