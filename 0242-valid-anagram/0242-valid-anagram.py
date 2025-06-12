class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # this time, utilizing sorting method
        if(len(s) != len(t)):
            return False

        # both needed to be sorted in lexographic order
        sorted_s = sorted(s)
        sorted_t = sorted(t)
    
        # after sorted, each must match one to one
        for i in range(len(sorted_s)):
            if(sorted_s[i] != sorted_t[i]):
                return False

        return True

        