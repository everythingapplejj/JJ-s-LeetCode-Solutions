int thirdMax(int* nums, int numsSize){

    int min = nums[0]; 
    
    for (int r = 0; r < numsSize; r++) {
        if (min > nums[r]) {
            min = nums[r];
        }
    }

    printf("min: %d\n", min);

    int max = min;
    int second = min;
    int third = min;

    for (int i = 0; i < numsSize; i++) {
        if (max <= nums[i]) {
            max = nums[i];
        }
    } 

    printf("max: %d\n", max);



    for (int j = 0; j < numsSize; j++) {
        if (nums[j] == max) {
            continue;
        }
        if (second <= nums[j]) {
            second  = nums[j];

        }
    }

    printf("second: %d\n", second);

    for (int k = 0; k < numsSize; k++) {
        if (nums[k] == max) {
            continue; 
        }
        if (nums[k] == second) {
            continue;
        }

        if (third <= nums[k]) {
            third  = nums[k];
        }
    }
    
    printf("third: %d\n", third);

    if (numsSize < 3 || second == third) {
        return max;
    } else {
        return third;
    }
   
}