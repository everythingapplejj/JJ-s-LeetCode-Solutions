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
 // depth first search 
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        // it should be easy using bfs lol
        std::unordered_map<TreeNode*, TreeNode*> parent;
        std::vector<TreeNode*>leaf; 
        std::vector<string>output; 
        std::queue<TreeNode*>sample; 
        if(root == nullptr) {
            return output; 
        }
        sample.push(root);
        while(!sample.empty()) {
            TreeNode * extract = sample.front();
            if(extract -> left == nullptr && extract -> right == nullptr) {
                leaf.push_back(extract); 
            }
            sample.pop();
            if(extract -> left != nullptr) {
                parent[extract -> left] = extract;
                sample.push(extract -> left);
            }
            if(extract -> right != nullptr) {
                parent[extract -> right] = extract;
                sample.push(extract -> right);
            }
        }
        for(int i = (int)leaf.size() - 1; i >= 0; i--) {
            std::vector<int>placeholder;
            TreeNode * update = leaf[i];
            while(update != root) {
                placeholder.push_back(update -> val);
                update = parent[update]; 
                std::cout << update -> val << std::endl;
                //return output; 
            }
            placeholder.push_back(root -> val); 
            std::cout << "\n";
            string insert; 
            for(int i = (int)placeholder.size() - 1; i >= 0; i--) {
                insert += to_string(placeholder[i]) + "->";
            }
            insert.erase(insert.end() - 1);
            insert.erase(insert.end() - 1);
            output.push_back(insert);
            //return output; 
        }
        return output; 
    }
};