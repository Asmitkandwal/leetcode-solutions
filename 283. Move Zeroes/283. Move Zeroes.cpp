/*
 * Problem: 283. Move Zeroes
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/move-zeroes/submissions/1989077124/
 * Language: cpp
 * Date: 2026-04-27
 */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int j = -1;
        int n = nums.size();

        // Find first zero, this becomes position where next non-zero should go
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }

        // No zero found, array already valid
        if (j == -1) return;

        for (int i = j + 1; i < n; i++) {

            // When non-zero is found after zero,
            // swap it with earliest zero position
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);

                // Move j to next zero position
                j++;
            }
        }
    }
};
