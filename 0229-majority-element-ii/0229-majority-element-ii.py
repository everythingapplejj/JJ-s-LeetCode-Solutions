class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        collect_dict = {}
        for i in range(len(nums)):
            if(nums[i] not in collect_dict):
                collect_dict.update({nums[i]: 1})
                continue
            else:
                collect_dict[nums[i]] += 1

        return_collector = []

        for key in collect_dict:
            if(collect_dict[key] > len(nums)/3):
                return_collector.append(key)

        return return_collector