class Solution {
public:
    bool isPalindrome(int x) {
        std::vector<int>collection;
        if(x < 0) {
            return false; 
        }
        while(x != 0) {
            int extract = x % 10;
            x = x/10;
            collection.push_back(extract);
        }
        std::vector<int>compare = collection;
        reverse(compare.begin(), compare.end());
        for(unsigned int i = 0; i < compare.size(); i++) {
            if(compare[i] != collection[i]) {
                return false;
            }
        }
        return true; 
    }
};