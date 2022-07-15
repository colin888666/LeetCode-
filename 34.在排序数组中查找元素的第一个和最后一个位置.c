/*
 * @lc app=leetcode.cn id=34 lang=c
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */

// @lc code=start

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *searchRange(int *nums, int numsSize, int target, int *returnSize)
{
    int left = 0;
    int right = numsSize - 1;
    int *res = (int *)malloc(sizeof(int) * 2);
    *returnSize = 2;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            int r = mid;
            int l = mid;

            while (r <= numsSize - 1 && nums[r] == target)
                r++;

            while (l >= 0 && nums[l] == target)
            {
                l--;
            }

            res[0] = l + 1;
            res[1] = r - 1;

            return res;
        }

        else if (nums[mid] <= target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    res[0] = -1;
    res[1] = -1;

    return res;
}
// @lc code=end
