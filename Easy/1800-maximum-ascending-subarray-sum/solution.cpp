// Problem: Maximum Ascending Subarray Sum
// Difficulty: Easy
// Link: https://leetcode.com/problems/maximum-ascending-subarray-sum/

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size();
        int maxSum=nums[0];
        int currSum=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                currSum+=nums[i];
                maxSum=max(currSum,maxSum);
            }
            else{
                currSum=nums[i];
            }
        }
        return maxSum;
    }
};