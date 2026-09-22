// Problem: Find Greatest Common Divisor of Array
// Difficulty: Easy
// Link: https://leetcode.com/problems/find-greatest-common-divisor-of-array/

class Solution {
public:
    int gcd(int a,int b){
        if(b==0){
            return a;
        }
        else {
            return gcd(b,a%b);
        }
    }
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return gcd(nums[0],nums.back());
    }
};