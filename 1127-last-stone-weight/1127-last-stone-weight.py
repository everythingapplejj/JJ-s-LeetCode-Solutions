class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
    
        sorted_arr = sorted(stones) # going to sort the stones first

        while(len(sorted_arr) > 1):
            # continuing until ther eis no more than one stone remaining :)
            max_1 = sorted_arr.pop(len(sorted_arr) - 1)
            max_2 = sorted_arr.pop(len(sorted_arr) - 1)
            diff = abs(max_1 - max_2)
            if(diff == 0):
                continue # do not include anything to the stone list
            # else I have to include the updated one to the list
            sorted_arr.append(diff)
            sorted_arr = sorted(sorted_arr)

        if(len(sorted_arr) == 0):
            return 0
        return sorted_arr[0]

            