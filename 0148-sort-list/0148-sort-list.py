# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def sortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        collector = []
        placeholder = head
        while(placeholder != None):
            collector.append(placeholder.val)
            placeholder = placeholder.next
        placeholder = head
        new_collector = sorted(collector)
        counter = 0
        while(placeholder != None):
            placeholder.val = new_collector[counter]
            placeholder = placeholder.next
            counter += 1

        return head
