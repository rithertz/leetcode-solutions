// Problem: Climbing Stairs
// Difficulty: Easy
// Link: https://leetcode.com/problems/climbing-stairs/

class Solution {
public:
    int climbStairs(int n) {
        if(n==1 || n==2 || n==3 ) return n;
        int first =0;
        int second=1;
        for(int i=1;i<=n;i++){
            int temp=second;
            second=first+second;
            first=temp;
        }
        return second;
    }
};