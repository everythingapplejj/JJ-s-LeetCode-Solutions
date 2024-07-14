class Solution {
public:
    int firstUniqChar(string s) {
        std::unordered_map<char, int> lookup;
        for(int i = 0; i < s.size(); i++) {
            lookup[s[i]]++;
        }
        /*
        for(auto it = lookup.begin(); it != lookup.end(); ++it) {
            std::cout << it -> first << " " << it -> second << std::endl; 
        }
        */
        int save = -1;
        for(int i = 0; i < s.size(); i++) {
            if(lookup[s[i]] == 1) {
                save = i;
                break;
            }
        }
        return save;
    } 
};