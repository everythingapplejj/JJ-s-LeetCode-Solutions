class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # in this way I will be using the naive approach to resolve this problem
        # this will be a two pointer method to resolve
        two_sum_collector = []
        for i in range(0, len(nums) - 1):
            for j in range(i + 1, len(nums)):
                if(nums[i] + nums[j] == target and i != j):
                    two_sum_collector.append(i)
                    two_sum_collector.append(j)

        return (sorted(two_sum_collector))