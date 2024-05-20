class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return nums[0];
        }
        int l = 0;
        int r = 1;
        while (r < n) {
            if (nums[l] == nums[r]) {
                l += 2;
                r += 2;
            } else {
                return nums[l];
            }
        }
        return nums[l];
    }
};