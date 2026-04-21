/*
 * Problem: 509. Fibonacci Number
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/fibonacci-number/submissions/1984125441/
 * Language: cpp
 * Date: 2026-04-21
 */

class Solution {
public:
    int fib(int n) {

        // Base case: fib(0)=0, fib(1)=1
        if (n < 2) return n;

        // Fibonacci number = sum of previous two terms
        return fib(n - 1) + fib(n - 2);
    }
};
