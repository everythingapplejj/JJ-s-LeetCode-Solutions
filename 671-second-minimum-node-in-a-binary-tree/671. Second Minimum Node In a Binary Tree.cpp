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
    int findSecondMinimumValue(TreeNode* root) {
        std::vector<int>sequence; 
        std::queue<TreeNode*>sample;
        if(root == nullptr) {
            return -1;
        }
        sample.push(root);
        while(!sample.empty()) {
            TreeNode * extract = sample.front();
            sample.pop();
            sequence.push_back(extract -> val);
            for(int i = (int)sequence.size() - 1; i >=1; i--) {
                if(sequence[i - 1] <= sequence[i]) {
                    break;
                }
                std::swap(sequence[i - 1], sequence[i]);
            }
            if(extract -> left != nullptr) {
                sample.push(extract -> left);
            }
            if(extract -> right != nullptr) {
                sample.push(extract -> right);
            }
        }
        int min = sequence[0];
        for(unsigned int i = 0; i < sequence.size(); i++) {
            if(sequence[i]!=min) {
                return sequence[i];
            }
        }
        return -1;
    }
};