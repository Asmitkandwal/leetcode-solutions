#
# Problem: 3541. Find Most Frequent Vowel and Consonant
# Difficulty: Easy
# Link: https://leetcode.com/problems/find-most-frequent-vowel-and-consonant/submissions/1984991995/
# Language: python
# Date: 2026-04-22


class Solution(object):
    def maxFreqSum(self, s):
        freq = {}
        vowel = 0
        consonent = 0

        for ch in s:
            freq[ch] = freq.get(ch,0)+1
            temp = freq[ch]
            if ch in "aeiou":
                vowel = max(vowel,temp)
            else:
                consonent = max(consonent , temp)

        return vowel+consonent                    


        
