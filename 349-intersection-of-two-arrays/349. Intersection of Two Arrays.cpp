class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int>output; 
        std::unordered_map<int,int>lookup;
        for (unsigned int i = 0; i < nums1.size(); i++) {
            if(lookup.find(nums1[i]) == lookup.end()) {
                lookup[nums1[i]] = 1;
                continue; 
            }
            //lookup[nums1[i]]++; 
        }
        for (unsigned int i = 0; i < nums2.size(); i++) {
            //std::cout << "passing" << std::endl; 
            if(lookup.find(nums2[i])!= lookup.end()) {
                //std::cout << "passing" << std::endl;
                if(lookup[nums2[i]] > 0) {
                    std::cout << "Observe" << std::endl; 
                    output.push_back(nums2[i]);
                    lookup[nums2[i]]--;
                }
            }
        }
        return output;
    }
};