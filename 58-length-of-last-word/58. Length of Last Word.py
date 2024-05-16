class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        last = s.split()
        last_string = last[len(last) - 1]
        return len(last_string)