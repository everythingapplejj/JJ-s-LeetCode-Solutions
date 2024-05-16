class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        maxi = 0
        count = 0
        for string in sentences:
            analyze = string.split()
            for num in analyze:
                count += 1
            if (maxi < count):
                maxi = count
            count = 0
        return maxi