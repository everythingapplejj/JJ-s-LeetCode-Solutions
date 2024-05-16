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
    void construct(TreeNode ** list, int val) {
        TreeNode * current = *list;
        TreeNode * temp; 
        if (current == NULL) {
            temp = new TreeNode; 
            temp -> val = val; 
            temp -> right == current;
            temp -> left == NULL;
            (*list) = temp;
            return;  
        }
        construct (&(current -> right), val); 
    }
    void inorder(TreeNode* root, vector<int>& sample) {
        if (root == NULL) {
            return; 
        }
        inorder(root -> left, sample);
        sample.push_back(root -> val);
        inorder(root -> right, sample); 
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> output;
        inorder(root, output); 
        TreeNode* finally = NULL; 
        for (int i = 0; i < output.size(); i++) {
            construct(&(finally), output[i]);
        }
        return finally; 
    }
};