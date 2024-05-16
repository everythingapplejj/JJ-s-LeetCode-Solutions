class Solution {
public:
// in total, we have a running time of O(n)
    void moveZeroes(vector<int>& nums) {
        int zero_counter = 0; 
        std::vector<int>placeholder; 
        for(unsigned int i = 0; i < nums.size() ; i++ ) {
            if(nums[i] == 0) {
                zero_counter++;
                continue; 
            }
            placeholder.push_back(nums[i]);
        }
        for(int i = 0; i < zero_counter; i++) {
            placeholder.push_back(0);
        }
        nums.clear();
        nums = placeholder;
        return;
    } 
};