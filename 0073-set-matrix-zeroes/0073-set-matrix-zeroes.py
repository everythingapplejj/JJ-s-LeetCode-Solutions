class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        # constraint is that the matrix has to be amended inplace
        dp_col = []
        dp_row = []
        # here is one naive method -> 
        for i in range(0, len(matrix)):
            for j in range(0, len(matrix[i])):
                if(matrix[i][j] == 0):
                    dp_col.append(j)
                    dp_row.append(i)

        for elements in dp_row:
            for j in range(len(matrix[elements])):
                matrix[elements][j] = 0
        
        for elements in dp_col:
            for j in range(len(matrix)):
                matrix[j][elements] = 0


        