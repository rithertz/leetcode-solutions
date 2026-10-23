// Problem: Number of Common Factors
// Difficulty: Easy
// Link: https://leetcode.com/problems/number-of-common-factors/

class Solution {
public:
    int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
    }
    int commonFactors(int a, int b) {
        int hcf=gcd(a,b);
        int count=0;
        for(int i=2;i<=hcf;i++){
            if(a%i==0&&b%i==0){count++;}
        }
        return count+1;
    }
};