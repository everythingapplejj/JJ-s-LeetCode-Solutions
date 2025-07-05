class Solution:
    def search(self, nums: List[int], target: int) -> int:
        #* remember that binary search has to be sorted
        if(len(nums) == 0):
            return -1 

        first_ptr = 0
        last_ptr = len(nums) - 1
        
        while(first_ptr < last_ptr):
            middle = int((first_ptr + last_ptr)/2)
            # print(middle, first_ptr, last_ptr)
            if(nums[middle] == target):
                return middle

            if(nums[middle] < target):
                first_ptr = middle + 1
            
            if(nums[middle] > target):
                last_ptr = middle

        if(nums[first_ptr] == target):
            return first_ptr

        return -1
        
        