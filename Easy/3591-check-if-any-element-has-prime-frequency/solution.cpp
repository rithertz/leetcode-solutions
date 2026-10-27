// Problem: Check if Any Element Has Prime Frequency
// Difficulty: Easy
// Link: https://leetcode.com/problems/check-if-any-element-has-prime-frequency/

class Solution {
public:
    bool isPrime(int x){
        if(x<=1) return false;
        if(x==2) return true;
        for(int i=2;i*i<=x;i++){
            if(x%i==0) {
                return false;
            }
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(auto&x:nums){
            freq[x]++;
        }
        for(const auto&x:freq){
            if(isPrime(x.second)){
                return true;
            }
        }
        return false;
    }
};