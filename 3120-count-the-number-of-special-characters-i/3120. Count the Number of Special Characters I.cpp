class Solution {
public:
    int numberOfSpecialChars(string word) {
        std::unordered_map<char,int>lookup;
        int count = 0; 
        for(unsigned int i = 0; i < word.length(); i++) {
            if(lookup.find(word[i]) == lookup.end(word[i])) {
                lookup[word[i]] = 1; 
                continue; 
            }
            lookup[word[i]]++; 
        }
        for(auto it = lookup.begin(); it != lookup.end(); ++it) {
            if(isupper(it -> first)) {
                continue;
            }
            if(lookup[toupper(it -> first)]) {
                count++;  
            }
        }
        return count; 
    }
};