class Solution:
    def isPalindrome(self, s: str) -> bool:
        # python has built in function called isalnum as dot (is alphanumeric)
        # python also has built in dot functions for string such as .lower, .upper, etc
        # two edge cases
        
        collector = []
        for letter in s:
            if(letter == " " or not letter.isalnum()):
                continue
            else:
                collector.append(letter.lower())

        reverse = collector[::-1]
        
        for i in range(len(reverse)):
            if(reverse[i] != collector[i]):
                return False

        return True