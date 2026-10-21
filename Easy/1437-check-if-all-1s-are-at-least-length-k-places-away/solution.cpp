// Problem: Check If All 1's Are at Least Length K Places Away
// Difficulty: Easy
// Link: https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away/

class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int dist=0;
        bool firstOne=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) {
                if(dist<k && firstOne==true){
                    return false;
                }
                else{
                    firstOne=true;
                    dist=0;
                }
            }
            else{
                dist++;
            }
        }
        return true;
    }
};