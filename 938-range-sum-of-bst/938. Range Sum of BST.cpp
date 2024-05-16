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
    void helper(TreeNode * root, int low, int high, vector<int>&container) {
        if(root == nullptr) {
            return;
        }
        if(root -> val >= low && root -> val <= high) {
            container.push_back(root -> val);
        }
        helper(root -> left, low, high, container);
        helper(root -> right, low, high, container); 
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        std::vector<int>container; 
        helper(root, low, high, container);
        int returning_sum = 0; 
        for (unsigned int i = 0; i < container.size(); i++) {
            returning_sum += container[i];
        }
        return returning_sum; 
    }
};