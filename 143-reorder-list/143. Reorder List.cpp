/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 using namespace std; 
 #include<cmath> 
class Solution {
public:
    void reorderList(ListNode* head) {
        if (head == nullptr) {
            return; 
        }
        if (head -> next == nullptr) {
            return; 
        } 
        if (head -> next -> next == nullptr) {
            return; 
        }
        vector<ListNode*> sample;
        ListNode * head_ = head; 
        while(head_ != nullptr) {
            sample.push_back(head_);
            head_ = head_ -> next;
        }
        head_ = head; 
        int count = 0; 
        for (int i = 0; i <= floor(sample.size() / 2); i++) {
            sample[i] -> next = sample[sample.size() - 1 - i];
            sample[sample.size() - 1 - i] -> next = sample[i + 1];
            if (i + 1 == floor(sample.size()/2)) {
                sample[i + 1] -> next = nullptr; 
                return; 
            }
        }
    }
};