// Problem: Points That Intersect With Cars
// Difficulty: Easy
// Link: https://leetcode.com/problems/points-that-intersect-with-cars/

class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        int count=0;        
        vector<int>v(101, 0);//array with 101 elements indexed 0 to 100
        for(int i=0;i<nums.size();i++){
            int startIndex=nums[i][0];
            int endIndex=nums[i][1];
            for(int k=startIndex;k<=endIndex;k++){
                v[k]++;
            }
        }
        for(int i=1;i<v.size();i++){
            if(v[i]!=0){
                count++;
            }
        }
        return count;
    }
};