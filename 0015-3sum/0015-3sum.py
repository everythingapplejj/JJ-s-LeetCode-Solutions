class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        collector = []

        if(len(nums) < 3):
            return collector

        # aiming for at least O(n^2)

        nums = sorted(nums)
        seen = []
    
        for i in range(len(nums) - 2):
            if(nums[i] > 0):
                break
            placeholder = []
            first_ptr = i + 1
            if(nums[i] in seen):
                continue
            seen.append(nums[i])
            last_ptr = len(nums) - 1
            while(first_ptr < last_ptr):
                if(nums[first_ptr] + nums[i] + nums[last_ptr] > 0):
                    last_ptr -= 1
                    continue

                if(nums[first_ptr] + nums[i] + nums[last_ptr] < 0):
                    first_ptr += 1
                    continue

                # print(nums[i], nums[first_ptr], nums[last_ptr])
                if(nums[first_ptr] + nums[i] + nums[last_ptr] == 0):
                    placeholder.append(nums[i])
                    placeholder.append(nums[first_ptr])
                    placeholder.append(nums[last_ptr])
                    collector.append(placeholder)
                    placeholder = []
                    # skip the duplicates: 
                    first_num = nums[first_ptr]
                    last_num = nums[last_ptr]
                    while(nums[first_ptr] == first_num):
                        first_ptr += 1
                        if(first_ptr > len(nums) - 1):
                            break
                    while(nums[last_ptr] == last_num):
                        last_ptr -= 1
                        if(last_ptr < 0):
                            break
    

        return collector
            