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
    void parse (TreeNode * root, vector<int>& collect) {
        if (root == nullptr) {
            return;
        }
        parse(root -> left, collect);
        collect.push_back(root -> val);
        parse(root -> right, collect);
    }
    bool isUnivalTree(TreeNode* root) {
        vector<int> collect;
        parse(root, collect);
        int compare = collect[0];
        int flag = 0; 
        for (int i = 0; i < collect.size(); i++) {
            if (collect[i] != compare) {
                flag = 1;
            } else {
                continue; 
            }
        }
        if (flag == 1) {
            return false;
        } else {
            return true; 
        }
        return false; 
    }
};