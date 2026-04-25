/*
 * Problem: 26. Remove Duplicates from Sorted Array
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/1987403587/
 * Language: cpp
 * Date: 2026-04-25
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int  index = 1;

        for(int i = 1;i<nums.size();i++){
            if(nums[i] != nums[i-1]){
                nums[index] = nums[i];
                index++;
            }
        }

        return index;
    }
};
