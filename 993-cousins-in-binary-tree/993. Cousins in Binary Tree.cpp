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
    bool isCousins(TreeNode* root, int x, int y) {
        std::unordered_map<int, int>height;
        std::unordered_map<int, int>parent;
        std::queue<TreeNode*>helper; 
        int height_t = 0; 
        if(root == nullptr) {
            return true; 
        }
        helper.push(root);
        height[root -> val] = height_t;
        while(!helper.empty()) {
            TreeNode * sample = helper.front();
            helper.pop();
            if(sample -> left != nullptr) {
                height[sample -> left -> val] = height[sample -> val] + 1;
                parent[sample -> left -> val] = sample -> val; 
                helper.push(sample -> left);
            }
            if(sample -> right != nullptr) {
                height[sample -> right -> val] = height[sample -> val] + 1;
                parent[sample -> right -> val] = sample -> val;
                helper.push(sample -> right); 
            }
        }
        if(height[x] == height[y] && parent[x] != parent[y]) {
            return true;
        }
        return false;
        // using bfs traversal; 
    }
};