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
    void helper(TreeNode *& root1, TreeNode *& root2) {
        if(root1 == nullptr && root2 == nullptr) {
            return; 
        }
        if(root1 == nullptr && root2 != nullptr) {
            TreeNode * sample = root2;
            root1 = sample;
            return; 
        }
        if(root1 != nullptr && root2 == nullptr) {
            return;
        }
        root1 -> val = root1 -> val + root2 -> val;
        helper(root1 -> left, root2 -> left);
        helper(root1 -> right, root2 -> right);
    }
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1 == nullptr && root2 == nullptr) {
            return nullptr;
        }
        if(root1 != nullptr && root2 == nullptr) {
            return root1;
        }
        if(root1 == nullptr && root2 != nullptr) {
            return root2; 
        }
        helper(root1, root2);
        return root1; 
        // maybe use preorder traversal decide each node? 
        // maybe use bfs traversal? to cover all the nodes. 
    }
};