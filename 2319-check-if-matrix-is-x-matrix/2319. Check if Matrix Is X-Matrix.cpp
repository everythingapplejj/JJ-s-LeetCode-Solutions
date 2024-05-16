class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        unsigned int n = grid[0].size();
        for (unsigned int i = 0; i < n; i++) {
            for(unsigned int j = 0; j < n; j++) {
                if(i == j || i + j == n - 1) {
                    if(grid[i][j] == 0) {
                        return false; 
                    }
                    continue; 
                }
                if(grid[i][j] != 0) {
                    return false; 
                }
            }
        }
        return true; 
    }
};