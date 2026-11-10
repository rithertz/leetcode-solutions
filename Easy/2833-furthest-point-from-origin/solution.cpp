// Problem: Furthest Point From Origin
// Difficulty: Easy
// Link: https://leetcode.com/problems/furthest-point-from-origin/

class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int lcount=0,rcount=0,_count=0;
        for(char ch:moves){
            if(ch=='L'){lcount++;}
            else if(ch=='R'){rcount++;}
            else {_count++;}
        }
        int mostTurns=max(lcount,rcount);
        return mostTurns-(lcount+rcount-mostTurns)+_count;
    }
};