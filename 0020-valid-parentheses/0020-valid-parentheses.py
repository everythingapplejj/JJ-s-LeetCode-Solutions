class Solution:
    def isValid(self, s: str) -> bool:
        if(len(s) % 2 != 0):
            return False

        stack = []

        for i in range(0, len(s)):
            if(s[i] == '[' or s[i] == '(' or s[i] == '{'):
                stack.append(s[i])
                continue

            # edge case where the stack can be empty
            if(len(stack) == 0):
                 return False
            placeholder = stack.pop()
            if(placeholder == '['):
                if(s[i] != ']'):
                    return False
            elif(placeholder == '{'):
                if(s[i] != '}'):
                    return False
            elif(placeholder == '('):
                if(s[i] != ')'):
                    return False

        if(len(stack) > 0): 
            return False # another edge case
            
        return True
            