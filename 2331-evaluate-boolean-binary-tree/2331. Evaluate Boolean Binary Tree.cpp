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
// leaf nodes 
// I think we can use recursive definition
    bool evaluateTree(TreeNode* root) {
        // use postorder traversal
        if(root -> left == nullptr && root -> right == nullptr) {
            if(root -> val == 0) {
                return false; 
            } else if (root -> val == 1) {
                return true; 
            }
        }
        bool left = evaluateTree(root -> left); 
        bool right = evaluateTree(root -> right);
        bool returning; 
        
        if(root -> val == 2) {
            returning = left || right;
        } else {
            returning = left && right; 
        }

        return returning; 
    }
};