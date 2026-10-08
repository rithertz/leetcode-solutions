// Problem: Sort Colors
// Difficulty: Medium
// Link: https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0,m=0,r=nums.size()-1;
        while(m<=r){
            int choice=nums[m];
            switch(choice){
                case 0:
                swap(nums[m++],nums[l++]);
                break;
                case 1:
                m++;
                break;
                case 2:
                swap(nums[m],nums[r--]);
                break;
            }
        }
    }
};