#
# @lc app=leetcode.cn id=904 lang=python3
#
# [904] 水果成篮
#

# @lc code=start

class Solution:
    def totalFruit(self, fruits: List[int]) -> int:
        left = 0
        right = 0
        subr = fruits[left]
        subl = fruits[right]
        res = 0

        for right in range(len(fruits)):
            if fruits[right] in [subr, subl]:
                res = max(res, right - left + 1)
            else:
                subl = fruits[right - 1]
                left = right - 1

                while left >= 1 and fruits[left - 1] == subl:
                    left = left - 1
                subr = fruits[right]
                res = max(res, right - left + 1)
        return res

# @lc code=end

