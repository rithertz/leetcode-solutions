// Problem: Excel Sheet Column Title
// Difficulty: Easy
// Link: https://leetcode.com/problems/excel-sheet-column-title/

class Solution {
public:
    string convertToTitle(int columnNumber) {
        //create dictionary
        map<int,string> dict;
        for(int i=1;i<=26;i++){
            dict[i]='A'+i-1;
        }
        int temp=columnNumber;
        string result="";
        while(temp){
            if(temp%26==0){
                result+=dict[26];
                temp-=26;
            }
            else{
            result+=dict[(temp%26)];
            }
            temp/=26;
            
        }
        reverse(result.begin(),result.end());
        return result;
    }
};