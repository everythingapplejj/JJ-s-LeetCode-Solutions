class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        unsigned int size = image[0].size();
        for(unsigned int i = 0; i < size; i++) {
            std::vector<int> extract= image[i];
            for(unsigned int i = 0; i < extract.size()/2; i++) {
                std::swap(extract[i], extract[extract.size() - 1 - i]);
            }
            for(unsigned int i = 0; i < extract.size(); i++) {
                if(extract[i] == 1) {
                    extract[i] = 0;
                    continue; 
                } else {
                    extract[i] = 1;
                    continue; 
                }
            }
            image[i] = extract; 
        }
        return image; 
    }
};