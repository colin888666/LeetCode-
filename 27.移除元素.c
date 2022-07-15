/*
 * @lc app=leetcode.cn id=27 lang=c
 *
 * [27] 移除元素
 */

// @lc code=start

int removeElement(int *nums, int numsSize, int val)
{

    int slow = 0;
    int fast = 0;

    while (fast < numsSize)
    {
        if (nums[fast] != val)
        {
            nums[slow] = nums[fast];
            slow++;
        }

        fast++;
    }

    return slow;
}
// @lc code=end
