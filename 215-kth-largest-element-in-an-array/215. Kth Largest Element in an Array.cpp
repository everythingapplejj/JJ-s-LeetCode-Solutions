class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>sample;
        for (unsigned int i = 0; i < nums.size(); i++) {
            sample.push(nums[i]);
        } 
        int extract = 0; 
        int count = k - 1;
        while(count != 0) {
            std::cout << "passing" << std::endl; 
            sample.pop();
            count--;
        }
        extract = sample.top();
        return extract;
    }
};