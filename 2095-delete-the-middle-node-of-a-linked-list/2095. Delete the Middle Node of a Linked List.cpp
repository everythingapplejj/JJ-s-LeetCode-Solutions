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
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        int count = 0; 
        int remove;
        ListNode * current = head;
        if (current == NULL || current -> next == NULL) {
            return NULL; 
        }
        while (current != NULL) {
            count++;
            current = current -> next;
        }
        remove = count / 2 + 1; 
        current = head;
        ListNode * prev = NULL; 
        for (int i = 0; i < remove - 1; i++) {
            prev = current;
            current = current -> next; 
        }
       
        prev -> next = current -> next; 
        delete current;
        return head;  
    }
};