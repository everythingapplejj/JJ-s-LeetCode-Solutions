class Solution {
public:
    int arrangeCoins(int n) {
        int selector = 1; 
        int count = 0; 
        while(true) {
            n = n - selector;
            if(n < 0) {
                break; 
            }
            selector++;
            count++; 
        }
        return count; 
    }
};