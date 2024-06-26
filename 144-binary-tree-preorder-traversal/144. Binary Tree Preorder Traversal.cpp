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
    void preorder(TreeNode * root, vector<int>& sample) {
        if (root == nullptr) {
            return; 
        }
        sample.push_back(root -> val);
        preorder(root -> left, sample);
        preorder(root -> right, sample);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> sample;
        preorder(root, sample); 
        return sample; 
    }
};