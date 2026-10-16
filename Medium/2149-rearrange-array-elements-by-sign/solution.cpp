// Problem: Rearrange Array Elements by Sign
// Difficulty: Medium
// Link: https://leetcode.com/problems/rearrange-array-elements-by-sign/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        vector<int> res;
        int i = 0 , j = 0;
        while(s != n){
            while(nums[i] < 0)i++;
            res.push_back(nums[i++]);
            while(nums[j] > 0)j++;
            res.push_back(nums[j++]);
            s += 2;
        }
        return res;
    }
};