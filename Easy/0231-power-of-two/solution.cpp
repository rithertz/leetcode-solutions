// Problem: Power of Two
// Difficulty: Easy
// Link: https://leetcode.com/problems/power-of-two/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1) return false;
        return ((n&(n-1))==0) && (n>0);
    }
};