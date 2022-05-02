//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
////编写一个函数reverse_string(char* string)(递归实现)
////实现：将参数字符串中的字符反向排列；
////要求：不能使用库函数中的字符串操作函数；
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
////定义函数这里的指针可以写char arr[]或者char* arr；
//
//void reverse_string3(char arr[])//法三：递归法
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		reverse_string3(arr + 1);
//	arr[len - 1] = tmp;
//}
//void reverse_string2(char arr[])//法二
//{
//	int left = 0;
//	int right = strlen(arr) - 1;//如果按要求不能使用库函数，可以把strlen更换为my_strlen;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void reverse_string(char arr[], int sz)//法一
//{
//	int i = 0;
//	char tmp = 0;
//	for (i=0;i <= (sz-1)/2; i++)
//	{
//		tmp = arr[i];
//		arr[i] = arr[sz - i - 2];
//		arr[sz - i - 2] = tmp;
//	}
//
//}
//
//int main()
//{
//	int i = 0;
//	char arr[] = "brother";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse_string(&arr, sz);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%c", arr[i]);
//	//}
//	printf("法一： %s\n", arr);
//	reverse_string2(arr);
//	printf("法二： %s\n", arr);
//	reverse_string3(arr);
//	printf("法三： %s\n", arr);
//	return 0;
//	/*出现问题：
//	   1.ar[i]的交换下标应该为[sz-i-2],而不是[sz-i-1],这样写就导致了arr[0]和arr[7]交换，
//	     这样利用循环打印可以打出来，但是arr[0]中的内容是‘\0’,这也导致了后面我用一个
//		 pringf（）函数-“%s”，但是打印出空内容，因为"\0"导致它直接结束了打印命令。*/
//}