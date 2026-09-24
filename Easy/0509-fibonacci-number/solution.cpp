// Problem: Fibonacci Number
// Difficulty: Easy
// Link: https://leetcode.com/problems/fibonacci-number/

class Solution {
public:
    int fib(int n) {
        if(n==0||n==1) return n;
        int first =0;int second=1;
        for(int i=2;i<=n;i++){
            int temp=first +second;
            first=second;
            second=temp;
        }
        return second;
    }
};