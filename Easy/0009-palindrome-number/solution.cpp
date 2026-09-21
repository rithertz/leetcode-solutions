// Problem: Palindrome Number
// Difficulty: Easy
// Link: https://leetcode.com/problems/palindrome-number/

class Solution {
public:

    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int temp=x;
        long  num=0;
        while(temp){
            num=num*(10)+(temp%10);
            temp/=10;
        }
        return x==num;
            
    }
};