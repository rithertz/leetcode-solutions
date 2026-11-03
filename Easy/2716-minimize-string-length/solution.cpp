// Problem: Minimize String Length
// Difficulty: Easy
// Link: https://leetcode.com/problems/minimize-string-length/

class Solution {
public:
    int minimizedStringLength(string s) {
        bool seen[26] = {false};
        int count = 0;        
        for(char ch : s) {
            int index = ch-'a';
            if(!seen[index]){
                seen[index]=true;
                count++;
            }
        }
        return count;
    }
};