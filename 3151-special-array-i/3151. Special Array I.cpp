class Solution {
public:
    int checker(int num) {
        if (num % 2 == 0) {
            return 1; 
        }
        return 0; 
    }
    
    bool isArraySpecial(vector<int>& nums) {
        if (nums.size() == 1 || nums.size() == 0) {
            return true; 
        }
        int placeholder = 0;
        int counter = 0; 
        for (unsigned int i = 0; i < nums.size() - 1; i++) {
            if(counter == 0) {
                if(checker(nums[i]) == checker(nums[i + 1])) {
                    return false; 
                }
                placeholder = checker(nums[i]);
                counter++;
                continue; 
            }
            if(checker(nums[i]) == checker(nums[i + 1]) || checker(nums[i]) == placeholder) {
                return false; 
            }
            counter++;
            placeholder = checker(nums[i]);
            continue; 
        }
        return true; 
    }
};