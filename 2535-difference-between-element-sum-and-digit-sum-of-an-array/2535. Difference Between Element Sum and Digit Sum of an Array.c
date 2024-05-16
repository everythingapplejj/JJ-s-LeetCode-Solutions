#include<math.h>

int digitsum(int n);
int differenceOfSum(int* nums, int numsSize){
    int element_sum = 0;
    int digit_sum = 0;

    for (int i = 0; i < numsSize; i++) {
        element_sum += nums[i];
        digit_sum += digitsum(nums[i]);
    }

    return abs(element_sum - digit_sum);
    
}


int digitsum(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n = n/10;
    }

    return sum;
}