# but what we want to find this O(nlogn)
class Solution:
    def search(self, nums: List[int], target: int) -> int:
        # the easiest way to solve this is linear searching
        for i in range(0, len(nums)):
            if(nums[i] == target):
                return i

        return -1