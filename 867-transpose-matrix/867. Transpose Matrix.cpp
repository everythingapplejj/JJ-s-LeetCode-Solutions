class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        std::vector<std::vector<int>>output; 
        std::vector<int>placeholder; 

        for(unsigned int i = 0; i < matrix[0].size(); i++) {
            for(unsigned int j = 0; j < matrix.size(); j++) {
                placeholder.push_back(matrix[j][i]);
            }
            output.push_back(placeholder);
            placeholder.clear();
        }
        return output; 
    }
};