#include<math.h>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head){

    if (head == NULL) {
        return 0; 
    }

    struct ListNode* sample = head;
    int count = 0; 
    while (sample -> next != NULL) {
        count ++;
        sample = sample -> next; 
    }
    int result = 0; 

    for (int i = count; i >= 0; i--) {
        int variable = head -> val; 
        if (variable == 1) {
            result += pow(2, i);
        } 
        head = head -> next; 
    }

    return result; 
}