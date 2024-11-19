# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def collector(self, root, getter):
        if(root == None):
            return
        
        self.collector(root.left, getter)
        getter.append(root.val)
        self.collector(root.right, getter)
    
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        result = []
        self.collector(root, result)
        return result
        