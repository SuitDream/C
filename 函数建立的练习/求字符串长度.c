//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int my_strlen(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//	/*if (*str != '\0')
//	{
//		return my_strlen(str+1)+1;
//	}
//	return 0;*/
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len = %d", len);
//	return 0;
//}//引发了异常: 读取访问权限冲突。
////** str** 是 0x63。