class Solution {
public:
    int numberOfChild(int n, int k) {
        std::vector<int>children; 
        for(int i = 0; i < n; i++) {
            children.push_back(i);
        }
        int pointer = 0; 
        int flag = 0; 
        while(k > 0) {
            if(flag == 0) {
                if(pointer + 1 >= children.size()) {
                    flag = 1;
                    continue; 
                }
                k--;
                pointer++; 
            } else if (flag == 1) {
                if(pointer - 1 < 0) {
                    flag = 0;
                    continue; 
                }
                k--;
                pointer--;
            } 
        }
        return children[pointer]; 
    }
};