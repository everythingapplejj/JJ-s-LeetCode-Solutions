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
 // because i do not want to create any segmentational fault or memory leak....
 // vector reverse works reverse(something.begin(), something.end());
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == nullptr) {
            return true; 
        }
        ListNode * placeholder = head; 
        std::vector<int>collect;
        std::vector<int>reverse; 
        while(placeholder != nullptr) {
            collect.push_back(placeholder -> val);
            placeholder = placeholder -> next;
        }
        reverse = collect;
        for(unsigned int i = 0; i < reverse.size()/2; i++) {
            std::swap(reverse[i], reverse[reverse.size() - 1 - i]);
        }
        for(unsigned int i = 0; i < collect.size(); i++) {
            if(reverse[i] != collect[i]) {
                return false; 
            }
        }
        return true; 
    }
};