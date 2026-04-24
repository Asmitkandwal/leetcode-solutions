/*
 * Problem: 1752. Check if Array Is Sorted and Rotated
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/submissions/1986687446/
 * Language: cpp
 * Date: 2026-04-24
 */

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for(int i = 0;i<n;i++){
            int idx = (i+1)%n;
            if(nums[i] > nums[idx]){
                count++;
            }
        }

        return count<=1;
    }
};
