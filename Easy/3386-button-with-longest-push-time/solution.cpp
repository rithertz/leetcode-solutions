// Problem: Button with Longest Push Time
// Difficulty: Easy
// Link: https://leetcode.com/problems/button-with-longest-push-time/

class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int maxDuration = events[0][1];
        int result = events[0][0];

        for (int i = 1; i < events.size(); i++) {
            int duration = events[i][1] - events[i - 1][1];
            if (duration > maxDuration || 
               (duration == maxDuration && events[i][0] < result)) {
                maxDuration = duration;
                result = events[i][0];
            }
        }

        return result;
    }
};