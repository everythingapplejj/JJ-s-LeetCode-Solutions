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
    void insert(TreeNode * root, vector<int>& complete) {
        if (root == NULL) {
            return; 
        }
        insert(root -> left, complete);
        complete.push_back(root -> val);
        insert(root -> right, complete); 
    }
    int countNodes(TreeNode* root) {
        vector<int> complete; 
        insert(root, complete);
        return complete.size();
    }
};