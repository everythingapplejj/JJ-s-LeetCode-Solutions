class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        for(unsigned int i = 0; i < nums.size(); i = i + 2) {
            if(i + 1 >= nums.size()) {
                return nums[i];
            }
            if(nums[i] != nums[i + 1]) {
                return nums[i];
            }
        }
        return 0; 
    }
};