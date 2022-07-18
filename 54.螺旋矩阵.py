# @before-stub-for-debug-begin
# @before-stub-for-debug-end

#
# @lc app=leetcode.cn id=54 lang=python3
#
# [54] 螺旋矩阵
#

# @lc code=start


class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        m = len(matrix);
        n = len(matrix[0]);

        left = 0
        right = n - 1
        up = 0
        down = m - 1
        res = []
        # idx = 0


        while left <= right and up <= down:

            idx = left
            while idx <= right: 
                res.append(matrix[up][idx])
                idx += 1
            up += 1

            idx = up
            while idx <= down:
                res.append(matrix[idx][right]) 
                idx += 1
            right -= 1

            idx = right
            while idx >= left and up <= down:
                res.append(matrix[down][idx])
                idx -= 1
            down -= 1

            idx = down
            while idx >= up and left <= right:
                res.append(matrix[idx][left])
                idx -= 1
            left += 1

        return res
# @lc code=end

