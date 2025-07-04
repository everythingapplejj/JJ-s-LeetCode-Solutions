# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        # for level order traversal, I can utilize the queue system
        # Lets go for naive method,
        final_return = []
        queue = []
        # may create a hash table that shows the height? 
        height = {}
        placeholder = root
        if(root == None): 
            return final_return
        
        queue.append(root)

        placeholder = []
        height[root] = 0
        curr_height = height[root]
        while(len(queue) != 0):
            # for now, the naive method
            # need to reset the placeholder every 2 ^ counter 
            current_node = queue.pop(0)
            if(height[current_node] != curr_height):
                final_return.append(placeholder)
                curr_height = height[current_node]
                placeholder = []
            placeholder.append(current_node.val)
        
            if(current_node.left != None):
                height[current_node.left] = height[current_node] + 1
                queue.append(current_node.left)

            if(current_node.right != None):
                height[current_node.right] = height[current_node] + 1
                queue.append(current_node.right)

            if(len(queue) == 0 and len(placeholder) != 0):
                # this is the edge case
                final_return.append(placeholder)

        # print(height)
        return final_return