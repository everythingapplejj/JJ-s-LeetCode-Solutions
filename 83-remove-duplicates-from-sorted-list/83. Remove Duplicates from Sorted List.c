/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head){

    struct ListNode* current = head;
    
    if (current == NULL) {
        return head; 
    }
    
    if (current -> next == NULL) {
        return head; 
    }
    while (1) {
       if (current -> next -> val == current -> val) {
             current -> next = current -> next -> next; 
    } else {
        current = current -> next; 
        } 

        if (current -> next == NULL) {
            break; 
        }
    }


    
    return head;
}