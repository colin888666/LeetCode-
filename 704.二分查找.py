#
# @lc app=leetcode.cn id=704 lang=python3
#
# [704] 二分查找
#

# @lc code=start
from operator import le


class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left = 0
        right = len(nums) - 1

        while left <= right:
            mid = (int) (left + (right - left) / 2)

            if nums[mid] == target:
                return mid

            elif nums[mid] <= target:
                left = mid + 1
            
            else:
                right = mid - 1

        return -1
# @lc code=end

