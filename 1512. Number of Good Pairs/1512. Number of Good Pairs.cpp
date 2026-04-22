/*
 * Problem: 1512. Number of Good Pairs
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/number-of-good-pairs/submissions/1984968239/
 * Language: cpp
 * Date: 2026-04-22
 */

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int good_pairs = 0;
        for(int i = 0;i<nums.size();i++){
            for(int j = 0;j<nums.size();j++){
                if(i<j && nums[i]==nums[j]){
                    good_pairs++;
                }
            }
        }

        return good_pairs;
    }
};
