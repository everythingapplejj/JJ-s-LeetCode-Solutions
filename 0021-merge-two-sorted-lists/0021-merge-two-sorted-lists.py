# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        if(list1 == None):
            return list2
        
        if(list2 == None):
            return list1

        head = None
        placeholder = None
        first_ptr = list1
        second_ptr = list2


        while(first_ptr != None and second_ptr != None):
            if(placeholder == None):
                if(first_ptr.val < second_ptr.val):
                    placeholder = ListNode(first_ptr.val, None)
                    head = placeholder
                    first_ptr = first_ptr.next
                    continue
                else:
                    placeholder = ListNode(second_ptr.val, None)
                    head = placeholder
                    second_ptr = second_ptr.next
                    continue
            elif(placeholder != None):
                if(first_ptr.val < second_ptr.val):
                    placeholder.next = ListNode(first_ptr.val, None)
                    placeholder = placeholder.next
                    first_ptr = first_ptr.next
                    continue
                else:
                    placeholder.next = ListNode(second_ptr.val, None)
                    placeholder = placeholder.next
                    second_ptr = second_ptr.next
                    continue

        if(first_ptr != None):
            placeholder.next = first_ptr
        elif(second_ptr != None):
            placeholder.next = second_ptr
        
        return head
                

        