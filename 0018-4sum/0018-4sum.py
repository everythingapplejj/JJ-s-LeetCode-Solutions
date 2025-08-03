class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        #* problem of the day 
        collector = []

        sorted_list = sorted(nums)
        print(sorted_list)

        # treat this like the three sum or two sum
        seen_dp_first = []
        seen_dp_second = []

        for i in range(0, len(sorted_list) - 3):
            # if already seen, then there is no use to process such again, skip the recalculateions
            if(sorted_list[i] in seen_dp_first):
                continue
            seen_dp_first.append(sorted_list[i])
            for j in range(i + 1, len(sorted_list) - 2):
                # if(sorted_list[j] in seen_dp_second):
                #     continue
                # seen_dp_second.append(sorted_list[j])
                first_ptr = j + 1
                last_ptr = len(sorted_list) - 1
                # generate algorithm first
                placeholder = []
                while(first_ptr < last_ptr):
                    if(sorted_list[i] + sorted_list[j] + sorted_list[first_ptr] + sorted_list[last_ptr] == target):
                        placeholder.append(sorted_list[i])
                        placeholder.append(sorted_list[j])
                        placeholder.append(sorted_list[first_ptr])
                        placeholder.append(sorted_list[last_ptr])
                        # after appending everything to the placeholder, then check if the possible combination exists
                        placeholder = sorted(placeholder)
                        if(placeholder not in collector):
                            collector.append(placeholder)
                        placeholder = [] # reset the placeholder
                        first_ptr += 1 # there can be another combination so continue 
                        last_ptr -= 1
                        continue

                    if(sorted_list[i] + sorted_list[j] + sorted_list[first_ptr] + sorted_list[last_ptr] > target):
                        # this is the case where the sum is large, so right ptr should decrease
                        last_ptr -= 1
                        continue

                    if(sorted_list[i] + sorted_list[j] + sorted_list[first_ptr] + sorted_list[last_ptr] < target):
                        # this is the case where the sum is small, so the left ptr should decrease
                        first_ptr += 1
                        continue

        return collector