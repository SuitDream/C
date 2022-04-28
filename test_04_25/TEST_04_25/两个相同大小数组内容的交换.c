//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = arr[i] ^ arr2[i];
//		arr2[i] = arr[i] ^ arr2[i];
//		arr[i] = arr[i] ^ arr2[i];
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%-2d, ", arr[i]);
//	}printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%-2d, ", arr2[i]);
//	}printf("\n");
//	return 0;
//}