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
    void postorder(Node * sample, std::vector<int>&output) {
        if(sample == nullptr) {
            return; 
        }
        for(unsigned int i = 0; i < sample -> children.size(); i++) {
            postorder(sample -> children[i], output);
        }
        output.push_back(sample -> val);
    } 
    vector<int> postorder(Node* root) {
        std::vector<int>output; 
        postorder(root, output);
        return output; 
    }
};