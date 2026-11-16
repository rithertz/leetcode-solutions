// Problem: Left and Right Sum Differences
// Difficulty: Easy
// Link: https://leetcode.com/problems/left-and-right-sum-differences/

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int totalSum = 0;
        for(int x : nums) totalSum += x;

        int leftSum = 0;
        for(int i = 0; i < nums.size(); i++){
            int rightSum = totalSum - leftSum - nums[i];
            int curr = nums[i];   // store original value
            nums[i] = abs(leftSum - rightSum);
            leftSum += curr;
        }
        return nums;
    }
};