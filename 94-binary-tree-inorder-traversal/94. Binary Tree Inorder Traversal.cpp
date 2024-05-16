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
    void inorder(TreeNode * root , vector<int>& sample) {
        if (root == nullptr) {
            return; 
        }
        inorder(root -> left, sample);
        sample.push_back(root -> val);
        inorder(root -> right, sample); 
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> sample; 
        inorder(root, sample);
        return sample; 
    }
};