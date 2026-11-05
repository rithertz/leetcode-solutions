// Problem: Binary Tree Paths
// Difficulty: Easy
// Link: https://leetcode.com/problems/binary-tree-paths/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void generatePath(TreeNode*root,string path, vector<string>&result){
        if(!root){
            return;
        }
        path+=to_string(root->val);
        if(!root->left && !root->right){
            result.push_back(path);
            return;
        }
        path+="->";
        generatePath(root->left,path,result);
        generatePath(root->right,path,result);

    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>result;
        generatePath(root,"",result);
        return result;
    }
};