class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        std::unordered_map<int, int>lookup;
        for(unsigned int i = 0; i < nums.size(); i++) {
            if(lookup.find(nums[i]) == lookup.end()) {
                lookup[nums[i]] = 1; 
                continue; 
            }
            lookup[nums[i]]++; 
        }
        std::vector<int> maximum;
        int second = 0; 
        for(auto it = lookup.begin(); it != lookup.end(); ++it) {
            if(it -> second > second) {
                second = it -> second; 
                continue; 
            }
        }
        for(auto it = lookup.begin(); it != lookup.end(); ++it) {
            if(it -> second == second) {
                maximum.push_back(it -> first); 
            }
        }
        
        int flag = 0; 
        int counter = second; 
        //std::cout << "Chosen Number: "<< first << std::endl;
        std::cout << "Number Frequency: " << counter << std::endl; 
        std::cout << "Vector Length: " << nums.size() << std::endl;
        int returning = nums.size(); 
        /*
        for(unsigned int i = 0; i < nums.size(); i++) {
            if(counter == 0) {
                break; 
            }
            if(nums[i] == first && flag == 0) {
                flag = 1; 
                counter--; 
                returning++; 
                continue; 
            }
            if(nums[i] == first && flag == 1) {
                counter--; 
                returning++; 
                continue; 
            }
            if(flag == 1) {
                returning++; 
                continue; 
            }
        }
        */
        for(unsigned int i = 0; i < maximum.size(); i++) {
            int placeholder = 0;
            flag = 0; 
            counter = second; 
            for(unsigned int j = 0; j < nums.size(); j++) {
                  if(counter == 0) {
                break; 
            }
            if(nums[j] == maximum[i] && flag == 0) {
                flag = 1; 
                counter--; 
                placeholder++; 
                continue; 
            }
            if(nums[j] == maximum[i] && flag == 1) {
                counter--; 
                placeholder++; 
                continue; 
            }
            if(flag == 1) {
                placeholder++; 
                continue; 
            }
            }
            std::cout << "passing" << std::endl;
            std::cout << placeholder << std::endl; 
            if(placeholder < returning) {
                returning = placeholder; 
            }
        }
        return returning; 
    }
};