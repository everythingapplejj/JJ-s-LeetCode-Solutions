/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void preorder(Node * sample, std::vector<int>&output) {
        if(sample == nullptr) {
            return; 
        }
        output.push_back(sample -> val);
        for(unsigned int i = 0; i < sample -> children.size(); i++) {
            preorder(sample -> children[i], output); 
        }
    }
    vector<int> preorder(Node* root) {
        std::vector<int>output; 
        preorder(root, output);
        return output; 
    }
};