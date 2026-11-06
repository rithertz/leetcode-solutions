// Problem: Three Consecutive Odds
// Difficulty: Easy
// Link: https://leetcode.com/problems/three-consecutive-odds/

class Solution {
public:
    bool isOdd(int x){
        return x&1;
    }
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n=arr.size();
        int oddCount=0;
        for(int i=0;i<n;i++){
            if(isOdd(arr[i])){
                oddCount++;
            }
            else{
                oddCount=0;
            }
            if(oddCount==3)return true;
        }
        return false;
    }
};