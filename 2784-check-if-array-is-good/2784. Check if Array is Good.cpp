class Solution {
public:
    void sort(std::vector<int>&sample) {
        int indicator = 0; 
        do {
            indicator = 0; 
            for(unsigned int i = 0; i < sample.size() - 1; i++) {
                if(sample[i] > sample[i + 1]) {
                    std::swap(sample[i],sample[i + 1]);
                    indicator = 1; 
                }
            }
        }while(indicator == 1);
    }
    bool isGood(vector<int>& nums) {
        sort(nums);
        int size = (int)nums.size() - 1;
        int count = 0; 
        if(nums.size() < 2) {
            return false; 
        }
        for(unsigned int i = 0; i < nums.size() - 2; i++) {
            if(nums[i + 1] != nums[i] + 1) {
                return false; 
            }
        }
        for(unsigned int i = 0; i < nums.size(); i++) {
            if(nums[i] == size) {
                count++;
            }
        }
        if(nums[size] == nums[size - 1] && size == nums[size] && count == 2) {
            return true; 
        }
        return false; 
    }
};