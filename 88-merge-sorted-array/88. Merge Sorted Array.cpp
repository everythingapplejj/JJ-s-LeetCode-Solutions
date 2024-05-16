class Solution {
public:
    void swap(int & sample1, int & sample2) {
        int place = sample1;
        sample1 = sample2;
        sample2 = place; 
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> finl; 
        for (unsigned int i = 0; i < m; i++) {
            finl.push_back(nums1[i]);
        }
        for (unsigned int i = 0; i < n; i++) {
            finl.push_back(nums2[i]);
        }
        int indicator = 0; 
        do{
            indicator = 0; 
            for (unsigned int i = 0; i < finl.size() - 1; i++) {
                if (finl[i] > finl[i+1]) {
                    swap(finl[i], finl[i+1]);
                    indicator = 1; 
                }
            }

        }while(indicator == 1);

        nums1 = finl; 
    }
};