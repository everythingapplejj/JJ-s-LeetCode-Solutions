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
    void helper(TreeNode* root, vector<int>& sample) {
        if (root == NULL) {
            return; 
        }
        helper(root -> left, sample);
        sample.push_back(root -> val);
        helper(root -> right, sample); 
    }
    bool isValidBST(TreeNode* root) {
        vector<int> sample; 
        helper(root, sample); 
        for (int i = 0; i < sample.size() - 1; i++) {
            if (sample[i] >= sample[i + 1]) {
                return false; 
            }
        }
        return true; 
    }
};