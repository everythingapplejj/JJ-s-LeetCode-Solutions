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
    bool isleaf(TreeNode * sample) {
        if (sample == nullptr) {
            return false; 
        }
        if (sample -> left == nullptr && sample -> right == nullptr) {
            return true;
        }
        return false; 
    }
    bool left_node(TreeNode * random) {
        if(random == nullptr) {
            return false;
        }
        if(isleaf(random) == true) {
            return false; 
        }
        if(isleaf(random -> left) == true) {
            return true;
        }
        return false; 
    }
    void inorder(TreeNode * sample, std::vector<TreeNode*>&collect) {
        if(sample == nullptr) {
            return; 
        }
        inorder(sample -> left, collect);
        collect.push_back(sample);
        inorder(sample -> right, collect);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        std::vector<TreeNode*>collection; 
        inorder(root, collection);
        int total = 0; 
        for (unsigned int i = 0; i < collection.size(); i++) {
            if(left_node(collection[i])) {
                std::cout << collection[i] -> left -> val << std::endl; 
                total += collection[i] -> left -> val; 
            }
        }
        return total; 
    }
};