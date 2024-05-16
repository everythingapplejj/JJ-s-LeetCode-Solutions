/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    // this solution is using BFS traversals 
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        std::queue<TreeNode*>sample1;
        std::queue<TreeNode*>sample2;
        TreeNode * decide = nullptr;
        if(original == nullptr) {
            return decide; 
        }
        sample1.push(original);
        sample2.push(cloned);
        while(!sample1.empty()) {
            TreeNode * extract = sample1.front();
            if(extract -> val == target -> val) {
                decide = sample2.front();
                break; 
            }
            TreeNode * extract_clone = sample2.front();
            sample1.pop();
            sample2.pop(); 
            if(extract -> left != nullptr) {
                sample1.push(extract -> left);
                sample2.push(extract_clone -> left);
            }
            if(extract -> right != nullptr) {
                sample1.push(extract -> right);
                sample2.push(extract_clone -> right); 
            }
        }
        return decide; 
    }
};