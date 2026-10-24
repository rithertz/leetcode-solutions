// Problem: Convert Sorted Array to Binary Search Tree
// Difficulty: Easy
// Link: https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* createNode(int val){
    struct TreeNode* newNode=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->val=val;
    newNode->left=newNode->right=NULL;
    return newNode;
}
struct TreeNode* buildBST(int *nums,int start ,int end){
    if(start>end)return NULL;
    int mid=(start+end)/2;
    struct TreeNode* root=createNode(nums[mid]);
    root->left=buildBST(nums,start,mid-1);
    root->right=buildBST(nums,mid+1,end);
    return root;

}
struct TreeNode* sortedArrayToBST(int* nums, int n) {
    return buildBST(nums,0,n-1);
}