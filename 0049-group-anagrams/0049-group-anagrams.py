
def sort_alphabet(word):
    return ''.join(sorted(word))

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
     

        if(len(strs) == 0):
            return strs

        if(len(strs) == 1):
            returning = []
            returning.append(strs)
            return returning

        # base case is done 

        final_list = [] # same list 
        sorted_list = [] # same length list
        boolean = []
        for elements in strs:
            boolean.append(0) # this is to specify that the groupings has been done already
            sorted_list.append(sort_alphabet(elements))

        for i in range(0, len(strs)):
            placeholder = [] # defining placeholder list here
            if(i == len(strs) - 1):
                if(boolean[i] == 0):
                    placeholder.append(strs[i])
                    final_list.append(placeholder)
                break
            if(boolean[i] == 0):
                boolean[i] = 1
                placeholder.append(strs[i])
                print(strs[i])
            for j in range(i + 1, len(strs)):
                # naive case:
                if(sorted_list[i] == sorted_list[j] and boolean[j] == 0):
                    boolean[j] = 1
                    placeholder.append(strs[j])
            if(len(placeholder) != 0):
                final_list.append(placeholder)
            

        return final_list



        
        