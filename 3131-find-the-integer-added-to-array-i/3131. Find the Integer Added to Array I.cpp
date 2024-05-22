class Solution {
public:
    void sort(std::vector<int>&sample) {
        int indicator = 0; 
        do {
            indicator = 0; 
            for(unsigned int i = 0; i < sample.size() - 1; i++) {
                if(sample[i] > sample[i + 1]) {
                    std::swap(sample[i], sample[i + 1]);
                    indicator = 1; 
                }
            }
        } while(indicator == 1);
    }
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1);
        sort(nums2);
        int diff = nums2[0] - nums1[0];
        return diff; 
    }
};