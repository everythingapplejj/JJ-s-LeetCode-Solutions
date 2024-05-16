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
    vector<vector<int>> levelOrder(TreeNode* root) {
        std::unordered_map<TreeNode*, int> height;
        std::vector<std::vector<int>>output;
        std::vector<TreeNode*>placeholder; 
        std::queue<TreeNode*>sample; 
        if(root == nullptr) {
            return output; 
        }
        height[root] = 0;
        sample.push(root);
        while(!sample.empty()) {
            TreeNode * extract = sample.front();
            sample.pop();
            placeholder.push_back(extract); 
            if(extract -> left != nullptr) {
                height[extract -> left] = height[extract] + 1; 
                sample.push(extract -> left); 
            }
            if(extract -> right != nullptr) {
                height[extract -> right] = height[extract] + 1;
                sample.push(extract -> right);
            }
        }
        int i = 0; 
        int track = 0; 
        std::vector<int>calc; 
        while(true) {
            if(i == (int)placeholder.size()) {
                output.push_back(calc);
                break; 
            }
            if(height[placeholder[i]] == track) {
                calc.push_back(placeholder[i] -> val);
                i++;
                continue; 
            }
            output.push_back(calc);
            track++;
            calc.clear();
            continue; 
        }
        return output; 
    }
};