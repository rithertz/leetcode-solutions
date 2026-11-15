// Problem: Shift 2D Grid
// Difficulty: Easy
// Link: https://leetcode.com/problems/shift-2d-grid/

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int>linear;
        for(const auto &row:grid){
            for(const int &x:row){
                linear.push_back(x);
            }
        }
        int m=grid.size();
        int n=grid[0].size();
        k%=(m*n);
        reverse(linear.begin(),linear.end());
        reverse(linear.begin(),linear.begin()+k);
        reverse(linear.begin()+k,linear.end());
        int i=0;
        for( auto&row:grid){
            for(auto &x:row){
                x=linear[i++];
            }
        }
        return grid;
    }
};