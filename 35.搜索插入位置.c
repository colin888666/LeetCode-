/*
 * @lc app=leetcode.cn id=35 lang=c
 *
 * [35] 搜索插入位置
 */

// @lc code=start

int searchInsert(int *nums, int numsSize, int target)
{

    int left = 0;
    int right = numsSize - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return mid;

        else if (nums[mid] <= target)
            left = mid + 1;

        else
            right = mid - 1;
    }

    return left;
}
// @lc code=end
