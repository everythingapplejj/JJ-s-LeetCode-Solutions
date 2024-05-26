class Solution {
public:

    bool isPrime(int num) {
        static std::vector<bool>dynamic;
        static std::vector<bool>updated;
        if(dynamic.size() < num) {
            dynamic.resize(num);
            updated.resize(num);
        } else if (updated[num - 1] == true) {
            return dynamic[num - 1];
        }
        if(num < 2) {
            dynamic[num - 1] = false; 
            updated[num - 1] = true; 
            return false; 
        } 
        int counter = 0; 
        for(int i = sqrt(num); i > 1; i--) {
            if(num % i == 0) {
                counter++; 
                continue; 
            }
        }
        if(counter > 0) {
            dynamic[num - 1] = false;
            updated[num - 1] = true; 
            return false;
        }
        dynamic[num - 1] = true; 
        updated[num - 1] = true; 
        return true;
    }  
 

    int diagonalPrime(vector<vector<int>>& nums) {
        int max = 0;
        int i = 0; 
        int j = nums.size() - 1;
        for(unsigned int k = 0; k < nums.size(); k++) {
            if(isPrime(nums[k][i])) {
                if(max < nums[k][i]) {
                    max = nums[k][i];
                }
            }
            i++; 
            if(isPrime(nums[k][j])) {
                if(max < nums[k][j]) {
                    max = nums[k][j];
                }
            }
            j--;
        }
        return max; 

    }
};