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
    int maxDepth(TreeNode* root) {
        if(root == nullptr) {
            return 0;
        }
        if(root -> left == nullptr && root -> right == nullptr) {
            return 1; 
        }
        if(root -> left != nullptr && root -> right == nullptr) {
            return 1 + maxDepth(root -> left); 
        }
        if(root -> left == nullptr && root -> right != nullptr) {
            return 1 + maxDepth(root -> right);
        }

        int left_depth = maxDepth(root -> left); 
        int right_depth = maxDepth(root -> right);

        return 1 + std::max(left_depth, right_depth); 
    }
};