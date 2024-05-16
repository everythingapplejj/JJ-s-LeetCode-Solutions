class Solution {
public:
    bool checkPerfectNumber(int num) {
        int placeholder = 0;
        for (int i = 1; i < num; i++) {
            if(num % i == 0) {
                std::cout << i << std::endl;
                placeholder += i;
            }
        }
        std::cout << placeholder << std::endl;
        if (placeholder == num) {
            return true; 
        } 
        return false;
    }
};