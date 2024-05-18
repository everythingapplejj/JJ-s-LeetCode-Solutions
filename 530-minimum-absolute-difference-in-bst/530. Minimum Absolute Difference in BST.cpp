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
    void helper(TreeNode * root, std::vector<int>&sample) {
        if(root == nullptr) {
            return; 
        }
        helper(root -> left, sample);
        sample.push_back(root -> val);
        helper(root -> right, sample); 
    }
    int getMinimumDifference(TreeNode* root) {
        if(root == nullptr) {
            return 0; 
        }
        int min_diff = INT_MAX; 
        std::vector<int>sample; 
        helper(root, sample);
        for(unsigned int i = 0; i < sample.size() - 1; i++) {
            for(unsigned int j = i + 1; j < sample.size(); j++) {
                if(abs(sample[i] - sample[j]) < min_diff) {
                    min_diff = abs(sample[i] - sample[j]);
                }
            }
        }
        return min_diff; 
    }
};