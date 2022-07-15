/*
 * @lc app=leetcode.cn id=367 lang=c
 *
 * [367] 有效的完全平方数
 */

// @lc code=start

#include <stdbool.h>
bool isPerfectSquare(int num)
{
    if (num == 1)
    {
        return true;
    }

    int left = 1;
    int right = num / 2;

    while (left <= right)
    {
        float ratio = num * 1.0 / left;
        if (ratio == left)
            return true;

        left++;
    }

    return false;
}
// @lc code=end
