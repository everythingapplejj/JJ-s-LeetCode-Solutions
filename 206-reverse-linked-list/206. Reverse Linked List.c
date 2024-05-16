/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode* final = NULL;
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* traverse = head; 
    while (traverse != NULL) {
        insert(traverse -> val);
        traverse = traverse -> next; 
    }

    struct ListNode* output = final;
    final = NULL; 
    return output;
}

void insert(int x) {
    struct ListNode* temp = (struct ListNode*) malloc(sizeof(struct ListNode));
    temp -> val = x;
    temp -> next = NULL;
    if (final != NULL) {
        temp -> next = final;
        final = temp; 
    }
    final = temp;
}