class Solution {
public:
    int averageValue(vector<int>& nums) {
       
        int return_val = 0; 
        int count = 0; 
        for (unsigned int i = 0; i < nums.size(); i++) {
            if(nums[i] % 2 == 0 && nums[i] % 3 == 0) {
                return_val += nums[i];
                count++; 
            }
        }
        if(count == 0) {
            return 0; 
        }
        return_val = return_val/count; 
        return return_val;
    }
};