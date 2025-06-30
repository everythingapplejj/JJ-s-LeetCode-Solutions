# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
        
    def construct_invert_tree_helper(self, root, construct):
        if(root == None):
            return 

        construct = TreeNode(root.val)
        construct.left = self.construct_invert_tree_helper(root.right, construct.left)
        construct.right = self.construct_invert_tree_helper(root.left, construct.right)

        return construct

    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        # this is the question that I will be solving today 
        returning = None
        returning = self.construct_invert_tree_helper(root, returning)
        return returning
        