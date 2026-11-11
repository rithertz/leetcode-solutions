// Problem: Compute Decimal Representation
// Difficulty: Easy
// Link: https://leetcode.com/problems/compute-decimal-representation/

class Solution {
public:
    void base10(int n,stack<int> &nums){
        long mul=1;
        while(n){
            int x=n%10;
            if(x!=0){
                nums.push(x*mul);
            }
            n/=10;
            mul*=10;
        }
    }
    vector<int> decimalRepresentation(int n) {
        stack<int>nums;
        base10(n,nums);
        vector<int>result;
        while(nums.empty()!=1){
            result.push_back(nums.top());
            nums.pop();
        }
        return result;
    }
};