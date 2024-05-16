class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == nullptr || n <= 0) {
            return head;  
        }

        std::stack<ListNode*> sample;

        ListNode* current = head;
        while (current != nullptr ) {
            sample.push(current);
            current = current->next;
        }

        if (sample.size() < n) {
            return head;  
        }

        if (n == sample.size()) {
            ListNode * sample = head;
            head = head->next;
            delete sample; 
            return head;
        }

        ListNode* prev = nullptr;
        while (!sample.empty()&&n >= 0) {
            prev = sample.top();
            std::cout << prev -> val << std::endl; 
            sample.pop();
            n--;
        }
        
        ListNode * tempo = prev -> next; 
        prev -> next = prev -> next -> next; 
        delete tempo; 

        return head;
    }
};
