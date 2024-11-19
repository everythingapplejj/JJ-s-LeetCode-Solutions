# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def generate(self, root_1, root_2):
        if(root_1 == None and root_2 == None):
            return True
        if(root_1 == None and root_2 != None):
            return False
        if(root_1 != None and root_2 == None):
            return False
        if(root_1.val != root_2.val):
            return False

        collection_1 = self.generate(root_1.left, root_2.left)
        collection_2 = self.generate(root_1.right,root_2.right)

        return (collection_1 and collection_2)

    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        return self.generate(p, q)