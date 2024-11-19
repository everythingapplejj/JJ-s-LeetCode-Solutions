class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        track_len = len(needle)
        for i in range(0, len(haystack) - (track_len - 1)):
            counter = 0
            for j in range(i, i + track_len):
                if(haystack[j] == needle[j - i]):
                    counter += 1
                else:
                    continue
            if(counter == len(needle)):
                return i

        return -1
                

        