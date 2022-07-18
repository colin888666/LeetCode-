/*
 * @lc app=leetcode.cn id=54 lang=c
 *
 * [54] 螺旋矩阵
 */

// @lc code=start

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *spiralOrder(int **matrix, int matrixSize, int *matrixColSize, int *returnSize)
{

    int m = matrixSize;
    int n = *matrixColSize;
    *returnSize = m * n;

    int *res = (int *)malloc(sizeof(int) * (*returnSize));

    int left = 0;
    int right = n - 1;
    int up = 0;
    int down = m - 1;
    int idx = 0;

    while (left <= right && up <= down)
    {
        for (int i = left; i <= right; i++)
            res[idx++] = matrix[up][i];
        up++;

        for (int i = up; i <= down; i++)
            res[idx++] = matrix[i][right];
        right--;

        for (int i = right; i >= left && up <= down; i--)
            res[idx++] = matrix[down][i];
        down--;

        for (int i = down; i >= up && left <= right; i--)
            res[idx++] = matrix[i][left];
        left++;
    }
    return res;
}
// @lc code=end
