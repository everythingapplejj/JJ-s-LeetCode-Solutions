class Solution {
public:
    int sumOfMultiples(int n) {
        int returning = 0;
        for(int i = 1; i <= n; i++) {
            if(i % 3 == 0 || i % 5  == 0 || i % 7 == 0) {
                std::cout << i << std::endl;
                returning += i;
            }
        }
        return returning; 
    }
};