class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        sorted_num = sorted(nums)
        for i in range(0, len(nums)):
            if(i != sorted_num[i]):
                return i

        return sorted_num[len(sorted_num) - 1] + 1