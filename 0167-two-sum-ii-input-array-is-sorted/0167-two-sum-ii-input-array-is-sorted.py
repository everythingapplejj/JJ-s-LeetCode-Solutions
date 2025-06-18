class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        # maybe attempt to try insertion method? 
        getter = []
        pulses = 0
        if(target > 0 and len(numbers) > 100):
            pulses = 1

        start = 0
        
        if(pulses == 1):
            for i in range(0, len(numbers)):
                if(numbers[i] >= 0):
                    start = i
                    break

        for i in range(start, len(numbers) - 1):
            for j in range(i + 1, len(numbers)):
                if(numbers[i] + numbers[j] == target):
                    getter.append(i + 1)
                    getter.append(j + 1)
                    return getter

        return getter
