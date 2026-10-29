// Problem: Count Elements With Maximum Frequency
// Difficulty: Easy
// Link: https://leetcode.com/problems/count-elements-with-maximum-frequency/

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int>v(101,0);
        int max=-1;
        int maxCount=0;
        for(const auto &x:nums){
            v[x]++;
        }
        for(int i=1;i<v.size();i++){
            if(v[i]>max){
                max=v[i];
                maxCount=1;
            }
            else if(v[i]==max) {
                maxCount++;
            }
            else{
                continue;
            }
        }
        return maxCount*max;
    }
};