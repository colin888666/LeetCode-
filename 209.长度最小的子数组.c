/*
 * @lc app=leetcode.cn id=209 lang=c
 *
 * [209] 长度最小的子数组
 */

// @lc code=start

// # include<Limits.h>
int minSubArrayLen(int target, int *nums, int numsSize)
{
    if (numsSize == 0)
        return 0;

    int slow = 0;
    int fast = 0;
    int sum = 0;
    int res = __INT_MAX__;

    while (fast < numsSize)
    {
        sum = sum + nums[fast];

        while (sum >= target)
        {
            res = fmin(res, fast - slow + 1);
            sum = sum - nums[slow];
            slow++;
        }
        fast++;
    }

    if (res == __INT_MAX__)
        return 0;
    else
        return res;
}
// @lc code=end
