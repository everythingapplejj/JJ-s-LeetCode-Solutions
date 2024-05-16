/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right){
    int array[right - left + 1];
    struct ListNode* current = head;
    int count = left - 1; 
    if (head == NULL) {
        return NULL; 
    }
    if (head -> next == NULL) {
        return head; 
    }
    while (count > 0) {
        current = current -> next;
        count --; 
    }
    for (int i = 0; i < (right - left + 1); i++) {
        array[i] = current -> val;
        current = current -> next; 
    }
    for (int i = 0; i < (right - left + 1); i++) {
        printf("%d ", array[i]); 
    }

    struct ListNode * reverse = NULL;
    current = head;

    for (int i = 0; i < left - 1; i++) {
        insert(&reverse, current -> val);
        current = current -> next; 
    }

    for (int i = (right - left); i >= 0; i--) {
        insert(&reverse, array[i]);
        current = current -> next; 
    }
    
    while(current != NULL) {
        insert(&reverse, current -> val);
        current = current -> next; 
    }

    return reverse; 
}

void insert(struct ListNode ** head, int val) {
    struct ListNode * current = *head;
    struct ListNode * temp; 

    if (current == NULL) {
        temp = malloc(sizeof(struct ListNode));
        temp -> val = val; 
        temp -> next = current; 
        *head = temp; 
        return; 
    }
    insert(&(current -> next), val); 
}