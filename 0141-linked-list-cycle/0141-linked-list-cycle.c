/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    if (head == NULL) {
        return false;
    }
    if(head -> next == NULL) {
        return false;
    }

    struct ListNode * slow_ptr = head;
    struct ListNode * fast_ptr = head;

    while(slow_ptr != NULL || fast_ptr != NULL) {

        slow_ptr = slow_ptr -> next;
        if(fast_ptr == NULL || fast_ptr -> next == NULL) {
            break; 
        }
        fast_ptr = fast_ptr -> next -> next; 
        if(slow_ptr == fast_ptr){
            return true; 
        }
    }

    return false;
}