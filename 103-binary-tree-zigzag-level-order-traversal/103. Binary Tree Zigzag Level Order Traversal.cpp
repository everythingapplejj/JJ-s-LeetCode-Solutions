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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        bool inverter = false; 
        int height_t = 0; 
        std::unordered_map<TreeNode*, int>height; 
        std::queue<TreeNode*>sample; 
        std::vector<std::vector<int>>output;
        std::vector<TreeNode*>placeholder; 
        sample.push(root);
        if(root == nullptr) {
            return output; 
        }
        int delay = 2; 
        height[root] = height_t;
        while(!sample.empty()) { 
            TreeNode * extract = sample.front();
            placeholder.push_back(extract); 
            sample.pop();
            if(extract -> left != nullptr) {
                    height[extract -> left] = height[extract] + 1; 
                    sample.push(extract -> left);
                }
                if(extract -> right != nullptr) {
                    height[extract -> right] = height[extract] + 1; 
                    sample.push(extract -> right);
                }
        }
        // testing purposes
        int i = 0; 
        int counter = 0; 
        std::vector<int>construct;
        while(true) {
            if(i == (int)placeholder.size()) {
                if (inverter == true) {
                for(unsigned int i = 0; i < construct.size()/2; i++) {
                    std::swap(construct[i], construct[construct.size() - 1 - i]);
                }
            }
                output.push_back(construct); 
                break; 
            }
            if(height[placeholder[i]] == counter) {
                construct.push_back(placeholder[i] -> val);
                i++;
                continue; 
            }
            inverter = !inverter; 
            std::cout << inverter << std::endl; 
            if (inverter == false) {
                for(unsigned int i = 0; i < construct.size()/2; i++) {
                    std::swap(construct[i], construct[construct.size() - 1 - i]);
                }
            }
            counter++;
            output.push_back(construct);
            construct.clear();
        }
        return output; 
    }
};