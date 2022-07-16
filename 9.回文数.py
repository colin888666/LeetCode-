#
# @lc app=leetcode.cn id=9 lang=python3
#
# [9] 回文数
#

# @lc code=start

class Solution:
    def isPalindrome(self, x: int) -> bool:

        x_str = str(x)
        left = 0
        right = len(x_str) - 1

        while left <= right:
            if x_str[left] != x_str[right]:
                return False
            left  = left + 1
            right = right - 1

        return True
        
# @lc code=end

