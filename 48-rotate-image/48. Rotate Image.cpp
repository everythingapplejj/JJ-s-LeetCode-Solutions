class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //transpose the matrix first
        int n = (int)matrix[0].size();
        int i = 0;
        int j = 0;
        while(i < n && j < n) {
            int i_placeholder = i;
            int j_placeholder = j;
            for(unsigned int i = 1; i < n - i_placeholder; i++) {
                std::swap(matrix[i_placeholder][j_placeholder + i], matrix[i_placeholder + i][j_placeholder]);
            } 
            i++;
            j++; 
        }
        for(unsigned int i = 0; i < matrix.size(); i++) {
            for(unsigned int j = 0; j < matrix[i].size()/2; j++) {
                std::swap(matrix[i][j], matrix[i][matrix.size() - 1 - j]);
            }
        }
        return;
        //and then reverse per line
    }
};