# using the anti greedy algorithm, i want to move the pointer to where I point to the smaller value. 
class Solution:
    def findMin(self, nums: List[int]) -> int:
        if(len(nums) == 0):
            return -1 # case where it does not exist

        first_ptr = 0 
        last_ptr = len(nums) - 1
        if(first_ptr == last_ptr):
            return nums[first_ptr]

        while(first_ptr <= last_ptr):
            # since rotated, I need to think about few different cases, 

            if(nums[first_ptr] < nums[last_ptr]):
                # if the first ptr has lower number, then advance
                last_ptr -= 1
                continue

            if(nums[first_ptr] > nums[last_ptr]):
                # if the first ptr has higher number, decrease the last ptr
                first_ptr += 1
                continue

            if(nums[first_ptr] == nums[last_ptr]):
                break

        
        return nums[last_ptr]