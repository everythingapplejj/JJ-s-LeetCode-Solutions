# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right


def comparitor(first, second):
    # first writing the base cases for the tree
    if(first == None and second == None):
        return True

    if (first == None and second != None):
        return False

    if(first != None and second == None):
        return False
    
    if(first.val != second.val):
        return False

    return ((first.val == second.val) and comparitor(first.left, second.left) and comparitor(first.right, second.right))

    

class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        # To check if they are the same tree, I can try different traversal
        return comparitor(p, q)