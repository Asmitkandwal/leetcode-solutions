/*
 * Problem: 125. Valid Palindrome
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/valid-palindrome/submissions/1983644656/
 * Language: cpp
 * Date: 2026-04-20
 */

class Solution {
public:
    bool isPalindrome(string s) {
        string rev ;
        for(int i = 0;i<s.length();i++){
            if(isalnum(s[i])){
                rev += tolower(s[i]);
            }
        }
        string rev2 = rev;
        reverse(rev.begin(),rev.end());
        return rev==rev2;

    }
};
