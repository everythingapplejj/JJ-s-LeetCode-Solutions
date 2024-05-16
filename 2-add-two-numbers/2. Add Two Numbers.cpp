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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr && l2 == nullptr) {
            return nullptr;
        } else if (l1 == nullptr && l2 != nullptr) {
            return l2; 
        } else if (l1 != nullptr && l2 == nullptr) {
            return l2;
        }
        ListNode * output = nullptr; 
        ListNode * tracker = nullptr; 
        ListNode * extract_1 = l1;
        ListNode * extract_2 = l2;
        int carry_on = 0; 
        int sum = 0;
        int summer = 0; 
        while(extract_1 != nullptr || extract_2 != nullptr) {
            if(extract_1 == nullptr && extract_2 != nullptr) { 
                while(extract_2 != nullptr) {
                    summer = carry_on + extract_2 -> val; 
                    tracker -> next = new ListNode(summer % 10);
                    extract_2 = extract_2 -> next;
                    carry_on = summer/10; 
                    tracker = tracker -> next;
                    if(extract_2 == nullptr && carry_on != 0) {
                        tracker -> next = new ListNode(carry_on);
                    }
                }
                break; 
            }
            if(extract_1 != nullptr && extract_2 == nullptr) {
                //std::cout << "My guess is right" << std::endl;
                while(extract_1 != nullptr) {
                    summer = carry_on + extract_1 -> val; 
                    tracker -> next = new ListNode(summer % 10);
                    std::cout << summer % 10 << std::endl; 
                    extract_1 = extract_1 -> next;
                    carry_on = summer/10; 
                    tracker = tracker -> next; 
                    if(extract_1 == nullptr && carry_on != 0) {
                        tracker -> next = new ListNode(carry_on);
                    }
                }
                break; 
            }
            sum = carry_on + extract_1 -> val + extract_2 -> val;
            //std::cout << "passing" << std::endl; 
            carry_on  = sum/10; 
            if(output == nullptr) {
                tracker = new ListNode(sum % 10);
                output = tracker; 
                extract_1 = extract_1 -> next;
                extract_2 = extract_2 -> next;
                if(extract_1 == nullptr && extract_2 == nullptr && carry_on != 0) {
                tracker -> next = new ListNode(carry_on);
                break; 
            }
                continue; 
            }
            tracker -> next = new ListNode(sum % 10);
            tracker = tracker -> next; 
            extract_1 = extract_1 -> next; 
            extract_2 = extract_2 -> next; 
            std::cout << carry_on << std::endl;
            if(extract_1 == nullptr && extract_2 == nullptr && carry_on != 0) {
                tracker -> next = new ListNode(carry_on);
                break; 
            }
        }
    
       
        return output; 
    }
};