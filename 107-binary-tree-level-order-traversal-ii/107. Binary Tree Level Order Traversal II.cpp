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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        std::queue<TreeNode*>helper;
        std::unordered_map<TreeNode*,int>height; // table
        std::vector<std::vector<int>>output; 
        std::vector<TreeNode*>insert; 
        //int total = nodeheight(root); 
        if(root != nullptr) {
            helper.push(root); 
            height[root] = 0; 
        } 
        // 
        while(!helper.empty()) {
            insert.push_back(helper.front());
            TreeNode * sample = helper.front();
            helper.pop();
            if(sample -> left != nullptr) {
                height[sample -> left] = height[sample] + 1;
                helper.push(sample -> left);
            }
            if(sample -> right != nullptr) {
                height[sample -> right] = height[sample] + 1; 
                helper.push(sample -> right);
            }
        }

        
        if(insert.size() == 0) {
            return output; 
        }

        std::vector<int>placeholder;
        int height_update = 0; 
        /*
        for (unsigned int i = 0; i < insert.size(); i++) {
            std::cout << insert[i] -> val << " ";
            std::cout << height[insert[i]] << std::endl; 
        }
        */ 
        int i = 0; 
        while (true) {
            if(i == insert.size()) {
                output.push_back(placeholder);
                break; 
            }
            if(height[insert[i]] == height_update) {
                std::cout << height[insert[i]] << " " ;
                placeholder.push_back(insert[i] -> val);
                i++; 
                continue; 
            }
            height_update++; 
            output.push_back(placeholder); 
            placeholder.clear(); 
        }
        for(unsigned int i = 0; i < output.size()/2; i++) {
            std::swap(output[i], output[output.size() - 1 - i]);
        }
        
        return output;
    }
};