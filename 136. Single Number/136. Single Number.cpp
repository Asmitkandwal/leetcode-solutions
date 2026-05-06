/*
 * Problem: 136. Single Number
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/single-number/submissions/1996271104/
 * Language: cpp
 * Date: 2026-05-06
 */

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<long long , int> mpp;
        for(int i = 0;i<nums.size();i++){
            mpp[nums[i]]++;
        }

        for(auto i : mpp){
            if(i.second == 1){
                return (i.first);
            }
        }

        return -1;
    }
};
