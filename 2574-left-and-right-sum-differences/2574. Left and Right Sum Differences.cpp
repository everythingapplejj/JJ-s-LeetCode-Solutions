class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        std::vector<int> left_sum;
        std::vector<int> right_sum;
        for(unsigned int i = 0; i < nums.size() - 1; i++) {
            int placeholder = 0; 
            for(unsigned int j = i + 1; j < nums.size(); j++) {
                placeholder += nums[j]; 
            }
            right_sum.push_back(placeholder);
        }
        right_sum.push_back(0); 
        //left_sum.push_back(0);
        for(unsigned int i = 0; i < nums.size(); i++) {
            int placeholder = 0; 
            //std::cout << "i is starting" << std::endl; 
            //std::cout << i  << std::endl; 
            for(int j = 0; j < i; j++) {
                //std::cout << "j is starting" << std::endl; 
                //std::cout << j << std::endl; 
                placeholder += nums[j]; 
            }
            left_sum.push_back(placeholder); 
        }
        std::vector<int>answer; 
        for(unsigned int i = 0; i < left_sum.size(); i++) {
            int result = std::abs(left_sum[i] - right_sum[i]);
            answer.push_back(result);
        }
        return answer; 
    }
};