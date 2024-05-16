class Solution {
public:
    // hmm there is no meaning to the sorting algorithm?
    void bubblesort(std::vector<int>&sample) {
        if(sample.size()== 0 || sample.size() == 1) {
            return;
        }
        int indicator = 0; 
        do {
            indicator = 0; 
            for(unsigned int i = 0; i < sample.size() - 1; i++) {
                if(sample[i] > sample[i + 1]) {
                    indicator = 1;
                    std::swap(sample[i], sample[i + 1]);
                }
            }
        }while(indicator == 1);
    }
    int helper(int find, std::vector<int>sample) {
        int counter = 0; 
        for(unsigned int i = 0;  i < sample.size(); i++) {
            if(sample[i] < find) {
                counter++; 
            }
        }
        return counter; 
    }
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // runtime complexity
        // alot of space time complexity
        std::vector<int>sample;
        for(unsigned int i = 0; i < nums.size(); i++) {
            int extract = helper(nums[i], nums);
            sample.push_back(extract);
        }
        return sample; 

    }
};