import numpy as np

class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        # going to use heuristical approaches on this
        if(matrix[0][0] >  target):
            return False # this is the base case scenario 

        height = np.array(matrix).shape[0]
        height_decide = 0
        for i in range(0, height):
            if(matrix[i][0] > target):
                height_decide = i - 1
                break
            else:
                height_decide = i

        for i in range(0, len(matrix[height_decide])):
            if(matrix[height_decide][i] == target):
                return True
        return False