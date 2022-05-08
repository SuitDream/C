//旋转数组
//给定一个数组，将数组中的元素向右移动k个位置，其中k是非负数。
//进阶：
//①尽可能想出更多的解决方案，至少有3中不同的方法可以解决这个问题
//②你可以使用空间复杂度为O（1）的原地算法解决这个问题吗？

/*思路一：暴力求解，旋转K次
          时间复杂度：O（N*K） 空间复杂度：O（1） */

/*思路二：开辟额外空间   以空间换时间
  Eg：输入：nums = {1,2,3,4,5,6,7,},K=3
      tem    5,6,7,    1,2,3,4
      输出：[5,6,7,1,2,3,4]
      时间复杂度O(N)    空间复杂度O（N）*/

/*思路三：前n-k先逆置，后n-k个在逆置，最后整体逆置
      时间复杂度O（N）  空间复杂度O（1）*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Reserve(int* nums, int left, int right){
    while (left < right) {
        int tmp = nums[left];
        nums[left] = nums[right];
        nums[right] = tmp;
        ++left;
        --right;
    }
}
void rotate(int* nums, int numsSize, int k) {
    if (k >= numsSize)
        k %= numsSize;
    //前n-k个数逆置
    Reserve(nums, 0, numsSize - k - 1);
    //后k个逆置
    Reserve(nums, numsSize - k, numsSize - 1);
    Reserve(nums, 0, numsSize - 1);
}
int main()
{
    int arr[] = { 1,2,3,4,5,6 };
    int k = 1;
    int a = sizeof(arr) / sizeof(arr[0]);
    scanf(&k);
    rotate(arr, a, k);
    for (int i = 0; i < a; i++) {
        printf("arr[%d]=%d\n", i, arr[i]);
    }
    return 0;
}