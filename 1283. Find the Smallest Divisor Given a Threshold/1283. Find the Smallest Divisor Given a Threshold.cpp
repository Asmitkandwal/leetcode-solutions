/*
 * Problem: 1283. Find the Smallest Divisor Given a Threshold
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/
 * Language: cpp
 * Date: 2026-08-01
 */

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        
        int ans = INT_MAX;
        while(low<=high){
            int temp = 0;
            int mid = low +(high-low)/2;
            for(int i = 0;i<nums.size();i++){
                temp += ceil((double)nums[i]/(double)mid);
            }
            

            if(temp <= threshold){
                ans = min(ans,mid);
                high = mid-1;
            }else if(temp > threshold){
                low = mid+1;
            }

        }

        return ans;
    }
};
