/*
 * Problem: 26. Remove Duplicates from Sorted Array
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 * Language: cpp
 * Date: 2026-04-25
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> original;
        for(int i = 0;i<nums.size();i++){
            original.insert(nums[i]);
        }

        int index = 0;

        for(auto i : original){
            nums[index] = i;
            index++;
        }

        return original.size();
    }
};
