class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        std::vector<int>label;
        int start = 0; 
        int end = nums.size();
        int detect = -1; 
        int middle = - 1; 
        while (start != end) {
            middle = (start + end)/2;
            if(nums[middle] == target) {
                detect = middle;
                break; 
            }
            if (target < nums[middle]) {
                end = middle; 
                continue; 
            }
            if (target > nums[middle]) {
                start = middle + 1; 
                continue; 
            }
        }
        std::cout << middle << std::endl; 
        if (detect == -1) {
            label.push_back(-1);
            label.push_back(-1);
        } else {
            int left = middle;
            int right = middle; 
            for(int i = middle; i >= 1; i--) {
                if (nums[i] != nums[i - 1]) {
                    break; 
                }
                left--;
            }
            for(unsigned int i = middle; i < nums.size() - 1; i++) {
                if(nums[i] != nums[i + 1]) {
                    break; 
                }
                right++;
            }
            label.push_back(left);
            label.push_back(right); 
        }
        return label; 
    }
};