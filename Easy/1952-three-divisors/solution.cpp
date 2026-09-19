// Problem: Three Divisors
// Difficulty: Easy
// Link: https://leetcode.com/problems/three-divisors/

class Solution {
public:
    bool isThree(int n) {
        int count=0;
        if(n==2){
            return false;
        }
        for(int i=2;i<=(int)(n/2)+1;i++){
            if(n%i==0){
                count++;
            }
            if(count>1){
                return false;
            }
        }
        return count==1;
    }
};