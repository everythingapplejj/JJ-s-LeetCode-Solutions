class Solution {
public:
    bool isValid(string s) {
        std::stack<char>helper;
        for(unsigned int i = 0; i < s.length(); i++) {
            if(s[i] == '(') {
                helper.push('(');
                continue;
            }
            if(s[i] == '{') {
                helper.push('{');
                continue; 
            }
            if(s[i] == '[') {
                helper.push('[');
                continue; 
            }
            if(s[i] == ']') {
                if(helper.empty()) {
                    return false;
                }
                char extract = helper.top();
                helper.pop();
                if (extract != '['){
                    return false; 
                }
                continue; 
            }
            if(s[i] == '}') {
                if(helper.empty()) {
                    return false;
                }
                char extract = helper.top();
                helper.pop();
                if(extract != '{') {
                    return false; 
                }
                continue; 
            }
            if(s[i] == ')') {
                if(helper.empty()) {
                    return false;
                }
                char extract = helper.top(); 
                helper.pop(); 
                if(extract != '(') {
                    return false; 
                }
                continue; 
            }
        }
        if(helper.empty()) {
            return true; 
        } else {
            return false; 
        }
    }
};