/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int tracker_1 = 0;
    int tracker_2 = 0;

    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                tracker_1 = i;
                tracker_2 = j;
                break; 
            }
        }
    }
    int * returning = (int*) malloc(2 * sizeof(int));
    printf("%d, %d\n", tracker_1, tracker_2);
    returning[0] = tracker_1;
    returning[1] = tracker_2;
    *returnSize = 2;
    return returning; 
}