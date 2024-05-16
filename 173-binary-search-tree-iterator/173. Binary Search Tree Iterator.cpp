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
class BSTIterator {
public:
    stack<TreeNode*> stack; 
    void helper(TreeNode * root) {
        while (root != nullptr) {
            stack.push(root);
            root = root -> left; 
        }
    }
    BSTIterator(TreeNode* root) {
        helper(root); 
    }
    
    int next() {
        TreeNode * potent = stack.top();
        stack.pop();
        helper(potent -> right);
        return potent -> val; 
    }
    
    bool hasNext() {
        if (stack.empty()) {
            return false; 
        } else {
            return true; 
        }
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */