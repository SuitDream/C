//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int binary_search(int x[], int y, int sz)
//{
//	int left = 0;
//	//int sz = sizeof(x) / sizeof(x[0]);       //数组在传参的过程中，仅仅把首个元素的地址传过去
//	int right = sz - 1;                        //实际上x[]这里是个指针；所以这种方法计算不出元素个数；
//	while (left <= right)                      //但是可以在外面计算好sz，再引入；
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
//		printf("该目标不在索引内！");
//	else
//		printf("该目标的下标为[%d]", binary_search(arr, a, sz));
//	return 0;
//}

