class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        // using resize method
        if((int)mat.size() * (int)mat[0].size() != r * c) {
            return mat; 
        }
        std::vector<int>placeholder;
        for(unsigned int i = 0; i < mat.size(); i++) {
            for(unsigned int j = 0; j < mat[i].size(); j++) {
                placeholder.push_back(mat[i][j]);
            }
        }
        std::vector<std::vector<int>>output; 
        output.resize(r);
        for(unsigned int i = 0; i < output.size(); i++) {
            output[i].resize(c); 
        }
        
        //return output; 

        int count = 0; 
        for(unsigned int i = 0; i < output.size(); i++) {
            for(unsigned int j = 0; j < output[i].size(); j++) {
                output[i][j] = placeholder[count];
                count++;
            }
        }
        return output; 
    }
 };