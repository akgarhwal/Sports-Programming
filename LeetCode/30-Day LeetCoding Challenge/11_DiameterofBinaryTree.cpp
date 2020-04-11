/*
Given a binary tree, you need to compute the length of the diameter of the tree. The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

Note: The length of path between two nodes is represented by the number of edges between them.
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    int helper(TreeNode* root, int& ans){
        if(root == NULL){
            return 0;
        }
        int left = helper(root->left, ans);
        int right = helper(root->right, ans);
        ans = max({ans, left+right});
        return max(left,right)+1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 0;
        helper(root, ans);
        return ans;
    }
};
