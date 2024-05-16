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
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0; 
        }
        if (root -> right == nullptr && root -> left == nullptr) {
            //std::cout << "Passing" << std::endl; 
            return 1; 
        }
        if (root -> right == nullptr && root -> left != nullptr) {
            std::cout << "Passing" << std::endl; 
            return (1 + maxDepth(root -> left));
        }
        if (root -> right != nullptr && root -> left == nullptr) {
            return (1 + maxDepth(root -> right));
        }

        int left = maxDepth(root -> left);
        int right = maxDepth(root -> right);

        return (1 + std::max(left, right)); 

    }
};