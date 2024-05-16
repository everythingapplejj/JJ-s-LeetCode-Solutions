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
    vector<int> sorted(vector<int> before) {
        int i;
        int j;
        int key; 
        if (before.size() == 0 || before.size() == 1) {
            return before; 
        }
        for (int i = 1; i < before.size(); i++) {
            j = i - 1; 
            key = before[i];
            while (j >= 0 && key < before[j]) {
                before[j + 1] = before[j];
                j--;
            }
            before[j + 1] = key; 
        }

        return before; 

    }

    void insert(ListNode** head, int val) {
        ListNode * current = *head;
        ListNode * temp; 
        if (current == NULL) {
            temp = new ListNode; 
            temp -> val = val; 
            temp -> next = current;
            *head = temp; 
            return; 
        }
        insert(&(current -> next), val); 
    }

    ListNode* insertionSortList(ListNode* head) {
        vector<int> initial; 
        ListNode * current = head;
        while (current != NULL) {
            initial.push_back(current -> val);
            current= current -> next; 
        }
        current = head; 
        vector<int> finally = sorted(initial); 
        ListNode * fin = NULL;
        for (int i = 0; i < finally.size(); i++) {
            insert(&fin, finally[i]);
        } 
        return fin; 
    }
};