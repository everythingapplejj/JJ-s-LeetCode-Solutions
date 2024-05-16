class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        std::unordered_map<int, int> sample;
        unsigned int size = grid[0].size();
        for(unsigned int i = 0; i < size; i++) {
            for(unsigned int j = 0; j < size; j++) {
                if(sample.find(grid[i][j]) == sample.end()) {
                    sample[grid[i][j]] = 1;
                    continue;
                }
                sample[grid[i][j]] += 1; 
            }
        }
        int duplicate = 0;
        int missing = 0;
        std::vector<int> returning;
        for(unsigned int i = 1; i <= size * size; i++) {
            if(sample.find(i) != sample.end()) {
                if(sample[i] != 1) {
                    duplicate = i;
                    if(duplicate != 0 && missing != 0) {
                        break; 
                    }
                    continue; 
                }
                continue; 
            }
            missing = i;
            if(duplicate != 0 && missing != 0) {
                break;
            }
        }
        returning.push_back(duplicate);
        returning.push_back(missing);
        return returning; 
    }   
};