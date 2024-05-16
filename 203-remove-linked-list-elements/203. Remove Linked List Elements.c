struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *current = head;
    struct ListNode *prev = NULL;  // Previous node
    struct ListNode *temp;

    while (current != NULL) {
        if (current->val == val) {
            if (prev == NULL) {
                // Update head if the first node needs to be removed
                temp = current;
                current = current->next;
                head = current;
                free(temp);
            } else {
                // Update pointers and free the node
                temp = current;
                current = current->next;
                prev->next = current;
                free(temp);
            }
        } else {
            // No deletion needed, move to the next node
            prev = current;
            current = current->next;
        }
    }

    return head;
}
