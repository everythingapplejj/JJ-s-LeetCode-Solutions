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
    int minDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0; 
        }
        if (root -> right == nullptr && root -> left == nullptr) {
            return 1; 
        }
        if (root -> right == nullptr && root -> left != nullptr) {
            return (1 + minDepth(root -> left));
        }
        if (root -> right != nullptr && root -> left == nullptr) {
            return (1 + minDepth(root -> right));
        }
        int left = minDepth(root -> left);
        int right = minDepth(root -> right);

        return (1 + std::min(left, right));
    }
};