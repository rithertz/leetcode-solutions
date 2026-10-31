// Problem: Minimum Changes To Make Alternating Binary String
// Difficulty: Easy
// Link: https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/

class Solution {
public:
    int minOperations(string s) {
        int ops1=0, ops2=0;
        for(int i=0;i<s.length();i++){
            char expected1=(i%2==0) ? '0':'1';
            char expected2=(i%2==0) ? '1':'0';
            if(s[i]!=expected1)ops1++;
            if(s[i]!=expected2)ops2++;
        }
        return min(ops1, ops2);
    }
};