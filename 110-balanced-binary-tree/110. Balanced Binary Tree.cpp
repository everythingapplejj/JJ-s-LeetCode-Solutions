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
 #include<stack>
class Solution {
public:
    int height(TreeNode * root) {
        if (root == nullptr) {
            return -1; 
        }
        if (root -> left == nullptr && root -> right == nullptr) {
            return 0; 
        } 
        int left = height(root -> left);
        int right = height(root -> right); 
        return 1 + std::max(left, right);
    }
    void stacking (TreeNode * root, std::stack<TreeNode*>& sample) {
        if (root == nullptr) {
            return; 
        }
        sample.push(root);
        stacking(root -> left, sample);
        stacking(root -> right, sample);
    }
    bool isBalancedhelper(TreeNode * root) {
        if (root == nullptr) {
            return true; 
        }
        if (root -> left == nullptr && root -> right == nullptr) {
            return true; 
        }
        int left = height(root -> left);
        int right = height(root -> right); 
        if (std::abs(left - right) <= 1) {
            return true; 
        }
        return false; 
    }
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) {
            return true; 
        }
        if (root -> right == nullptr && root -> left == nullptr) {
            return true; 
        }
        std::stack<TreeNode*> sample; 
        stacking(root, sample); 
        while(!sample.empty()) {
            TreeNode * top = sample.top(); 
            if (isBalancedhelper(top) == false) {
                return false; 
            }
            sample.pop(); 
        }
        return true; 
    }
};