class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        std::unordered_map<int, bool>processed; 
        int operation = 0; 
        int placeholder = 0;
        for(int i = 1 ; i <= k; i++) {
            placeholder += i; 
        }
        for(unsigned int i = nums.size() - 1; i >= 0; i--) {
            if(placeholder == 0) {
                break; 
            }
            if(nums[i] > k) {
                operation++;
                continue; 
            } else {
                if(processed.find(nums[i]) != processed.end()) {
                    operation++;
                    continue;
                }
                processed[nums[i]] = true; 
                placeholder -= nums[i];
                operation++; 
                continue; 
            }

        }
        return operation;
    }
};