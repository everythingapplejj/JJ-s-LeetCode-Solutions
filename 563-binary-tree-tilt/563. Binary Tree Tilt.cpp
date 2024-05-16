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
    int subtree_tot(TreeNode * root) {
        if(root == nullptr) {
            return 0;
        }
        if(root -> right == nullptr && root -> left == nullptr) {
            return root -> val;
        }
        int sum = 0;
        std::queue<TreeNode*>sample;
        sample.push(root);
        while(!sample.empty()) {
            sum += sample.front() -> val;
            TreeNode * extract = sample.front();
            sample.pop();
            if(extract -> left != nullptr) {
                sample.push(extract -> left); 
            }
            if(extract -> right != nullptr) {
                sample.push(extract -> right);
            }
        }
        return sum; 
    }
    int findTilt(TreeNode* root) {
        if(root == nullptr) {
            return 0; 
        }
        int sum  = 0; 
        std::queue<TreeNode*>sample;
        sample.push(root);
        while(!sample.empty()) {
            TreeNode * extract = sample.front();
            sample.pop();
            if(extract -> left == nullptr && extract -> right == nullptr) {
                sum = sum; 
            }
            if(extract -> left == nullptr && extract -> right != nullptr) {
                sum = sum + std::abs(subtree_tot(extract -> right));
            }
            if(extract -> left != nullptr && extract -> right == nullptr) {
                sum = sum + std::abs(subtree_tot(extract -> left));
            }
            if(extract -> left != nullptr && extract -> right != nullptr) {
                sum = sum + std::abs(subtree_tot(extract -> left) - subtree_tot(extract -> right));
                //std::cout << sum << std::endl; 
            }
            if(extract -> left != nullptr) {
                sample.push(extract -> left); 
            }
            if(extract -> right != nullptr) {
                sample.push(extract -> right);
            }
        }
        return sum;
    }
};