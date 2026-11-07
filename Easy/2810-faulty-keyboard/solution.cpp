// Problem: Faulty Keyboard
// Difficulty: Easy
// Link: https://leetcode.com/problems/faulty-keyboard/

class Solution {
public:
    void reverse(string &s,int l,int r){
        while(l<r){
            swap(s[l++],s[r--]);
        }
    }
    string finalString(string s) {
        int n=s.size();
        string current="";
        for(int i=0;i<n;i++){
            if(s[i]!='i'){
                current+=s[i];
            }
            else{
                reverse(current,0,current.size()-1);
            }
        }
        return current;
    }
};