class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        dict_counter = {}
        for i in range(len(nums)):
            if (nums[i] not in dict_counter):
                dict_counter.update({nums[i]: 1})
                continue
            else:
                dict_counter[nums[i]] += 1
            
        for key in dict_counter:
            if(dict_counter[key] == 1):
                return key

        return -1