// let me solve this problem
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    if (head == NULL || head -> next == NULL || head -> next -> next == NULL) {
        return false;
    }
    struct ListNode * temp = head;
    struct ListNode * temp2 = head;
    while (1) {
        temp = temp -> next; 
        temp2 = temp2 -> next -> next;
        if (temp == temp2) {
            return true; 
        }
        if (temp -> next == NULL || temp2 -> next == NULL || temp2 -> next -> next == NULL) {
            break; 
        }
    }
    return false; 
}
