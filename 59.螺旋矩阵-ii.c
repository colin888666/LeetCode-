/*
 * @lc app=leetcode.cn id=59 lang=c
 *
 * [59] 螺旋矩阵 II
 */

// @lc code=start

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int **generateMatrix(int n, int *returnSize, int **returnColumnSizes)
{

    int i = 0;
    int left = 0;
    int right = n - 1;
    int up = 0;
    int down = n - 1;
    int idx = 1;

    int **res = (int **)malloc(sizeof(int *) * n);
    *returnColumnSizes = (int *)malloc(sizeof(int) * n);
    *returnSize = n;

    for (i = 0; i < n; i++)
    {
        res[i] = (int *)malloc(sizeof(int) * n);
        (*returnColumnSizes)[i] = n;
    }

    while (up <= down && left <= right)
    {
        for (i = left; i <= right; i++)
            res[up][i] = idx++;
        up++;

        for (i = up; i <= down; i++)
            res[i][right] = idx++;
        right--;

        for (i = right; i >= left && up <= down; i--)
            res[down][i] = idx++;
        down--;

        for (i = down; i >= up && left <= right; i--)
            res[i][left] = idx++;
        left++;
    }
    return res;

    // int i = 0;
    // int up = 0;
    // int down = n - 1;
    // int left = 0;
    // int right = n - 1;
    // int idx = 1;

    // int **res = (int **)malloc(sizeof(int *) * n);
    // *returnColumnSizes = (int *)malloc(sizeof(int) * n);
    // *returnSize = n;

    // for (i = 0; i < n; i++)
    // {
    //     res[i] = (int *)malloc(sizeof(int) * n);
    //     (*returnColumnSizes)[i] = n;
    // }

    // while (up <= down && left <= right)
    // {
    //     for (i = left; i <= right; i++)
    //         res[up][i] = idx++;
    //     up++;

    //     for (i = up; i <= down; i++)
    //         res[i][right] = idx++;
    //     right--;

    //     for (i = right; i >= left && up <= down; i--)
    //         res[down][i] = idx++;
    //     down--;

    //     for (i = down; i >= up && left <= right; i--)
    //         res[i][left] = idx++;
    //     left++;
    // }

    // return res;
}

// @lc code=end
