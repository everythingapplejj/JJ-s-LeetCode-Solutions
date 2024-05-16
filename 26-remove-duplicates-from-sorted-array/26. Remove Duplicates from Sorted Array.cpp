class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        std::unordered_map<int, int> lookup;
        for(unsigned int i = 0; i < nums.size(); i++) {
            if(lookup.find(nums[i]) == lookup.end()) {
                lookup[nums[i]] = 1;
                continue; 
            }
            lookup[nums[i]] = lookup[nums[i]] + 1; 
        }
         std::vector<int>placeholder;
    for(unsigned int i = 0; i < nums.size(); i++) {
        if(lookup[nums[i]] >= 0) {
            placeholder.push_back(nums[i]);
            lookup[nums[i]] = -1; 
        }
    }
    nums.clear();
    nums = placeholder; 
    return (int)placeholder.size(); 
    }
};