//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//void reverse(int arr[], int sz)
//{
//	int i = 0;
//	for (i=0; i<(sz+1)/2; i++)
//	{
//		if (i == sz - 1 - i)
//		{
//			break;
//		}
//		arr[i] = arr[sz - 1 - i] ^ arr[i];
//		arr[sz-1-i]= arr[sz - 1 - i] ^ arr[i];
//		arr[i] = arr[sz - 1 - i] ^ arr[i];
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int j = 0;
//	reverse(arr, sz);
//	for (j = 0; j < sz; j++)
//	{
//		printf("%d, ", arr[j]);
//	}
//	return 0;
//}