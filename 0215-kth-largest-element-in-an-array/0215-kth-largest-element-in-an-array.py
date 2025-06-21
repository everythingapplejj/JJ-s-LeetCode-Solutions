# I am planning to use heap method for this
import heapq
class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        # using the set method? Or you can utilize the heap method
        heapq.heapify(nums)
        returning = 0
        for i in range(0, len(nums) - k + 1):
            returning = heapq.heappop(nums)

        return returning
        