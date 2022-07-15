/*
 * @lc app=leetcode.cn id=904 lang=c
 *
 * [904] 水果成篮
 */

// @lc code=start

//滑动窗口
int totalFruit(int *fruits, int fruitsSize)
{
    int res = 0;
    int left = 0;
    int right = 0;
    int subl = fruits[left];
    int subr = fruits[right];

    for (right = 0; right < fruitsSize; right++)
    {
        if (fruits[right] == subl || fruits[right] == subr)
        {
            res = fmax(right - left + 1, res);
        }
        else
        {
            subl = fruits[right - 1];
            left = right - 1;
            while (left >= 1 && fruits[left - 1] == subl)
            {
                left--;
            }
            subr = fruits[right];
            res = fmax(res, right - left + 1);
        }
    }
    return res;
}

// @lc code=end
