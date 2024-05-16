int dominantIndex(int* nums, int numsSize){

    int max = 0;
    int second_biggest = 0;
    int save_i = 0;
    int save_j = 0;

    for (int i = 0; i < numsSize; i++) {
        if (max <= nums[i]) {
            max = nums[i];
            save_i = i;
        } 
    }

    for (int j = 0; j < numsSize; j++) {
        if (second_biggest <= nums[j] && nums[j] < max) {
            second_biggest = nums[j];
            save_j = j;
        }
    }
    
    if (max >= second_biggest * 2) {
        return save_i;
    } else {
        return -1;
    }
}