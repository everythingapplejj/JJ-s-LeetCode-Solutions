class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        //std::vector<int>output; 
        for(unsigned int i = 1; i < nums.size(); i++) {
            if(i == 0) {
                continue;
            }
            nums[i] = nums[i - 1] + nums[i];
        }
        return nums; 
    }
};