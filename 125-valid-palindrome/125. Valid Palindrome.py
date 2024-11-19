class Solution:
    def isPalindrome(self, s: str) -> bool:
        if(len(s) == 0 or s == " "):
            return True
        new_sentence = s.lower()
        splited = new_sentence.split(" ")
        build_string = ""
        for samples in splited:
            for letters in samples:
                if(letters.isalnum()):
                    build_string += letters
        reverse_string = build_string[::-1]
        print(build_string)
        print(reverse_string)
        print("amanaplanacanalpanama")
        if(reverse_string == build_string):
            return True
        else:
            return False
        
        