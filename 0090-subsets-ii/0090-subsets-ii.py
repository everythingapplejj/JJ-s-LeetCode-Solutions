class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        #* this will be similar strategy as the normal subset problem
        # just have to know not to include the already one inside 
        # I love programming

        base_case = [[]]
        
        for i in range(len(nums)):
            placeholder = []
            for samples in base_case:
                shallow_cpy = samples.copy()
                shallow_cpy.append(nums[i])
                shallow_cpy = sorted(shallow_cpy)
                if(shallow_cpy in base_case):
                    continue
                else:
                    placeholder.append(shallow_cpy)
            for members in placeholder:
                base_case.append(members)

        return base_case