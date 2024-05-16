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
    bool helper(TreeNode * root, int sum, int target){
        if(root == nullptr) {
            return false;
        }
        if(root -> left == nullptr && root -> right == nullptr) {
            if(sum + root -> val == target) {
                return true; 
            } else {
                return false; 
            }
        }
        if(helper(root -> left, sum + root -> val, target) || helper(root -> right, sum + root -> val, target)) {
            return true; 
        } else {
            return false; 
        }

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return helper(root, 0, targetSum);
    }
};