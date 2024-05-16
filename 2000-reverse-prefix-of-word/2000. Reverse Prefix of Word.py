class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        new_string = ""
        count = 0
        interm_count = 0
        for char in word:
            new_string += char
            count += 1
            if (char == ch):
                interm_count += 1
                break
        if (interm_count == 0):
            return word
        else: 
            new_string = new_string[::-1]
            construct = new_string + word[count::]
            return construct