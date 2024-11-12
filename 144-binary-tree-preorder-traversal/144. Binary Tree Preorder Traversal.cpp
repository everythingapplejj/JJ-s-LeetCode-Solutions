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
    void preorder(TreeNode * sample, vector<int>&final) {
        if(sample == nullptr) {
            return;
        }
        final.push_back(sample -> val);
        preorder(sample -> left, final);
        preorder(sample -> right,final); 
    }
    vector<int> preorderTraversal(TreeNode* root) {
        std::vector<int>finl;
        preorder(root, finl);
        return finl; 
    }
};