class Solution {
public:
    string removeTrailingZeros(string num) {
        for(int i = (int)num.length() - 1; i >= 0; i--) {
            if(num[i] == '0') {
                num.pop_back();
                continue; 
            } else {
                break; 
            }
        }
        return num; 
    }
};