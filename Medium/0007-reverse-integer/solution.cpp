// Problem: Reverse Integer
// Difficulty: Medium
// Link: https://leetcode.com/problems/reverse-integer/

class Solution {
public:
    int reverse(int x) {
        long rev=0;
        while(x){
            rev=(10*rev+x%10);
            x/=10;
        }
        if(rev<INT_MIN||rev>INT_MAX){
            return 0;
        }
        return (int)rev;
    }
};