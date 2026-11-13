// Problem: Number of Employees Who Met the Target
// Difficulty: Easy
// Link: https://leetcode.com/problems/number-of-employees-who-met-the-target/

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count=0;
        for(const auto &x:hours){
            if(x>=target)count++;
        }
        return count;
    }
};