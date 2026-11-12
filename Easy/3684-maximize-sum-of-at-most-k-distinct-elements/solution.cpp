// Problem: Maximize Sum of At Most K Distinct Elements
// Difficulty: Easy
// Link: https://leetcode.com/problems/maximize-sum-of-at-most-k-distinct-elements/

class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        unordered_set<int> unique(nums.begin(), nums.end());
        priority_queue<int> pq(unique.begin(), unique.end());

        vector<int> result;
        while(k-- && !pq.empty()){
            result.push_back(pq.top());
            pq.pop();
        }
        return result;
    }
};