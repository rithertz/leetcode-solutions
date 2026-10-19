// Problem: Count Pairs That Form a Complete Day I
// Difficulty: Easy
// Link: https://leetcode.com/problems/count-pairs-that-form-a-complete-day-i/

class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
       int pairCount=0;
        for(int i=0;i<hours.size()-1;i++){
            for(int j=i+1;j<hours.size();j++){
                if((hours[i]+hours[j])%24==0) pairCount++;
            }
        }
        return pairCount;
    }
};