// Problem: Nim Game
// Difficulty: Easy
// Link: https://leetcode.com/problems/nim-game/

class Solution {
public:
    bool canWinNim(int n) {
        return n%4!=0;
    }
};