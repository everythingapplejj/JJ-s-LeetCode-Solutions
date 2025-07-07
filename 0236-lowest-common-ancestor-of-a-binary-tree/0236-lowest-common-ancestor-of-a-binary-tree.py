# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def lowestCommonAncestor(self, root: TreeNode, p: TreeNode, q: TreeNode) -> TreeNode:
        # this is the problem that I will solve today :) 
        # I can probably try getting the parent hashes
        parent = {}
        # I will be utilizing bfs here
        queue = []
        queue.append(root)
        parent.update({root: None})
        curr_ptr = None
        place_comp = None
        compare_ptr = None
        
        while(len(queue) != 0):
            node = queue.pop(0)
            if(node.val == q.val):
                curr_ptr = node
            if(node.val == p.val):
                compare_ptr = node
                place_comp = node
            if(node.left != None): 
                queue.append(node.left)
                parent.update({node.left: node})

            if(node.right != None):
                queue.append(node.right)
                parent.update({node.right: node})


        # now I have estabilished the parent dictionary 
        # that means that I know the path from current node to the root node
        print(parent[curr_ptr])

        while(curr_ptr != root):
            while(compare_ptr != root):
                if(curr_ptr == compare_ptr):
                    # found the lowest common ancestor
                    return curr_ptr
                # else 
                # print(compare_ptr.val)
                compare_ptr = parent[compare_ptr]

            # reset the compare ptr
            compare_ptr = place_comp
            # advance the curr ptr
            curr_ptr = parent[curr_ptr]

        return root
            