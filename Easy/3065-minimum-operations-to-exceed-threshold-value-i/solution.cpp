// Problem: Minimum Operations to Exceed Threshold Value I
// Difficulty: Easy
// Link: https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-i/

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        //sort(nums.begin(),nums.end());
        int count=0;
        for(int x:nums){
            if(x<k){
                count++;
            }
        }
        return count;
    }
    
};