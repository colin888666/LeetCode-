/*
 * @lc app=leetcode.cn id=69 lang=c
 *
 * [69] x 的平方根
 */

// @lc code=start

int mySqrt(int x)
{

    int left = 1;
    int right = x;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        int ratio = x / mid;

        if (ratio == mid)
            return ratio;

        else if (ratio >= mid)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return left - 1;
}
// @lc code=end
