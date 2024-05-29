class Solution {
public:
    bool isSymmetric(int num) {
        string sample = std::to_string(num);
        if(sample.length() % 2 != 0) {
            return false; 
        }
        int first_sum = 0; 
        int second_sum = 0; 
        for(unsigned int i = 0; i < sample.length(); i++) {
            int placeholder = 0; 
            if(i < sample.length()/2) {
                placeholder = num % 10;
                num = num /10;
                first_sum += placeholder; 
            } else {
                placeholder = num % 10;
                num = num /10;
                second_sum += placeholder; 
            }
        }
        if(first_sum == second_sum) {
            return true; 
        } else {
            return false;
        }
    }
    int countSymmetricIntegers(int low, int high) {
        int counter = 0; 
        for(int i = low; i <= high; i++) {
            if(isSymmetric(i)) {
                counter++;
            }
        }
        return counter; 
    }
};