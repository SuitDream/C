//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
////��дһ������reverse_string(char* string)(�ݹ�ʵ��)
////ʵ�֣��������ַ����е��ַ��������У�
////Ҫ�󣺲���ʹ�ÿ⺯���е��ַ�������������
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
////���庯�������ָ�����дchar arr[]����char* arr��
//
//void reverse_string3(char arr[])//�������ݹ鷨
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		reverse_string3(arr + 1);
//	arr[len - 1] = tmp;
//}
//void reverse_string2(char arr[])//����
//{
//	int left = 0;
//	int right = strlen(arr) - 1;//�����Ҫ����ʹ�ÿ⺯�������԰�strlen����Ϊmy_strlen;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void reverse_string(char arr[], int sz)//��һ
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
//	printf("��һ�� %s\n", arr);
//	reverse_string2(arr);
//	printf("������ %s\n", arr);
//	reverse_string3(arr);
//	printf("������ %s\n", arr);
//	return 0;
//	/*�������⣺
//	   1.ar[i]�Ľ����±�Ӧ��Ϊ[sz-i-2],������[sz-i-1],����д�͵�����arr[0]��arr[7]������
//	     ��������ѭ����ӡ���Դ����������arr[0]�е������ǡ�\0��,��Ҳ�����˺�������һ��
//		 pringf��������-��%s�������Ǵ�ӡ�������ݣ���Ϊ"\0"������ֱ�ӽ����˴�ӡ���*/
//}