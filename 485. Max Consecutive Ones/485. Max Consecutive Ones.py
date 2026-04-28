#
# Problem: 485. Max Consecutive Ones
# Difficulty: Easy
# Link: https://leetcode.com/problems/max-consecutive-ones/
# Language: python
# Date: 2026-04-28


class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        max_value = 0
        c = 0
        for i in range(len(nums)):
            if nums[i] == 1:
                c += 1
            elif nums[i] == 0:
                c = 0
            max_value = max(max_value , c)

        return max_value            

        
