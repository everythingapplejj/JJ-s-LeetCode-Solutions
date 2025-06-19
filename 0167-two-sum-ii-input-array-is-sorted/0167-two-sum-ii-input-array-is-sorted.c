/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    //Lets try in C method, which is good for embedded programming
    if(numbersSize == 0 || numbersSize == 1) {
        return NULL; 
    }

    int * arr = (int*)malloc(sizeof(int) * 2);
    int first_index = 0;
    int last_index = numbersSize - 1;
    
    while(first_index < last_index) {
        if(numbers[first_index] + numbers[last_index] == target) {
            arr[0] = first_index + 1; 
            arr[1] = last_index + 1; 
            // printf("%d, %d\n", arr[0], arr[1]);
            *returnSize = 2; 
            return arr;  
        } else if (numbers[first_index] + numbers[last_index] < target) {
            first_index += 1; 
            continue;
        } else {
            last_index -= 1; 
        }
    }

    *returnSize = 1; 
    return arr;
}