# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        if(head == None):
            return False
        if(head.next == None):
            return False

        slow_ptr = head
        fast_ptr = head
        
        while(slow_ptr != None or fast_ptr != None):
            slow_ptr = slow_ptr.next
            if(fast_ptr == None or fast_ptr.next == None):
                return False
            fast_ptr = fast_ptr.next.next
            if(slow_ptr == fast_ptr):
                return True
            if(fast_ptr == None or slow_ptr == None):
                return False

        return False