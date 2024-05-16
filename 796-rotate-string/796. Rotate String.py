class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        decide = 0
        initial = s
        interm = ""
        count = 0
        while(count != len(s)):
            interm = s[1:(len(s))]
            interm += s[0]
            s = interm

            if (s == goal):
                decide = 1
                break
            
            if (initial == s):
                decide = 0
                break

            count += 1

        if (decide == 1):
            return True
        else:
            return False

