class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // this is easy implementation with unordered maps (O(1))
        std::unordered_map<int, int> lookup;
        for (unsigned int i = 0; i < nums.size(); i++) {
            if (lookup.find(nums[i]) != lookup.end()) {
                lookup[nums[i]]++;
                continue; 
            }
            lookup[nums[i]]++;
        }
        for (std::unordered_map<int, int>::iterator it = lookup.begin(); it != lookup.end(); ++it) {
            if(it -> second >= 2) {
                return true;
            }
        }
        return false;
    }
};