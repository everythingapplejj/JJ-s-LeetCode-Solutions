class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size() == 0) {
            return 0; 
        }
        if(nums.size() == 1) {
            return 0;
        }
        int max = (nums[0] - 1) * (nums[1] - 1);
        for(unsigned int i = 0; i < nums.size() - 1; i++) {
            for(unsigned int j = i + 1; j < nums.size(); j++) {
                if((nums[i] - 1) * (nums[j] - 1) > max) {
                    max = (nums[i] - 1) * (nums[j] - 1);
                    continue; 
                }
            }
        }
        return max;
    }
};