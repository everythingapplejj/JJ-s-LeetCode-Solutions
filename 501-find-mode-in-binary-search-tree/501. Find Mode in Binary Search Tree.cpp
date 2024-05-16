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
    void inorder(TreeNode * sample, std::unordered_map<int,int>&frequency) {
        if(sample == nullptr) {
            return; 
        }
        inorder(sample -> left, frequency);
        if(frequency.find(sample -> val) == frequency.end()) {
            frequency[sample -> val] = 1; 
        } else {
            frequency[sample -> val] = frequency[sample -> val] + 1; 
        }
        inorder(sample -> right, frequency); 
    }
    vector<int> findMode(TreeNode* root) {
        std::vector<int>returning; 
        if(root == nullptr) {
            return returning; 
        }
        std::unordered_map<int, int>frequency; 
        inorder(root, frequency);
        int max = root -> val; 
        for(auto it = frequency.begin(); it != frequency.end(); ++it) {
            if(frequency[max] < frequency[it -> first]) {
                max = it -> first; 
            } 
        }
        for(auto it = frequency.begin(); it != frequency.end(); ++it) {
            if(frequency[max] == frequency[it -> first]) {
                returning.push_back(it -> first); 
            }
        }
        //returning.push_back(max);
        return returning; 
    }
};