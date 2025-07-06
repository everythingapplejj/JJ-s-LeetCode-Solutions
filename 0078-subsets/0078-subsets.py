class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        # this is about creating all possible subsets
        # trying populating method, 
        # power set means, the power set of the subset of powerset, 
        # so hence, everytime I add a population, I just have to append the populaton number :) 
        # Lets try it!

        # Starting with base cases
        basic = [[]]

        # next i just slowly add the population, (all possible cases without N) + all possible cases with the (N
        # all possible cases with the (N) = all possible cases without the N distributed with N

        # iterate each number
        
        for i in range(0, len(nums)):
            collector = []
            for j in range(0, len(basic)):
                placeholder = basic[j].copy() # this will be inplace because it is a list
                placeholder.append(nums[i])
                collector.append(placeholder)

            # print(basic)
            for k in range(0, len(collector)):
                basic.append(collector[k])

        return basic
        
        