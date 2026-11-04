// Problem: Check if All Characters Have Equal Number of Occurrences
// Difficulty: Easy
// Link: https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int freq[26] = {0}, count=0;
        for(char &c: s)
        {
            freq[c-'a']++;
        }
        for(int i=0; i<26; i++)
        {
            if(count==0 && freq[i]!=0) count=freq[i];

            if(count != freq[i] && freq[i]!=0) return false;
        }
        return true;
    }
};