class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        std::vector<int>sample; 
        for(unsigned int i = 0; i < nums.size(); i++) {
            std::cout <<nums[i] << std::endl; 
            if(nums[i] == val) {
                continue; 
            }
            sample.push_back(nums[i]);
        }
        //std::cout << sample.size() << std::endl; 
        nums.clear();
        for (unsigned int i = 0; i < sample.size(); i++) {
            std::cout << "passing" << std::endl; 
            nums.push_back(sample[i]);
        }
        //nums = sample;
        return (int)sample.size();
    }
};