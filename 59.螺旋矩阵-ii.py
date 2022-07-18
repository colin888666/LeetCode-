# @before-stub-for-debug-begin
from python3problem59 import *
from typing import *
# @before-stub-for-debug-end

#
# @lc app=leetcode.cn id=59 lang=python3
#
# [59] 螺旋矩阵 II
#

# @lc code=start
import numpy as np
class Solution:
    def generateMatrix(self, n: int) -> List[List[int]]:
        # res = [[0] * n for _ in range(n)]
        res = np.array(9).reshape(3, 3)
        left = 0
        right = n - 1
        up = 0
        down = n - 1
        idx = 1

        while left <= right and up <= down:
            i = left
            while i <= right:
                # res.append(idx)
                res[up][i] = idx
                idx += 1
                i += 1
            up += 1

            i = up
            while i <= down:
                # res.append(idx)
                res[i][right] = idx
                idx += 1
                i += 1
            right -= 1

            i = right
            while i >= left and up <= down:
                res[down][i] = idx
                idx += 1
                i -= 1
            down -= 1

            i = down
            while i >= up and left <= right:
                res[i][left] = idx
                idx += 1
                i -= 1
            left += 1

        return res   

# @lc code=end

