class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::unordered_map<int, int>count; 
        unsigned int n = nums.size(); 
        unsigned threshold = std::floor(n/2);
        for (unsigned int i = 0; i < nums.size(); i++) {
            if (count.find(nums[i]) != count.end()) {
                count[nums[i]]++;
                continue;
            }
            count[nums[i]] = 1;
        }
        int placeholder = 0; 
        int value = count.begin() -> second;
        for (std::unordered_map<int, int>::iterator it = count.begin(); it != count.end(); ++it) {
            std::cout << "key: " << it -> first << " value: " << it -> second << std::endl; 
            std::cout << threshold << std::endl;
            std::cout << value << std::endl;
            if (it -> second >= threshold && value <= it -> second) {
                placeholder = it -> first;
                value = it -> second; 
            }
        }
        return placeholder;
    }
};