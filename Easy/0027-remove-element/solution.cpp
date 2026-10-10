// Problem: Remove Element
// Difficulty: Easy
// Link: https://leetcode.com/problems/remove-element/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l=0,r=nums.size()-1;
        while(l<=r){
            if(nums[l]!=val && nums[r]==val){
                l++;r--;
            }
            else if(nums[l]==val && nums[r]==val){
                r--;
            }
            else if(nums[l]!=val && nums[r]!=val){
                l++;
            }
            else if(nums[l]==val && nums[r]!=val){
                swap(nums[l++],nums[r--]);
            }
        }
        return l;

    }
};