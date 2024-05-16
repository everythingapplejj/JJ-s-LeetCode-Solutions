class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size() == 0) {
            return -1; 
        }
        int left = 0;
        int right = nums.size() -  1; 
        while(left <= right) {
            int middle = (left + right) / 2; 
            if(nums[middle] == target) {
                return middle; 
            }
            if(nums[middle] > target) {
                right = middle - 1; 
                continue;
            }
            if(nums[middle] < target) {
                left = middle + 1;
                continue; 
            }
        }
        return -1; 
    }
};