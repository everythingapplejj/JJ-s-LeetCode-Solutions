class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        std::vector<int>returning;
        int one_counter = 0; 
        for(unsigned int i = 0; i < mat.size(); i++) {
            for (unsigned int j = 0; j < mat[i].size(); j++) {
                if(mat[i][j] == 1) {
                    one_counter++; 
                }
            }
            if(returning.empty()) {
                returning.push_back(i);
                returning.push_back(one_counter); 
                one_counter = 0;
                continue; 
            }
            if(returning[1] < one_counter) {
                std::cout << one_counter << std::endl;
                returning[0] = i;
                returning[1] = one_counter;
                one_counter = 0; 
                continue; 
            }
            one_counter = 0;
        }
        return returning;
    }
};