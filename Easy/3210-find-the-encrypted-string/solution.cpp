// Problem: Find the Encrypted String
// Difficulty: Easy
// Link: https://leetcode.com/problems/find-the-encrypted-string/

class Solution {
public:
    string getEncryptedString(string s, int k) {
        string result="";
        int n=s.size();
        for(int i=0;i<n;i++){
            result+=s[(i+k)%n];
        }
        return result;
    }
};