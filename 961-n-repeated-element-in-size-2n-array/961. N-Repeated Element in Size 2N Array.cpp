class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        std::unordered_map<int,int>sample;
        int finl = 0; 
        for(unsigned int i = 0; i < nums.size(); i++) {
            if(sample.find(nums[i]) == sample.end()) {
                sample[nums[i]] = 1;
                continue;
            }
            sample[nums[i]]++; 
        }
        for(auto it = sample.begin(); it != sample.end(); ++it) {
            if(it -> second == nums.size()/2) {
                return it -> first; 
            }
        }
        return finl; 
    }
};