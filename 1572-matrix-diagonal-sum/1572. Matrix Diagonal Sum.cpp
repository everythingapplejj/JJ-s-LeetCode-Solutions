class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int count = 0; 
        unsigned int size = mat[0].size();
        for (unsigned int i = 0; i < size; i++) {
            for (unsigned int j = 0; j < size; j++) {
                if(i == j || (i + j) == size - 1) {
                    std::cout << mat[i][j] << std::endl; 
                    count += mat[i][j];
                }
                
            }
        }
        return count;
    }
};