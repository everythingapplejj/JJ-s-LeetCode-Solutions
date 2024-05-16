class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        count = 0
        for char in word:
            if char.islower():
                count = count + 1
        if count == len(word):
            return True
        if word[0].isupper() and count == len(word) - 1:
            return True
        if count == 0:
            return True

        return False