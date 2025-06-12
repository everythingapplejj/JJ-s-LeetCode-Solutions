class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        # I will be using histograming here again
        hist = {}
        select = -1
        for i in range(0,len(nums)):
            if (nums[i] not in hist):
                hist.update({nums[i]: 1})
            else:
                # know that this is no longer unique anymore
                select = 1
                break

        if (select == -1):
            return False
        else:
            return True