class Solution:
    def reverseWords(self, s: str) -> str:
        separate = s.split()
        sentence = ""
        for string in separate:
            sentence += string[::-1]
            sentence += " "
        
        
        return sentence.strip()
