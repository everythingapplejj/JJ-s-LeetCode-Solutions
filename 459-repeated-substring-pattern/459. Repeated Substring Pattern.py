class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        placeholder = s
        for i in range(0,len(s) - 1):
            swap = placeholder[0]
            placeholder = placeholder[1:len(placeholder)]
            placeholder += swap
            if(s == placeholder):
                return True
        return False

        
        