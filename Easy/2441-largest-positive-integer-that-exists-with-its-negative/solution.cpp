// Problem: Largest Positive Integer That Exists With Its Negative
// Difficulty: Easy
// Link: https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/

class Solution {
public:
    int findMaxK(vector<int>& nums) {
          sort(nums.begin(),nums.end());
          int l=0,r=nums.size()-1;
          while(l<r){
            if(nums[l]+nums[r]>0){
                r--;
            }
            else if(nums[l]+nums[r]<0){
                l++;
            }
            else{
                return nums[r];
            }
          }
          return -1;     
    }
};