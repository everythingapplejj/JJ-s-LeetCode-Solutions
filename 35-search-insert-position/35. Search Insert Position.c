int searchInsert(int* nums, int numsSize, int target){

    int found = 0; 
    int index = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target) {
            index = i;
            found = 1;
            break;
        }
    }


    if (found == 0) {
        
        for (int i = 0; i < numsSize; i++) {
            if (target >= nums[i]) {
                index ++;
            }
        } 
    }

    return index;
}