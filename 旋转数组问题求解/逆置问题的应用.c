//��ת����
//����һ�����飬�������е�Ԫ�������ƶ�k��λ�ã�����k�ǷǸ�����
//���ף�
//�پ������������Ľ��������������3�в�ͬ�ķ������Խ���������
//�������ʹ�ÿռ临�Ӷ�ΪO��1����ԭ���㷨������������

/*˼·һ��������⣬��תK��
          ʱ�临�Ӷȣ�O��N*K�� �ռ临�Ӷȣ�O��1�� */

/*˼·�������ٶ���ռ�   �Կռ任ʱ��
  Eg�����룺nums = {1,2,3,4,5,6,7,},K=3
      tem    5,6,7,    1,2,3,4
      �����[5,6,7,1,2,3,4]
      ʱ�临�Ӷ�O(N)    �ռ临�Ӷ�O��N��*/

/*˼·����ǰn-k�����ã���n-k�������ã������������
      ʱ�临�Ӷ�O��N��  �ռ临�Ӷ�O��1��*/
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
    //ǰn-k��������
    Reserve(nums, 0, numsSize - k - 1);
    //��k������
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