class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        std::vector<int>sub_1;
        std::vector<int>sub_2; 
        for(unsigned int i = 0; i < n; i++) {
            sub_1.push_back(nums[i]);
        }
        for(unsigned int i = n; i < n *2; i++) {
            sub_2.push_back(nums[i]);
        }
        bool indicator = true;
        std::vector<int>output; 
        for(unsigned int i = 0; i < n; i++) {
            output.push_back(sub_1[i]);
            output.push_back(sub_2[i]);
        }
        return output; 
    }
};