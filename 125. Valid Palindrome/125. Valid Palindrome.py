#
# Problem: 125. Valid Palindrome
# Difficulty: Easy
# Link: https://leetcode.com/problems/valid-palindrome/submissions/1983655031/
# Language: python
# Date: 2026-04-20


class Solution(object):
    def isPalindrome(self, s):
        str = '';
        length = len(s)
        for i in range(0,length):
            if s[i].isalnum():
                str += s[i].lower()

        str2 = str[::-1]
        return str2==str               
        
