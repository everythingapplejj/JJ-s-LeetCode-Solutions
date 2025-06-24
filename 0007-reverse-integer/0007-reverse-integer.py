class Solution:
    def reverse(self, x: int) -> int:
        if(x == 0):
            return 0

        is_negative = False
        if(x >= 0):
            is_negative = False
        else:
            is_negative = True

        number_collection = []
        
        while(abs(x) > 0):
            number_collection.append(abs(x) % 10)
            x = int(abs(x)/10)

        print(number_collection)

        construct = 0

        for i in range(0, len(number_collection)):
            construct = construct * 10 + number_collection[i]
        
        if(is_negative == True):
            construct = -1 * construct
        
        if(construct < -1 * pow(2, 31) or construct > pow(2, 31) - 1):
            return 0
        return construct