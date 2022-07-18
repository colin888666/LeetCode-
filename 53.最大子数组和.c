/*
 * @lc app=leetcode.cn id=53 lang=c
 *
 * [53] 最大子数组和
 */

// @lc code=start


int maxSubArray(int* nums, int numsSize){

    int i = 0;
    int max = INT_MIN;
    int sum = 0;

    for(i = 0; i < numsSize; i++)
    {
        sum = sum + nums[i];

        if (sum > max)
            max = sum;

        if (sum < 0)
        {
            sum = 0;
        }
        
    }
    
    return max;
}
// @lc code=end

