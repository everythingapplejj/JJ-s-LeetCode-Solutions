class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        unsigned int i = 0; 
        unsigned int j = 0; 
        for(i = 0; i < grid.size() - 1; i++) {
            j = 0; 
            for(j = 0; j < grid[i].size() - 1; j++) { 
                if(grid[i][j] == grid[i][j + 1]) {
                    return false; 
                }
            }
            if(grid[i][j] != grid[i + 1][j]) {
                return false; 
            }
        }
        for(j = 0; j < grid[i].size() - 1; j++) {
            if(grid[i][j] == grid[i][j + 1]) {
                    return false; 
                }
        }
        return true; 
    }
};