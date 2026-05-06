#
# Problem: 136. Single Number
# Difficulty: Easy
# Link: https://leetcode.com/problems/single-number/submissions/1996274291/
# Language: python
# Date: 2026-05-06


class Solution(object):
    def singleNumber(self, nums):
        xor_val = 0
        for i in nums:
            xor_val = xor_val ^ i

        return xor_val
        
