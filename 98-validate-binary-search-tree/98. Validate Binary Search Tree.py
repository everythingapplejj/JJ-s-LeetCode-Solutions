# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorder_collector(self, root, collector):
        if(root == None):
            return 
        self.inorder_collector(root.left, collector)
        collector.append(root.val)
        self.inorder_collector(root.right, collector)
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        collector = []
        self.inorder_collector(root, collector)
        for i in range(0, len(collector) - 1):
            if(collector[i] >= collector[i + 1]):
                return False
        return True
        


        