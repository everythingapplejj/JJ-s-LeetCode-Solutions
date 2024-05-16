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
    void inorder_traversal(TreeNode* root, vector<int>& input) {
        if (root == NULL) {
            return; 
        }
        if (root -> left == NULL && root -> right == NULL) {
            input.push_back(root -> val); 
            return; 
        }
        inorder_traversal(root -> left, input); 
        inorder_traversal(root -> right, input);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> first_leaf; 
        vector<int> second_leaf; 
        inorder_traversal(root1, first_leaf);
        inorder_traversal(root2, second_leaf);

        if (first_leaf.size() != second_leaf.size()) {
            return false; 
        }

        for (int i = 0; i < first_leaf.size(); i++) {
            if (first_leaf[i] != second_leaf[i]) {
                return false; 
            }
        }

        return true;
    }
};