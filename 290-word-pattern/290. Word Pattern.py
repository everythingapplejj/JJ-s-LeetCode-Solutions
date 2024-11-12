class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        checker_1  = []
        checker_2 = []
        for i in range(0, len(pattern)):
            checker_1.append(pattern[i])

        placeholder = ""
        
        for i in range(0, len(s)):
            if(i == len(s) - 1):
                placeholder += s[i]
                checker_2.append(placeholder)
                break
            if(s[i] == " "):
                checker_2.append(placeholder)
                placeholder = ""
                continue
            else:
                placeholder += s[i]
                continue

        print(checker_1)
        print(checker_2)
        
        if(len(checker_1) != len(checker_2)):
            return False

        bijectional_dict = {}
        bijectional_dict_2 = {}
        
        for i in range(0, len(checker_1)):

            if(checker_1[i] not in bijectional_dict):
                bijectional_dict.update({checker_1[i]: checker_2[i]})
                if(checker_2[i] in bijectional_dict_2):
                    return False
                bijectional_dict_2.update({checker_2[i]: checker_1[i]})
                continue
            else:
                if(bijectional_dict[checker_1[i]] != checker_2[i] or bijectional_dict_2[checker_2[i]] != checker_1[i]):
                    return False

        return True
        
        