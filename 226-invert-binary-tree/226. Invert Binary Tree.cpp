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
    void postorder(TreeNode * root) {
        if(root == nullptr){
            return; 
        }
        postorder(root -> left);
        postorder(root -> right);
        TreeNode * placeholder = root -> left; 
        root -> left = root -> right; 
        root -> right = placeholder; 
    }
    TreeNode* invertTree(TreeNode* root) {
        postorder(root);
        return root; 
    }
};