class Solution {
public:
    bool isFascinating(int n) {
        std::unordered_map<int,int>lookup;
        for(int i = 1; i < 10; i++) {
            lookup[i] = 0; 
        }
        int tot = 0;
        if((n * 3) / 1000 != 0 || n * 2 / 1000 != 0) {
            return false;
        }
        tot = n * 1000000 + (n * 3) * 1000 + n * 2;
        std::cout << tot << std::endl; 
        while(tot != 0) {
            int placeholder = tot % 10; 
            tot = tot/10; 
            if(lookup.find(placeholder) == lookup.end()) {
                continue; 
            } else {
                lookup[placeholder]++; 
            }
        }
        for(auto it = lookup.begin(); it != lookup.end(); ++it) {
            if(it -> second != 1) {
                return false; 
            }
        }
        return true; 
    }
};