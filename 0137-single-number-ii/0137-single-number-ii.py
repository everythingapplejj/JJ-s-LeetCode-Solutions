class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        # I will be using histograming here:
        hist = {}
        for i in range(0,len(nums)):
            if(nums[i] not in hist):
                hist.update({nums[i]: 1})
            else:
                hist[nums[i]] += 1
        
        chosen = -1
        for key in hist:
            if (hist[key] == 1):
                chosen = key
                break
                
        return chosen

