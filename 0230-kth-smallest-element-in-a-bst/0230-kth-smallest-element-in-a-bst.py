# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

import heapq
class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        #* I want to try the naive way of doing this
        queue = []
        heap = []
        if(root == None): 
            return -1 # should never be this way
        queue.append(root)
        
        while(len(queue) != 0):
            node = queue.pop(0)
            heapq.heappush(heap, node.val)
            if(node.left != None):
                queue.append(node.left)

            if(node.right != None):
                queue.append(node.right)
        
        final_return = heap[0]
        for i in range(0, k):
            final_return = heapq.heappop(heap)
        
        return final_return