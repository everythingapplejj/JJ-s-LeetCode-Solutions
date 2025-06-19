# for this attempt, I will be using the two pointer method, and should be increasing like gradient like
class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        getter = []
        if(len(numbers) == 0 or len(numbers) == 1):
            return getter
        
        # in this case it is longer or equal to two 

        first_ptr = 0
        last_ptr = len(numbers) - 1
        
        while(last_ptr > first_ptr):
            if(numbers[last_ptr] + numbers[first_ptr] == target):
                getter.append(first_ptr + 1)
                getter.append(last_ptr + 1)
                return getter
            elif (numbers[last_ptr] + numbers[first_ptr] < target):
                first_ptr = first_ptr + 1
                continue

            else:
                last_ptr = last_ptr - 1
                continue
        
        return getter
        