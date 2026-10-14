// Problem: Row With Maximum Ones
// Difficulty: Easy
// Link: https://leetcode.com/problems/row-with-maximum-ones/

class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int max_count=-1;
        int max_index=-1;
        for(int i=0;i<mat.size();i++){
            int current_count=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    current_count++;
                }
            }
            if(current_count>max_count){
                max_count=current_count;
                max_index=i;
            }
        }
        return {max_index,max_count};
    }
};