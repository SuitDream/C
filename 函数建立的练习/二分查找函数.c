//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int binary_search(int x[], int y, int sz)
//{
//	int left = 0;
//	//int sz = sizeof(x) / sizeof(x[0]);       //�����ڴ��εĹ����У��������׸�Ԫ�صĵ�ַ����ȥ
//	int right = sz - 1;                        //ʵ����x[]�����Ǹ�ָ�룻�������ַ������㲻��Ԫ�ظ�����
//	while (left <= right)                      //���ǿ�������������sz�������룻
//	{
//		int mid = (left + right) / 2;
//		if (x[mid] > y)
//			right = mid - 1;
//		else if (x[mid] < y)
//			left = mid + 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &a);
//	if (binary_search(arr, a, sz) == -1)
//		printf("��Ŀ�겻�������ڣ�");
//	else
//		printf("��Ŀ����±�Ϊ[%d]", binary_search(arr, a, sz));
//	return 0;
//}

