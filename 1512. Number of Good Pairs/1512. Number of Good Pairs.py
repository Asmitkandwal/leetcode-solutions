#
# Problem: 1512. Number of Good Pairs
# Difficulty: Easy
# Link: https://leetcode.com/problems/number-of-good-pairs/
# Language: python
# Date: 2026-04-22


class Solution(object):
    def numIdenticalPairs(self, nums):
        good_pairs = 0
        for i in range(0,len(nums)):
            for j in range(0,len(nums)):
                if (i<j and nums[i]==nums[j]):
                    good_pairs += 1

        return good_pairs
        
