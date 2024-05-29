class Solution {
public:
    int large_num(int num) {
        int max = num % 10;
        num = num/10; 
        while (num != 0) {
            int placeholder = num % 10;
            if(placeholder > max) {
                max = placeholder; 
            }
            num = num / 10; 
        }
        return max; 
    }
    int maxSum(vector<int>& nums) {
        std::vector<int>worklist;
        for(unsigned int i = 0; i < nums.size(); i++) {
            worklist.push_back(large_num(nums[i]));
        }
        int maximal = -1;
        
        for(unsigned int i = 0; i < nums.size() - 1; i++) {
            for(unsigned int j = i + 1; j < nums.size(); j++) {
                if(worklist[i] == worklist[j]) {
                    if(nums[i] + nums[j] > maximal) {
                        maximal = nums[i] + nums[j];
                    }
                }
            }
        }
        

        return maximal;
    }
};