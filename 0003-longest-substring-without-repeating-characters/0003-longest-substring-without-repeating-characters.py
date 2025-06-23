class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        # this is my favorite problem, that includes sliding window problem
        # edge case, there is empty string
        if(len(s) == 0):
            return 0

        if(len(s) == 1):
            return 1


        max_string = 1 # by default this is one!
        for i in range(0, len(s) - 1):
            collector = []
            collector.append(s[i])
            for j in range(i + 1, len(s)):
                if(s[j] in collector):
                    if(len(collector) > max_string):
                        max_string = len(collector)
                    break 
                else:
                    # update as I go, 
                    collector.append(s[j])
                    if(len(collector) > max_string):
                        max_string = len(collector)



        return max_string