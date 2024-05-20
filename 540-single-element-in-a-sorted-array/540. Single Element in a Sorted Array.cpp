class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i = 0;
        while (i < nums.size()) {
            if (nums.size() == 1) {
                return nums[0];
            }
            if (nums[i] == nums[i + 1]) {
                nums.erase(nums.begin() + i);
                nums.erase(nums.begin() + i);
            } else {
                return nums[i];
            }
        }
        return nums[0];
    }
};