class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(unsigned int i = 0; i < flowerbed.size(); i++) {
            if(n == 0) {
                break; 
            }
        if(flowerbed[i] == 1) {
            i++; 
            continue; 
        }
        if(i == 0) {
            if(i + 1 >= flowerbed.size()) {
                flowerbed[i] = 1;
                n--;
                continue;
            }
            if(flowerbed[i + 1] != 1) {
                flowerbed[i] = 1;
                n--;
                continue; 
                //std::cout << "passing" << std::endl; 
            }
            continue; 
        } else {
            if(i + 1 >= flowerbed.size()) {
                if(flowerbed[i - 1] != 1) {
                    flowerbed[i] = 1;
                    n--;
                    break; 
                }
            } else {
                //std::cout << i << std::endl;
                if(flowerbed[i - 1] != 1 && flowerbed[i + 1] != 1) {
                flowerbed[i] = 1;
                n--;
                continue; 
            }

            }
            
        }
        }
        for(unsigned int i = 0; i < flowerbed.size(); i++) {
            std::cout << flowerbed[i] << " ";
        }
        if(n == 0) {
            return true; 
        } else {
            return false; 
        }
    }
};