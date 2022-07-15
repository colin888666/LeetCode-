/*
 * @lc app=leetcode.cn id=977 lang=c
 *
 * [977] 有序数组的平方
 */

// @lc code=start

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *sortedSquares(int *nums, int numsSize, int *returnSize)
{

    int *res = (long *)malloc(sizeof(long) * numsSize);
    *returnSize = numsSize;
    int cnt = numsSize - 1;
    int left = 0;
    int right = numsSize - 1;

    while (left <= right)
    {
        if (nums[left] * nums[left] >= nums[right] * nums[right])
        {
            res[cnt] = nums[left] * nums[left];
            left++;
        }
        else
        {
            res[cnt] = nums[right] * nums[right];
            right--;
        }
        cnt--;
    }

    return res;
}
// @lc code=end
