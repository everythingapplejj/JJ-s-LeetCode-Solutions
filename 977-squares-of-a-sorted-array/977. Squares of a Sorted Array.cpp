class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        std::vector<int>returning;
        for(unsigned int i = 0; i < nums.size(); i++) {
            int insert = nums[i] * nums[i];
            returning.push_back(insert);
            //return returning;
            for(unsigned int i = returning.size() - 1; i > 0; i--) {
                if(returning[i - 1] > returning[i]) {
                    std::swap(returning[i - 1], returning[i]);
                } else {
                    break;
                }
                //break; 
            }
        }
        return returning; 
    }
};