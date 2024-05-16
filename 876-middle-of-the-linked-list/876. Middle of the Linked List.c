/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head){

    if(head == NULL) {
        return head; 
    }

    if (head -> next == NULL) {
        return head; 
    }

    int count = 0; 

    struct ListNode* test = head;
    
    while(test -> next != NULL) {
        test = test -> next;
        count++; 
    }

    count = count + 1; 

    if (count % 2 == 0) {
        count = count/2 + 1; 
    } else {
        count = (count - 1)/2 + 1;
    }

    for (int i  = 0; i < count - 1; i++) {
        head = head -> next; 
    }

    return head; 
}