class Solution {
public:
    char helper(char a, char b, int&carry) {
        if(a == '0') {
            if(b == '0') {
                if (carry == 0) {
                    carry = 0;
                    return '0';
                } else if (carry == 1) {
                    carry = 0;
                    return '1';
                }
            } else if (b == '1') {
                if (carry == 0) {
                    carry = 0; 
                    return '1';
                } else if(carry == 1) {
                    carry = 1;
                    return '0';
                }
            }
        } else if (a == '1') {
            if(b == '0') {
                if (carry == 0) {
                    carry = 0;
                    return '1';
                } else if (carry == 1) {
                    carry = 1;
                    return '0';
                }
            } else if (b == '1') {
                if (carry == 0) {
                    carry = 1; 
                    return '0';
                } else if(carry == 1) {
                    carry = 1;
                    return '1';
                }
            }
        }
        return char {};
    }
    string addBinary(string a, string b) {
        string output = string {}; 
        int max_length = 0;
        int selector = 0; 
        int carry_on = 0; 
        int min_length = 0; 
        if(a.length() > b.length()) {
            max_length = a.length();
            min_length = b.length() - 1; 
            selector = 0; 
        } else {
            max_length = b.length();
            min_length = a.length() - 1;
            selector = 1; 
        }

        for(int i = max_length - 1; i >= 0; i--) {
            if(selector == 0) {
                // selects a
                if(min_length < 0) {
                    output.push_back(helper(a[i], '0', carry_on));
                    continue; 
                } 
                output.push_back(helper(a[i], b[min_length], carry_on));
                min_length--; 
                continue; 
                
            } else if (selector == 1) {
                // selects b
                if(min_length < 0) {
                    output.push_back(helper('0', b[i], carry_on));
                    continue; 
                }
                output.push_back(helper(a[min_length], b[i], carry_on));
                min_length--; 
                continue; 
            }
        }
        if(carry_on == 1) {
             output.push_back(helper('0','0',carry_on));
        }
        for(unsigned int i = 0; i < output.size()/2; i++) {
            std::swap(output[i], output[output.size() - 1 - i]);
        }
        return output; 
    }
};