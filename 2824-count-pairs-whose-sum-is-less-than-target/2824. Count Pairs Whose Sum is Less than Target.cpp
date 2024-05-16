class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        // form pairs with big O(n^2)
        // can i use a faster runtime for this code? 
        int counter = 0;
        for(unsigned int i = 0; i < nums.size() - 1; i++) {
            for(unsigned int j = i + 1; j < nums.size(); j++) {
                if(nums[i] + nums[j] < target) {
                    counter++;
                } else {
                    continue;
                }
            }
        }
        return counter; 
    }
};