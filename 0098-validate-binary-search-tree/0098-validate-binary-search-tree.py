# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right



def preorder_append(root, appending_list):
    if(root == None):
        return 
    preorder_append(root.left, appending_list)
    appending_list.append(root.val)
    preorder_append(root.right, appending_list)

class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        collector = []
        preorder_append(root, collector)
        
        for i in range(0, len(collector) - 1):
            if(collector[i] >= collector[i + 1]):
                return False

        return True