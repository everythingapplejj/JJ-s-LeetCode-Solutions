class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        std::unordered_map<int, int>sample; 
        for (unsigned int i = 0; i < nums.size(); i++) {
            if (sample.find(nums[i]) != sample.end()) {
                sample[nums[i]] += 1;
                continue; 
            }
            sample[nums[i]] = 1;
        }
        int returning = 0;
        for(auto it = sample.begin(); it != sample.end(); ++it) {
            if(it -> second == 1) {
                returning += it -> first;
            } 
        }
        return returning; 
    }
};