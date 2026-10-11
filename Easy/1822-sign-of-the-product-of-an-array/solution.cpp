// Problem: Sign of the Product of an Array
// Difficulty: Easy
// Link: https://leetcode.com/problems/sign-of-the-product-of-an-array/

class Solution {
public:
    int signum(int x){
        if(x==0){
            return 0;
        }
        else if(x<0){
            return -1;
        }
        else {
            return 1;
        }
    }
    int arraySign(vector<int>& nums) {
        int p=1;
        for(int i=0;i<nums.size();i++){
            p*=signum(nums[i]);
            if(p==0){
                return 0;
            }
        }
        return p;
    }
};