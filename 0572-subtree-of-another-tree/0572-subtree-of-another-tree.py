# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:  
    def compare(self, root_1, root_2):
        # write down possible base cases
        if(root_1 == None and root_2 == None):
            return True
        if(root_1 != None and root_2 == None):
            return False
        if(root_1 == None and root_2 != None):
            return False
        if(root_1.val != root_2.val):
            return False
        
        collect_1 = self.compare(root_1.left, root_2.left)
        collect_2 = self.compare(root_1.right, root_2.right)
        passing = True
        
        return (passing and collect_1 and collect_2)
        
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        # in this case, append each nodes to the list
        queue_struct = []
        
        placeholder = root
        queue_struct.append(placeholder)

        while(len(queue_struct) != 0):
            # utilizing BFS method
            placeholder = queue_struct.pop(0) # update the placeholder
            case_test = self.compare(placeholder, subRoot)
            if(case_test == True):
                return True
            if(placeholder.left != None):
                queue_struct.append(placeholder.left)
            
            if(placeholder.right != None): 
                queue_struct.append(placeholder.right)

        return False
            
        