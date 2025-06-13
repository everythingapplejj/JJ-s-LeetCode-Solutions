class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        # For anagrams I do want to have each pointers to be in lexigraphical order
        # edge case is that there might be only zero or one
    

        binary_checker = []
        sorted_list = []

        final_return = []

        if (len(strs) == 1):
            final_return.append(strs)
            return final_return


        for i in range(0, len(strs)):
            binary_checker.append(0)
            sorted_list.append("".join(sorted(strs[i])))
        
        for i in range(0, len(strs)):
            placeholder = []
            if(binary_checker[i] == 0):
                placeholder.append(strs[i])
                binary_checker[i] = 1
                # can have edge case at the end
                if(i == len(strs) - 1):
                    final_return.append(placeholder)
                    break
            else:
                continue
            for j in range(i + 1, len(strs)):
                if(sorted_list[i] == sorted_list[j] and binary_checker[j] == 0):
                    binary_checker[j] = 1
                    placeholder.append(strs[j])
            
            final_return.append(placeholder)
        
        

        return final_return

        
        