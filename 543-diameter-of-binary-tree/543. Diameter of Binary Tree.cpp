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
    int helper(TreeNode * sample) {
        if(sample == nullptr) {
            return -1;
        }
        if(sample -> right == nullptr && sample -> left == nullptr) {
            return 0; 
        }
        int left = helper(sample -> left);
        int right = helper(sample -> right);

        return 1 + std::max(left,right);
    }
    int helper_2(TreeNode * root) {
        if (root == nullptr) {
            return -1; 
        }
        if(root -> left == nullptr && root -> right == nullptr) {
            return 0; 
        }
        if(root -> left != nullptr && root -> right == nullptr) {
            return 1 + helper(root -> left); 
        }
        if(root -> left == nullptr && root -> right != nullptr) {
            return 1 + helper(root -> right); 
        }

        return 2 + helper(root -> left) + helper(root -> right); 
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr) {
            return -1; 
        }
        if(root -> left == nullptr && root -> right == nullptr) {
            return 0; 
        }
        int max = 0; 
        std::queue<TreeNode*>sample;
        sample.push(root);
        while(!sample.empty()) {
            TreeNode * extract = sample.front();
            int placeholder = helper_2(extract);
            if(max < placeholder) {
                max = placeholder; 
            }
            sample.pop();
            if(extract -> left != nullptr) {
                sample.push(extract -> left);
            }
            if(extract -> right != nullptr) {
                sample.push(extract -> right);
            }
        }
        return max;
    }
};