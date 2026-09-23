// Problem: Valid Palindrome
// Difficulty: Easy
// Link: https://leetcode.com/problems/valid-palindrome/

class Solution {
public:
    bool isp(const string &s,int st,int end){
        if(st>=end) return true;
        if(s[st]!=s[end]) return false;
        return isp(s,st+1,end-1);
    }
    bool isPalindrome(string &s) {
        string str;
        for(char ch:s){
            if(isalnum(ch)){
                str+=tolower(ch);
            }
        }
        return isp(str,0,str.length()-1);
    }
};