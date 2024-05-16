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
    void true_traversal(TreeNode * root,std::vector<TreeNode*>&sample) {
        if(root == nullptr) {
            sample.push_back(nullptr);
            return;
        }
        sample.push_back(root);
        true_traversal(root -> left, sample);
        true_traversal(root -> right, sample); 
    }
    void reflect_traversal(TreeNode * root, std::vector<TreeNode*>&sample) {
        if(root == nullptr) {
            sample.push_back(nullptr); 
            return; 
        }

        sample.push_back(root);
        reflect_traversal(root -> right, sample);
        reflect_traversal(root -> left, sample); 
    }
    bool isSymmetric(TreeNode* root) {
        //preorder traversals;
        std::vector<TreeNode*>compare_1;
        std::vector<TreeNode*>compare_2; 
        true_traversal(root,compare_1);
        reflect_traversal(root,compare_2);
        // print testing code
        /*
        for(unsigned int i = 0; i < compare_1.size(); i++) {
            if(compare_1[i] == nullptr) {
                std::cout << "NULL ";
                continue; 
            }
            std::cout << compare_1[i] -> val << " ";
        }

        std::cout <<"\n";

        for(unsigned int i = 0; i < compare_2.size(); i++) {
            if(compare_2[i] == nullptr) {
                std::cout << "Null ";
                continue; 
            }
            std::cout << compare_2[i] -> val << " "; 
        }
        */
        
        //bookkeeping
        for(unsigned int i = 0; i < compare_1.size(); i++) {
          
            if(compare_1[i] == nullptr && compare_2[i] == nullptr) {
                continue; 
            } 
            if (compare_1[i] == nullptr && compare_2[i] != nullptr) {
                return false;
            } 
            if(compare_1[i] != nullptr && compare_2[i] == nullptr) {
                return false;
            }

            if(compare_1[i] -> val != compare_2[i] -> val) {
                return false; 
            }
        } 
        
        return true; 
    }
};