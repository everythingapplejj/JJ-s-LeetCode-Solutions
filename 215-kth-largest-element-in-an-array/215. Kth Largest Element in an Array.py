class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        sort = sorted(nums)
        return sort[len(sort) - k]
        